#pragma once

#include "../dxvk/dxvk_include.h"

#include "dxgi_format.h"
#include "dxgi_include.h"

namespace dxvk {
  class DxgiAdapter;
  class DxvkAdapter;
  class DxvkBuffer;
  class DxvkDevice;
  class DxvkImage;
}


/**
 * \brief Private DXGI device interface
 * 
 * The implementation of \c IDXGIDevice stores a
 * \ref DxvkDevice which can be retrieved using
 * this interface.
 */
MIDL_INTERFACE("7a622cf6-627a-46b2-b52f-360ef3da831c")
IDXGIVkDevice : public IDXGIDevice2 {
  static const GUID guid;
  
  virtual ~IDXGIVkDevice() { }
  
  virtual dxvk::Rc<dxvk::DxvkDevice> STDMETHODCALLTYPE GetDXVKDevice() = 0;
};


/**
 * \brief Private DXGI adapter interface
 * 
 * The implementation of \c IDXGIAdapter holds a
 * \ref DxvkAdapter which can be retrieved using
 * this interface.
 */
MIDL_INTERFACE("907bf281-ea3c-43b4-a8e4-9f231107b4ff")
IDXGIVkAdapter : public IDXGIAdapter1 {
  static const GUID guid;
  
  virtual dxvk::Rc<dxvk::DxvkAdapter> STDMETHODCALLTYPE GetDXVKAdapter() = 0;
  
  /**
   * \brief Creates a DXGI device object
   * 
   * \param [in] pAdapter The adapter
   * \param [in] pFeatures Device features to enable
   * \param [out] ppDevice The DXGI device object
   * \returns \c S_OK on success, or an error code
   */
  virtual HRESULT STDMETHODCALLTYPE CreateDevice(
          IDXGIObject*              pContainer,
    const VkPhysicalDeviceFeatures* pFeatures,
          IDXGIVkDevice**           ppDevice) = 0;
  
  /**
   * \brief Maps a DXGI format to a compatible Vulkan format
   * 
   * For color formats, the returned Vulkan format has the
   * same memory layout as the DXGI format so that it can
   * be mapped and copied to buffers. For depth-stencil
   * formats, this is not guaranteed.
   * \param [in] format The DXGI format
   * \param [in] mode Format lookup mode
   * \returns Vulkan format pair
   */
  virtual dxvk::DXGI_VK_FORMAT_INFO STDMETHODCALLTYPE LookupFormat(
          DXGI_FORMAT               format,
          dxvk::DXGI_VK_FORMAT_MODE mode) = 0;
};


/**
 * \brief Swap chain back buffer interface
 * 
 * Allows the swap chain and presenter to query
 * the underlying image while it is embedded in
 * a texture object specified by the client API.
 */
MIDL_INTERFACE("5679becd-8547-4d93-96a1-e61a1ce7ef37")
IDXGIVkBackBuffer : public IUnknown {
  static const GUID guid;
  
  virtual dxvk::Rc<dxvk::DxvkImage> GetDXVKImage() = 0;
};


/**
 * \brief Private presentation device interface
 * 
 * Allows a swap chain to communicate with the device
 * in order to flush pending commands or create the
 * back buffer interface.
 */
MIDL_INTERFACE("79352328-16f2-4f81-9746-9c2e2ccd43cf")
IDXGIVkPresenter : public IUnknown {
  static const GUID guid;
  
  /**
   * \brief Creates a swap chain back buffer
   * 
   * \param [in] pSwapChainDesc Swap chain description
   * \param [out] ppBackBuffer The swap chain back buffer
   * \returns \c S_OK on success
   */
  virtual HRESULT STDMETHODCALLTYPE CreateSwapChainBackBuffer(
    const DXGI_SWAP_CHAIN_DESC*       pSwapChainDesc,
          IDXGIVkBackBuffer**         ppBackBuffer) = 0;
  
  /**
   * \brief Flushes the immediate context
   * 
   * Used by the swap chain's \c Present method to
   * ensure that all rendering commands get dispatched
   * before presenting the swap chain's back buffer.
   * \returns \c S_OK on success
   */
  virtual HRESULT STDMETHODCALLTYPE FlushRenderingCommands() = 0;
  
  /**
   * \brief Underlying DXVK device
   * 
   * \param [in] riid Device type
   * \param [in] ppDevice device
   * \returns DXVK device handle
   */
  virtual HRESULT STDMETHODCALLTYPE GetDevice(
          REFGUID     riid,
          void**      ppDevice) = 0;
};

#ifdef _MSC_VER
struct __declspec(uuid("907bf281-ea3c-43b4-a8e4-9f231107b4ff")) IDXGIVkAdapter;
struct __declspec(uuid("7a622cf6-627a-46b2-b52f-360ef3da831c")) IDXGIVkDevice;
struct __declspec(uuid("5679becd-8547-4d93-96a1-e61a1ce7ef37")) IDXGIVkBackBuffer;
struct __declspec(uuid("79352328-16f2-4f81-9746-9c2e2ccd43cf")) IDXGIVkPresenter;
#else
DXVK_DEFINE_GUID(IDXGIVkAdapter);
DXVK_DEFINE_GUID(IDXGIVkDevice);
DXVK_DEFINE_GUID(IDXGIVkBackBuffer);
DXVK_DEFINE_GUID(IDXGIVkPresenter);
#endif