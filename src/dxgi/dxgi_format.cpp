#include "dxgi_format.h"

#include <array>

namespace dxvk {
  
  std::array<DXGI_VK_FORMAT_MAPPING, 133> g_dxgiFormats = {{
    // DXGI_FORMAT_UNKNOWN
    { },
    // DXGI_FORMAT_R32G32B32A32_TYPELESS
    { VK_FORMAT_R32G32B32A32_UINT,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R32G32B32A32_UINT },
    // DXGI_FORMAT_R32G32B32A32_FLOAT
    { VK_FORMAT_R32G32B32A32_SFLOAT,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R32G32B32A32_UINT,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_R32G32B32A32_UINT
    { VK_FORMAT_R32G32B32A32_UINT,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R32G32B32A32_UINT,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_R32G32B32A32_SINT
    { VK_FORMAT_R32G32B32A32_SINT,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R32G32B32A32_UINT,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_R32G32B32_TYPELESS
    { VK_FORMAT_R32G32B32_UINT,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R32G32B32_UINT },
    // DXGI_FORMAT_R32G32B32_FLOAT
    { VK_FORMAT_R32G32B32_SFLOAT,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R32G32B32_UINT,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_R32G32B32_UINT
    { VK_FORMAT_R32G32B32_UINT,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R32G32B32_UINT,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_R32G32B32_SINT
    { VK_FORMAT_R32G32B32_SINT,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R32G32B32_UINT,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_R16G16B16A16_TYPELESS
    { VK_FORMAT_R16G16B16A16_UINT,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R16G16B16A16_UINT },
    // DXGI_FORMAT_R16G16B16A16_FLOAT
    { VK_FORMAT_R16G16B16A16_SFLOAT,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R16G16B16A16_UINT,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_R16G16B16A16_UNORM
    { VK_FORMAT_R16G16B16A16_UNORM,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R16G16B16A16_UINT,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_R16G16B16A16_UINT
    { VK_FORMAT_R16G16B16A16_UINT,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R16G16B16A16_UINT,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_R16G16B16A16_SNORM
    { VK_FORMAT_R16G16B16A16_SNORM,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R16G16B16A16_UINT,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_R16G16B16A16_SINT
    { VK_FORMAT_R16G16B16A16_SINT,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R16G16B16A16_UINT,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_R32G32_TYPELESS
    { VK_FORMAT_R32G32_UINT,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R32G32_UINT },
    // DXGI_FORMAT_R32G32_FLOAT
    { VK_FORMAT_R32G32_SFLOAT,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R32G32_UINT,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_R32G32_UINT
    { VK_FORMAT_R32G32_UINT,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R32G32_UINT,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_R32G32_SINT
    { VK_FORMAT_R32G32_SINT,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R32G32_UINT,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_R32G8X24_TYPELESS
    { VK_FORMAT_UNDEFINED,
      VK_FORMAT_D32_SFLOAT_S8_UINT,
      VK_FORMAT_UNDEFINED },
    // DXGI_FORMAT_D32_FLOAT_S8X24_UINT
    { VK_FORMAT_UNDEFINED,
      VK_FORMAT_D32_SFLOAT_S8_UINT,
      VK_FORMAT_UNDEFINED,
      0, VK_IMAGE_ASPECT_DEPTH_BIT | VK_IMAGE_ASPECT_STENCIL_BIT },
    // DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS
    { VK_FORMAT_UNDEFINED,
      VK_FORMAT_D32_SFLOAT_S8_UINT,
      VK_FORMAT_UNDEFINED,
      0, VK_IMAGE_ASPECT_DEPTH_BIT },
    // DXGI_FORMAT_X32_TYPELESS_G8X24_UINT
    { VK_FORMAT_UNDEFINED,
      VK_FORMAT_D32_SFLOAT_S8_UINT,
      VK_FORMAT_UNDEFINED,
      0, VK_IMAGE_ASPECT_STENCIL_BIT },
    // DXGI_FORMAT_R10G10B10A2_TYPELESS
    { VK_FORMAT_A2B10G10R10_UINT_PACK32,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_A2B10G10R10_UINT_PACK32 },
    // DXGI_FORMAT_R10G10B10A2_UNORM
    { VK_FORMAT_A2B10G10R10_UNORM_PACK32,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_A2B10G10R10_UINT_PACK32,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_R10G10B10A2_UINT
    { VK_FORMAT_A2B10G10R10_UINT_PACK32,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_A2B10G10R10_UINT_PACK32,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_R11G11B10_FLOAT
    { VK_FORMAT_B10G11R11_UFLOAT_PACK32,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_UNDEFINED,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_R8G8B8A8_TYPELESS
    { VK_FORMAT_R8G8B8A8_UINT,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R8G8B8A8_UINT },
    // DXGI_FORMAT_R8G8B8A8_UNORM
    { VK_FORMAT_R8G8B8A8_UNORM,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R8G8B8A8_UINT,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_R8G8B8A8_UNORM_SRGB
    { VK_FORMAT_R8G8B8A8_SRGB,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R8G8B8A8_UINT,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_R8G8B8A8_UINT
    { VK_FORMAT_R8G8B8A8_UINT,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R8G8B8A8_UINT,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_R8G8B8A8_SNORM
    { VK_FORMAT_R8G8B8A8_SNORM,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R8G8B8A8_UINT,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_R8G8B8A8_SINT
    { VK_FORMAT_R8G8B8A8_SINT,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R8G8B8A8_UINT,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_R16G16_TYPELESS
    { VK_FORMAT_R16G16_UINT,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R16G16_UINT },
    // DXGI_FORMAT_R16G16_FLOAT
    { VK_FORMAT_R16G16_SFLOAT,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R16G16_UINT,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_R16G16_UNORM
    { VK_FORMAT_R16G16_UNORM,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R16G16_UINT,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_R16G16_UINT
    { VK_FORMAT_R16G16_UINT,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R16G16_UINT,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_R16G16_SNORM
    { VK_FORMAT_R16G16_SNORM,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R16G16_UINT,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_R16G16_SINT
    { VK_FORMAT_R16G16_SINT,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R16G16_UINT,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_R32_TYPELESS
    { VK_FORMAT_R32_UINT,
      VK_FORMAT_D32_SFLOAT,
      VK_FORMAT_R32_UINT },
    // DXGI_FORMAT_D32_FLOAT
    { VK_FORMAT_UNDEFINED,
      VK_FORMAT_D32_SFLOAT,
      VK_FORMAT_UNDEFINED,
      0, VK_IMAGE_ASPECT_DEPTH_BIT },
    // DXGI_FORMAT_R32_FLOAT
    { VK_FORMAT_R32_SFLOAT,
      VK_FORMAT_D32_SFLOAT,
      VK_FORMAT_R32_UINT,
      VK_IMAGE_ASPECT_COLOR_BIT,
      VK_IMAGE_ASPECT_DEPTH_BIT },
    // DXGI_FORMAT_R32_UINT
    { VK_FORMAT_R32_UINT,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R32_UINT,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_R32_SINT
    { VK_FORMAT_R32_SINT,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R32_UINT,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_R24G8_TYPELESS
    { VK_FORMAT_UNDEFINED,
      VK_FORMAT_D32_SFLOAT_S8_UINT,
      VK_FORMAT_UNDEFINED },
    // DXGI_FORMAT_D24_UNORM_S8_UINT
    { VK_FORMAT_UNDEFINED,
      VK_FORMAT_D32_SFLOAT_S8_UINT,
      VK_FORMAT_UNDEFINED,
      0, VK_IMAGE_ASPECT_DEPTH_BIT | VK_IMAGE_ASPECT_STENCIL_BIT },
    // DXGI_FORMAT_R24_UNORM_X8_TYPELESS
    { VK_FORMAT_UNDEFINED,
      VK_FORMAT_D32_SFLOAT_S8_UINT,
      VK_FORMAT_UNDEFINED,
      0, VK_IMAGE_ASPECT_DEPTH_BIT },
    // DXGI_FORMAT_X24_TYPELESS_G8_UINT
    { VK_FORMAT_UNDEFINED,
      VK_FORMAT_D32_SFLOAT_S8_UINT,
      VK_FORMAT_UNDEFINED,
      0, VK_IMAGE_ASPECT_STENCIL_BIT },
    // DXGI_FORMAT_R8G8_TYPELESS
    { VK_FORMAT_R8G8_UINT,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R8G8_UINT },
    // DXGI_FORMAT_R8G8_UNORM
    { VK_FORMAT_R8G8_UNORM,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R8G8_UINT,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_R8G8_UINT
    { VK_FORMAT_R8G8_UINT,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R8G8_UINT,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_R8G8_SNORM
    { VK_FORMAT_R8G8_SNORM,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R8G8_UINT,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_R8G8_SINT
    { VK_FORMAT_R8G8_SINT,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R8G8_UINT,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_R16_TYPELESS
    { VK_FORMAT_R16_UINT,
      VK_FORMAT_D16_UNORM,
      VK_FORMAT_R16_UINT },
    // DXGI_FORMAT_R16_FLOAT
    { VK_FORMAT_R16_SFLOAT,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R16_UINT,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_D16_UNORM
    { VK_FORMAT_UNDEFINED,
      VK_FORMAT_D16_UNORM,
      VK_FORMAT_UNDEFINED,
      0, VK_IMAGE_ASPECT_DEPTH_BIT },
    // DXGI_FORMAT_R16_UNORM
    { VK_FORMAT_R16_UNORM,
      VK_FORMAT_D16_UNORM,
      VK_FORMAT_R16_UINT,
      VK_IMAGE_ASPECT_COLOR_BIT,
      VK_IMAGE_ASPECT_DEPTH_BIT },
    // DXGI_FORMAT_R16_UINT
    { VK_FORMAT_R16_UINT,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R16_UINT,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_R16_SNORM
    { VK_FORMAT_R16_SNORM,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R16_UINT,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_R16_SINT
    { VK_FORMAT_R16_SINT,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R16_UINT,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_R8_TYPELESS
    { VK_FORMAT_R8_UINT,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R8_UINT },
    // DXGI_FORMAT_R8_UNORM
    { VK_FORMAT_R8_UNORM,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R8_UINT,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_R8_UINT
    { VK_FORMAT_R8_UINT,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R8_UINT,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_R8_SNORM
    { VK_FORMAT_R8_SNORM,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R8_UINT,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_R8_SINT
    { VK_FORMAT_R8_SINT,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_R8_UINT,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_A8_UNORM
    { VK_FORMAT_R8_UNORM,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_UNDEFINED,
      VK_IMAGE_ASPECT_COLOR_BIT, 0,
      { VK_COMPONENT_SWIZZLE_ZERO, VK_COMPONENT_SWIZZLE_ZERO,
        VK_COMPONENT_SWIZZLE_ZERO, VK_COMPONENT_SWIZZLE_R }},
    // DXGI_FORMAT_R1_UNORM
    { }, // Unsupported
    // DXGI_FORMAT_R9G9B9E5_SHAREDEXP
    { VK_FORMAT_E5B9G9R9_UFLOAT_PACK32,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_UNDEFINED,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_R8G8_B8G8_UNORM
    { VK_FORMAT_B8G8R8G8_422_UNORM_KHR,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_UNDEFINED,
      VK_IMAGE_ASPECT_COLOR_BIT, 0,
      { VK_COMPONENT_SWIZZLE_B, VK_COMPONENT_SWIZZLE_G,
        VK_COMPONENT_SWIZZLE_R, VK_COMPONENT_SWIZZLE_ONE }},
    // DXGI_FORMAT_G8R8_G8B8_UNORM
    { VK_FORMAT_G8B8G8R8_422_UNORM_KHR,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_UNDEFINED,
      VK_IMAGE_ASPECT_COLOR_BIT, 0,
      { VK_COMPONENT_SWIZZLE_B, VK_COMPONENT_SWIZZLE_G,
        VK_COMPONENT_SWIZZLE_R, VK_COMPONENT_SWIZZLE_ONE }},
    // DXGI_FORMAT_BC1_TYPELESS
    { VK_FORMAT_BC1_RGBA_UNORM_BLOCK,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_UNDEFINED },
    // DXGI_FORMAT_BC1_UNORM
    { VK_FORMAT_BC1_RGBA_UNORM_BLOCK,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_UNDEFINED,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_BC1_UNORM_SRGB
    { VK_FORMAT_BC1_RGBA_SRGB_BLOCK,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_UNDEFINED,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_BC2_TYPELESS
    { VK_FORMAT_BC2_UNORM_BLOCK,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_UNDEFINED },
    // DXGI_FORMAT_BC2_UNORM
    { VK_FORMAT_BC2_UNORM_BLOCK,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_UNDEFINED,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_BC2_UNORM_SRGB
    { VK_FORMAT_BC2_SRGB_BLOCK,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_UNDEFINED,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_BC3_TYPELESS
    { VK_FORMAT_BC3_UNORM_BLOCK,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_UNDEFINED },
    // DXGI_FORMAT_BC3_UNORM
    { VK_FORMAT_BC3_UNORM_BLOCK,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_UNDEFINED,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_BC3_UNORM_SRGB
    { VK_FORMAT_BC3_SRGB_BLOCK,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_UNDEFINED,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_BC4_TYPELESS
    { VK_FORMAT_BC4_UNORM_BLOCK,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_UNDEFINED },
    // DXGI_FORMAT_BC4_UNORM
    { VK_FORMAT_BC4_UNORM_BLOCK,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_UNDEFINED,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_BC4_SNORM
    { VK_FORMAT_BC4_SNORM_BLOCK,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_UNDEFINED,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_BC5_TYPELESS
    { VK_FORMAT_BC5_UNORM_BLOCK,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_UNDEFINED },
    // DXGI_FORMAT_BC5_UNORM
    { VK_FORMAT_BC5_UNORM_BLOCK,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_UNDEFINED,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_BC5_SNORM
    { VK_FORMAT_BC5_SNORM_BLOCK,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_UNDEFINED,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_B5G6R5_UNORM
    { VK_FORMAT_R5G6B5_UNORM_PACK16,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_UNDEFINED,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_B5G5R5A1_UNORM
    { VK_FORMAT_A1R5G5B5_UNORM_PACK16,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_UNDEFINED,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_B8G8R8A8_UNORM
    { VK_FORMAT_B8G8R8A8_UNORM,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_UNDEFINED,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_B8G8R8X8_UNORM
    { VK_FORMAT_B8G8R8A8_UNORM,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_UNDEFINED,
      VK_IMAGE_ASPECT_COLOR_BIT, 0,
      { VK_COMPONENT_SWIZZLE_R, VK_COMPONENT_SWIZZLE_G,
        VK_COMPONENT_SWIZZLE_B, VK_COMPONENT_SWIZZLE_ONE }},
    // DXGI_FORMAT_R10G10B10_XR_BIAS_A2_UNORM
    { }, // Unsupported
    // DXGI_FORMAT_B8G8R8A8_TYPELESS
    { VK_FORMAT_B8G8R8A8_UNORM,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_UNDEFINED },
    // DXGI_FORMAT_B8G8R8A8_UNORM_SRGB
    { VK_FORMAT_B8G8R8A8_SRGB,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_UNDEFINED,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_B8G8R8X8_TYPELESS
    { VK_FORMAT_B8G8R8A8_UNORM,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_UNDEFINED,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_B8G8R8X8_UNORM_SRGB
    { VK_FORMAT_B8G8R8A8_SRGB,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_UNDEFINED,
      VK_IMAGE_ASPECT_COLOR_BIT, 0,
      { VK_COMPONENT_SWIZZLE_R, VK_COMPONENT_SWIZZLE_G,
        VK_COMPONENT_SWIZZLE_B, VK_COMPONENT_SWIZZLE_ONE }},
    // DXGI_FORMAT_BC6H_TYPELESS
    { VK_FORMAT_BC6H_UFLOAT_BLOCK,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_UNDEFINED },
    // DXGI_FORMAT_BC6H_UF16
    { VK_FORMAT_BC6H_UFLOAT_BLOCK,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_UNDEFINED,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_BC6H_SF16
    { VK_FORMAT_BC6H_SFLOAT_BLOCK,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_UNDEFINED,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_BC7_TYPELESS
    { VK_FORMAT_BC7_UNORM_BLOCK,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_UNDEFINED },
    // DXGI_FORMAT_BC7_UNORM
    { VK_FORMAT_BC7_UNORM_BLOCK,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_UNDEFINED,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_BC7_UNORM_SRGB
    { VK_FORMAT_BC7_SRGB_BLOCK,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_UNDEFINED,
      VK_IMAGE_ASPECT_COLOR_BIT },
    // DXGI_FORMAT_AYUV
    { }, // Unsupported
    // DXGI_FORMAT_Y410
    { }, // Unsupported
    // DXGI_FORMAT_Y416
    { }, // Unsupported
    // DXGI_FORMAT_NV12
    { }, // Unsupported
    // DXGI_FORMAT_P010
    { }, // Unsupported
    // DXGI_FORMAT_P016
    { }, // Unsupported
    // DXGI_FORMAT_420_OPAQUE
    { }, // Unsupported
    // DXGI_FORMAT_YUY2
    { }, // Unsupported
    // DXGI_FORMAT_Y210
    { }, // Unsupported
    // DXGI_FORMAT_Y216
    { }, // Unsupported
    // DXGI_FORMAT_NV11
    { }, // Unsupported
    // DXGI_FORMAT_AI44
    { }, // Unsupported
    // DXGI_FORMAT_IA44
    { }, // Unsupported
    // DXGI_FORMAT_P8
    { }, // Unsupported
    // DXGI_FORMAT_A8P8
    { }, // Unsupported
    // DXGI_FORMAT_B4G4R4A4_UNORM
    { VK_FORMAT_B4G4R4A4_UNORM_PACK16,
      VK_FORMAT_UNDEFINED,
      VK_FORMAT_UNDEFINED,
      VK_IMAGE_ASPECT_COLOR_BIT, 0,
      { VK_COMPONENT_SWIZZLE_G, VK_COMPONENT_SWIZZLE_R,
        VK_COMPONENT_SWIZZLE_A, VK_COMPONENT_SWIZZLE_B }},
    // DXGI_FORMAT_P208
    { }, // Unsupported
    // DXGI_FORMAT_V208
    { }, // Unsupported
    // DXGI_FORMAT_V408
    { }, // Unsupported
  }};
  
  
  DXGI_VK_FORMAT_INFO GetDXGIFormatInfo(
          DXGI_FORMAT         Format,
          DXGI_VK_FORMAT_MODE Mode) {
    const size_t formatId = size_t(Format);
    
    const DXGI_VK_FORMAT_MAPPING& mapping
      = formatId < g_dxgiFormats.size()
        ? g_dxgiFormats[formatId]
        : g_dxgiFormats[0];
    
    switch (Mode) {
      case DXGI_VK_FORMAT_MODE_ANY:
        return mapping.FormatColor != VK_FORMAT_UNDEFINED
          ? DXGI_VK_FORMAT_INFO { mapping.FormatColor, mapping.AspectColor, mapping.Swizzle }
          : DXGI_VK_FORMAT_INFO { mapping.FormatDepth, mapping.AspectDepth };
      
      case DXGI_VK_FORMAT_MODE_COLOR:
        return { mapping.FormatColor, mapping.AspectColor, mapping.Swizzle };
      
      case DXGI_VK_FORMAT_MODE_DEPTH:
        return { mapping.FormatDepth, mapping.AspectDepth };
      
      case DXGI_VK_FORMAT_MODE_RAW:
        return { mapping.FormatRaw, mapping.AspectColor };
    }
    
    Logger::err("DXGI: GetDXGIFormatInfo: Internal error");
    return DXGI_VK_FORMAT_INFO();
  }
  
};