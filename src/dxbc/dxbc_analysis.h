#pragma once

#include "dxbc_chunk_isgn.h"
#include "dxbc_decoder.h"
#include "dxbc_defs.h"
#include "dxbc_names.h"
#include "dxbc_options.h"
#include "dxbc_util.h"

namespace dxvk {
  
  /**
   * \brief Info about unordered access views
   * 
   * Stores whether an UAV is accessed with typed
   * read or atomic instructions. This information
   * will be used to generate image types.
   */
  struct DxbcUavInfo {
    bool accessTypedLoad = false;
    bool accessAtomicOp  = false;
  };
  
  /**
   * \brief Counts cull and clip distances
   */
  struct DxbcClipCullInfo {
    uint32_t numClipPlanes = 0;
    uint32_t numCullPlanes = 0;
  };
  
  /**
   * \brief Shader analysis info
   */
  struct DxbcAnalysisInfo {
    std::array<DxbcUavInfo, 64> uavInfos;
    
    DxbcClipCullInfo clipCullIn;
    DxbcClipCullInfo clipCullOut;
  };
  
  /**
   * \brief DXBC shader analysis pass
   * 
   * Collects information about the shader itself
   * and the resources used by the shader, which
   * will later be used by the actual compiler.
   */
  class DxbcAnalyzer {
    
  public:
    
    DxbcAnalyzer(
      const DxbcOptions&        options,
      const DxbcProgramVersion& version,
      const Rc<DxbcIsgn>&       isgn,
      const Rc<DxbcIsgn>&       osgn,
            DxbcAnalysisInfo&   analysis);
    
    ~DxbcAnalyzer();
    
    /**
     * \brief Processes a single instruction
     * \param [in] ins The instruction
     */
    void processInstruction(
      const DxbcShaderInstruction&  ins);
    
  private:
    
    Rc<DxbcIsgn> m_isgn;
    Rc<DxbcIsgn> m_osgn;
    
    DxbcAnalysisInfo* m_analysis = nullptr;
    
    DxbcClipCullInfo getClipCullInfo(
      const Rc<DxbcIsgn>& sgn) const;
    
  };
  
}