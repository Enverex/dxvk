#include <cstring>

#include "dxvk_descriptor.h"
#include "dxvk_pipelayout.h"

namespace dxvk {
  
  DxvkDescriptorSlotMapping:: DxvkDescriptorSlotMapping() { }
  DxvkDescriptorSlotMapping::~DxvkDescriptorSlotMapping() { }
  
  
  void DxvkDescriptorSlotMapping::defineSlot(
          uint32_t              slot,
          VkDescriptorType      type,
          VkImageViewType       view,
          VkShaderStageFlagBits stage) {
    uint32_t bindingId = this->getBindingId(slot);
    
    if (bindingId != InvalidBinding) {
      m_descriptorSlots[bindingId].stages |= stage;
    } else {
      DxvkDescriptorSlot slotInfo;
      slotInfo.slot   = slot;
      slotInfo.type   = type;
      slotInfo.view   = view;
      slotInfo.stages = stage;
      m_descriptorSlots.push_back(slotInfo);
    }
  }
  
  
  uint32_t DxvkDescriptorSlotMapping::getBindingId(uint32_t slot) const {
    // This won't win a performance competition, but the number
    // of bindings used by a shader is usually much smaller than
    // the number of resource slots available to the system.
    for (uint32_t i = 0; i < m_descriptorSlots.size(); i++) {
      if (m_descriptorSlots[i].slot == slot)
        return i;
    }
    
    return InvalidBinding;
  }
  
  
  DxvkPipelineLayout::DxvkPipelineLayout(
    const Rc<vk::DeviceFn>&   vkd,
          uint32_t            bindingCount,
    const DxvkDescriptorSlot* bindingInfos,
          VkPipelineBindPoint pipelineBindPoint)
  : m_vkd(vkd), m_bindingSlots(bindingCount) {
    
    for (uint32_t i = 0; i < bindingCount; i++)
      m_bindingSlots[i] = bindingInfos[i];
    
    std::vector<VkDescriptorSetLayoutBinding>       bindings(bindingCount);
    std::vector<VkDescriptorUpdateTemplateEntryKHR> tEntries(bindingCount);
    
    for (uint32_t i = 0; i < bindingCount; i++) {
      bindings[i].binding            = i;
      bindings[i].descriptorType     = bindingInfos[i].type;
      bindings[i].descriptorCount    = 1;
      bindings[i].stageFlags         = bindingInfos[i].stages;
      bindings[i].pImmutableSamplers = nullptr;
      
      tEntries[i].dstBinding      = i;
      tEntries[i].dstArrayElement = 0;
      tEntries[i].descriptorCount = 1;
      tEntries[i].descriptorType  = bindingInfos[i].type;
      tEntries[i].offset          = sizeof(DxvkDescriptorInfo) * i;
      tEntries[i].stride          = 0;
    }
    
    // Create descriptor set layout
    VkDescriptorSetLayoutCreateInfo dsetInfo;
    dsetInfo.sType        = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO;
    dsetInfo.pNext        = nullptr;
    dsetInfo.flags        = 0;
    dsetInfo.bindingCount = bindings.size();
    dsetInfo.pBindings    = bindings.data();
    
    if (m_vkd->vkCreateDescriptorSetLayout(m_vkd->device(),
          &dsetInfo, nullptr, &m_descriptorSetLayout) != VK_SUCCESS)
      throw DxvkError("DxvkPipelineLayout: Failed to create descriptor set layout");
    
    // Create pipeline layout
    VkPipelineLayoutCreateInfo pipeInfo;
    pipeInfo.sType                  = VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO;
    pipeInfo.pNext                  = nullptr;
    pipeInfo.flags                  = 0;
    pipeInfo.setLayoutCount         = 1;
    pipeInfo.pSetLayouts            = &m_descriptorSetLayout;
    pipeInfo.pushConstantRangeCount = 0;
    pipeInfo.pPushConstantRanges    = nullptr;
    
    if (m_vkd->vkCreatePipelineLayout(m_vkd->device(),
        &pipeInfo, nullptr, &m_pipelineLayout) != VK_SUCCESS) {
      m_vkd->vkDestroyDescriptorSetLayout(m_vkd->device(), m_descriptorSetLayout, nullptr);
      throw DxvkError("DxvkPipelineLayout: Failed to create pipeline layout");
    }
    
    // Create descriptor update template
    VkDescriptorUpdateTemplateCreateInfoKHR templateInfo;
    templateInfo.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO_KHR;
    templateInfo.pNext = nullptr;
    templateInfo.flags = 0;
    templateInfo.descriptorUpdateEntryCount = tEntries.size();
    templateInfo.pDescriptorUpdateEntries   = tEntries.data();
    templateInfo.templateType               = VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_DESCRIPTOR_SET_KHR;
    templateInfo.descriptorSetLayout        = m_descriptorSetLayout;
    templateInfo.pipelineBindPoint          = pipelineBindPoint;
    templateInfo.pipelineLayout             = m_pipelineLayout;
    templateInfo.set                        = 0;
    
    if (m_vkd->vkCreateDescriptorUpdateTemplateKHR(m_vkd->device(),
        &templateInfo, nullptr, &m_descriptorTemplate) != VK_SUCCESS) {
      m_vkd->vkDestroyDescriptorSetLayout(m_vkd->device(), m_descriptorSetLayout, nullptr);
      m_vkd->vkDestroyPipelineLayout(m_vkd->device(), m_pipelineLayout, nullptr);
      throw DxvkError("DxvkPipelineLayout: Failed to create descriptor update template");
    }
  }
  
  
  DxvkPipelineLayout::~DxvkPipelineLayout() {
    m_vkd->vkDestroyDescriptorUpdateTemplateKHR(
      m_vkd->device(), m_descriptorTemplate, nullptr);
    
    m_vkd->vkDestroyPipelineLayout(
      m_vkd->device(), m_pipelineLayout, nullptr);
    
    m_vkd->vkDestroyDescriptorSetLayout(
      m_vkd->device(), m_descriptorSetLayout, nullptr);
  }
  
}