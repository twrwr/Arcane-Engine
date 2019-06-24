/******************************************************************************
 * The MIT License (MIT)
 *
 * Copyright (c) 2016-2019 Baldur Karlsson
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 ******************************************************************************/

#include "common/common.h"
#include "serialise/serialiser.h"
#include "dxgi_common.h"

template <>
rdcstr DoStringise(const DXGI_FORMAT &el)
{
  BEGIN_ENUM_STRINGISE(DXGI_FORMAT);
  {
    STRINGISE_ENUM(DXGI_FORMAT_UNKNOWN)
    STRINGISE_ENUM(DXGI_FORMAT_R32G32B32A32_TYPELESS)
    STRINGISE_ENUM(DXGI_FORMAT_R32G32B32A32_FLOAT)
    STRINGISE_ENUM(DXGI_FORMAT_R32G32B32A32_UINT)
    STRINGISE_ENUM(DXGI_FORMAT_R32G32B32A32_SINT)
    STRINGISE_ENUM(DXGI_FORMAT_R32G32B32_TYPELESS)
    STRINGISE_ENUM(DXGI_FORMAT_R32G32B32_FLOAT)
    STRINGISE_ENUM(DXGI_FORMAT_R32G32B32_UINT)
    STRINGISE_ENUM(DXGI_FORMAT_R32G32B32_SINT)
    STRINGISE_ENUM(DXGI_FORMAT_R16G16B16A16_TYPELESS)
    STRINGISE_ENUM(DXGI_FORMAT_R16G16B16A16_FLOAT)
    STRINGISE_ENUM(DXGI_FORMAT_R16G16B16A16_UNORM)
    STRINGISE_ENUM(DXGI_FORMAT_R16G16B16A16_UINT)
    STRINGISE_ENUM(DXGI_FORMAT_R16G16B16A16_SNORM)
    STRINGISE_ENUM(DXGI_FORMAT_R16G16B16A16_SINT)
    STRINGISE_ENUM(DXGI_FORMAT_R32G32_TYPELESS)
    STRINGISE_ENUM(DXGI_FORMAT_R32G32_FLOAT)
    STRINGISE_ENUM(DXGI_FORMAT_R32G32_UINT)
    STRINGISE_ENUM(DXGI_FORMAT_R32G32_SINT)
    STRINGISE_ENUM(DXGI_FORMAT_R32G8X24_TYPELESS)
    STRINGISE_ENUM(DXGI_FORMAT_D32_FLOAT_S8X24_UINT)
    STRINGISE_ENUM(DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS)
    STRINGISE_ENUM(DXGI_FORMAT_X32_TYPELESS_G8X24_UINT)
    STRINGISE_ENUM(DXGI_FORMAT_R10G10B10A2_TYPELESS)
    STRINGISE_ENUM(DXGI_FORMAT_R10G10B10A2_UNORM)
    STRINGISE_ENUM(DXGI_FORMAT_R10G10B10A2_UINT)
    STRINGISE_ENUM(DXGI_FORMAT_R11G11B10_FLOAT)
    STRINGISE_ENUM(DXGI_FORMAT_R8G8B8A8_TYPELESS)
    STRINGISE_ENUM(DXGI_FORMAT_R8G8B8A8_UNORM)
    STRINGISE_ENUM(DXGI_FORMAT_R8G8B8A8_UNORM_SRGB)
    STRINGISE_ENUM(DXGI_FORMAT_R8G8B8A8_UINT)
    STRINGISE_ENUM(DXGI_FORMAT_R8G8B8A8_SNORM)
    STRINGISE_ENUM(DXGI_FORMAT_R8G8B8A8_SINT)
    STRINGISE_ENUM(DXGI_FORMAT_R16G16_TYPELESS)
    STRINGISE_ENUM(DXGI_FORMAT_R16G16_FLOAT)
    STRINGISE_ENUM(DXGI_FORMAT_R16G16_UNORM)
    STRINGISE_ENUM(DXGI_FORMAT_R16G16_UINT)
    STRINGISE_ENUM(DXGI_FORMAT_R16G16_SNORM)
    STRINGISE_ENUM(DXGI_FORMAT_R16G16_SINT)
    STRINGISE_ENUM(DXGI_FORMAT_R32_TYPELESS)
    STRINGISE_ENUM(DXGI_FORMAT_D32_FLOAT)
    STRINGISE_ENUM(DXGI_FORMAT_R32_FLOAT)
    STRINGISE_ENUM(DXGI_FORMAT_R32_UINT)
    STRINGISE_ENUM(DXGI_FORMAT_R32_SINT)
    STRINGISE_ENUM(DXGI_FORMAT_R24G8_TYPELESS)
    STRINGISE_ENUM(DXGI_FORMAT_D24_UNORM_S8_UINT)
    STRINGISE_ENUM(DXGI_FORMAT_R24_UNORM_X8_TYPELESS)
    STRINGISE_ENUM(DXGI_FORMAT_X24_TYPELESS_G8_UINT)
    STRINGISE_ENUM(DXGI_FORMAT_R8G8_TYPELESS)
    STRINGISE_ENUM(DXGI_FORMAT_R8G8_UNORM)
    STRINGISE_ENUM(DXGI_FORMAT_R8G8_UINT)
    STRINGISE_ENUM(DXGI_FORMAT_R8G8_SNORM)
    STRINGISE_ENUM(DXGI_FORMAT_R8G8_SINT)
    STRINGISE_ENUM(DXGI_FORMAT_R16_TYPELESS)
    STRINGISE_ENUM(DXGI_FORMAT_R16_FLOAT)
    STRINGISE_ENUM(DXGI_FORMAT_D16_UNORM)
    STRINGISE_ENUM(DXGI_FORMAT_R16_UNORM)
    STRINGISE_ENUM(DXGI_FORMAT_R16_UINT)
    STRINGISE_ENUM(DXGI_FORMAT_R16_SNORM)
    STRINGISE_ENUM(DXGI_FORMAT_R16_SINT)
    STRINGISE_ENUM(DXGI_FORMAT_R8_TYPELESS)
    STRINGISE_ENUM(DXGI_FORMAT_R8_UNORM)
    STRINGISE_ENUM(DXGI_FORMAT_R8_UINT)
    STRINGISE_ENUM(DXGI_FORMAT_R8_SNORM)
    STRINGISE_ENUM(DXGI_FORMAT_R8_SINT)
    STRINGISE_ENUM(DXGI_FORMAT_A8_UNORM)
    STRINGISE_ENUM(DXGI_FORMAT_R1_UNORM)
    STRINGISE_ENUM(DXGI_FORMAT_R9G9B9E5_SHAREDEXP)
    STRINGISE_ENUM(DXGI_FORMAT_R8G8_B8G8_UNORM)
    STRINGISE_ENUM(DXGI_FORMAT_G8R8_G8B8_UNORM)
    STRINGISE_ENUM(DXGI_FORMAT_BC1_TYPELESS)
    STRINGISE_ENUM(DXGI_FORMAT_BC1_UNORM)
    STRINGISE_ENUM(DXGI_FORMAT_BC1_UNORM_SRGB)
    STRINGISE_ENUM(DXGI_FORMAT_BC2_TYPELESS)
    STRINGISE_ENUM(DXGI_FORMAT_BC2_UNORM)
    STRINGISE_ENUM(DXGI_FORMAT_BC2_UNORM_SRGB)
    STRINGISE_ENUM(DXGI_FORMAT_BC3_TYPELESS)
    STRINGISE_ENUM(DXGI_FORMAT_BC3_UNORM)
    STRINGISE_ENUM(DXGI_FORMAT_BC3_UNORM_SRGB)
    STRINGISE_ENUM(DXGI_FORMAT_BC4_TYPELESS)
    STRINGISE_ENUM(DXGI_FORMAT_BC4_UNORM)
    STRINGISE_ENUM(DXGI_FORMAT_BC4_SNORM)
    STRINGISE_ENUM(DXGI_FORMAT_BC5_TYPELESS)
    STRINGISE_ENUM(DXGI_FORMAT_BC5_UNORM)
    STRINGISE_ENUM(DXGI_FORMAT_BC5_SNORM)
    STRINGISE_ENUM(DXGI_FORMAT_B5G6R5_UNORM)
    STRINGISE_ENUM(DXGI_FORMAT_B5G5R5A1_UNORM)
    STRINGISE_ENUM(DXGI_FORMAT_B8G8R8A8_UNORM)
    STRINGISE_ENUM(DXGI_FORMAT_B8G8R8X8_UNORM)
    STRINGISE_ENUM(DXGI_FORMAT_R10G10B10_XR_BIAS_A2_UNORM)
    STRINGISE_ENUM(DXGI_FORMAT_B8G8R8A8_TYPELESS)
    STRINGISE_ENUM(DXGI_FORMAT_B8G8R8A8_UNORM_SRGB)
    STRINGISE_ENUM(DXGI_FORMAT_B8G8R8X8_TYPELESS)
    STRINGISE_ENUM(DXGI_FORMAT_B8G8R8X8_UNORM_SRGB)
    STRINGISE_ENUM(DXGI_FORMAT_BC6H_TYPELESS)
    STRINGISE_ENUM(DXGI_FORMAT_BC6H_UF16)
    STRINGISE_ENUM(DXGI_FORMAT_BC6H_SF16)
    STRINGISE_ENUM(DXGI_FORMAT_BC7_TYPELESS)
    STRINGISE_ENUM(DXGI_FORMAT_BC7_UNORM)
    STRINGISE_ENUM(DXGI_FORMAT_BC7_UNORM_SRGB)
    // D3D11.1 formats
    STRINGISE_ENUM(DXGI_FORMAT_AYUV)
    STRINGISE_ENUM(DXGI_FORMAT_Y410)
    STRINGISE_ENUM(DXGI_FORMAT_Y416)
    STRINGISE_ENUM(DXGI_FORMAT_NV12)
    STRINGISE_ENUM(DXGI_FORMAT_P010)
    STRINGISE_ENUM(DXGI_FORMAT_P016)
    STRINGISE_ENUM(DXGI_FORMAT_420_OPAQUE)
    STRINGISE_ENUM(DXGI_FORMAT_YUY2)
    STRINGISE_ENUM(DXGI_FORMAT_Y210)
    STRINGISE_ENUM(DXGI_FORMAT_Y216)
    STRINGISE_ENUM(DXGI_FORMAT_NV11)
    STRINGISE_ENUM(DXGI_FORMAT_AI44)
    STRINGISE_ENUM(DXGI_FORMAT_IA44)
    STRINGISE_ENUM(DXGI_FORMAT_P8)
    STRINGISE_ENUM(DXGI_FORMAT_A8P8)
    STRINGISE_ENUM(DXGI_FORMAT_B4G4R4A4_UNORM)
    // D3D11.2 formats
    STRINGISE_ENUM(DXGI_FORMAT_P208)
    STRINGISE_ENUM(DXGI_FORMAT_V208)
    STRINGISE_ENUM(DXGI_FORMAT_V408)
  }
  END_ENUM_STRINGISE();
}

// not technically DXGI, but makes more sense to have it here common between D3D versions
template <>
rdcstr DoStringise(const IID &el)
{
  return StringFormat::Fmt("GUID {%08x-%04hx-%04hx-%02x%02x-%02x%02x%02x%02x%02x%02x}", el.Data1,
                           el.Data2, el.Data3, el.Data4[0], el.Data4[1], el.Data4[2], el.Data4[3],
                           el.Data4[4], el.Data4[5], el.Data4[6], el.Data4[7]);
}

template <>
rdcstr DoStringise(const D3D_FEATURE_LEVEL &el)
{
  BEGIN_ENUM_STRINGISE(D3D_FEATURE_LEVEL);
  {
    STRINGISE_ENUM(D3D_FEATURE_LEVEL_9_1)
    STRINGISE_ENUM(D3D_FEATURE_LEVEL_9_2)
    STRINGISE_ENUM(D3D_FEATURE_LEVEL_9_3)
    STRINGISE_ENUM(D3D_FEATURE_LEVEL_10_0)
    STRINGISE_ENUM(D3D_FEATURE_LEVEL_10_1)
    STRINGISE_ENUM(D3D_FEATURE_LEVEL_11_0)
    STRINGISE_ENUM(D3D_FEATURE_LEVEL_11_1)
    STRINGISE_ENUM(D3D_FEATURE_LEVEL_12_0)
    STRINGISE_ENUM(D3D_FEATURE_LEVEL_12_1)
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const D3D_DRIVER_TYPE &el)
{
  BEGIN_ENUM_STRINGISE(D3D_DRIVER_TYPE);
  {
    STRINGISE_ENUM(D3D_DRIVER_TYPE_HARDWARE)
    STRINGISE_ENUM(D3D_DRIVER_TYPE_REFERENCE)
    STRINGISE_ENUM(D3D_DRIVER_TYPE_NULL)
    STRINGISE_ENUM(D3D_DRIVER_TYPE_SOFTWARE)
    STRINGISE_ENUM(D3D_DRIVER_TYPE_WARP)
  }
  END_ENUM_STRINGISE();
}

// for HRESULT
template <>
rdcstr DoStringise(const long &el)
{
  HRESULT hr = (HRESULT)el;

  switch(hr)
  {
    STRINGISE_ENUM(S_OK)
    STRINGISE_ENUM(DXGI_ERROR_INVALID_CALL)
    STRINGISE_ENUM(DXGI_ERROR_NOT_FOUND)
    STRINGISE_ENUM(DXGI_ERROR_DEVICE_REMOVED)
    STRINGISE_ENUM(DXGI_ERROR_DEVICE_HUNG)
    STRINGISE_ENUM(DXGI_ERROR_DEVICE_RESET)
    STRINGISE_ENUM(DXGI_ERROR_WAS_STILL_DRAWING)
    STRINGISE_ENUM(DXGI_ERROR_UNSUPPORTED)
    STRINGISE_ENUM(E_OUTOFMEMORY)
    STRINGISE_ENUM(E_INVALIDARG)
    STRINGISE_ENUM(E_NOINTERFACE)
    STRINGISE_ENUM(E_ABORT)
    STRINGISE_ENUM(E_FAIL)
  }

  return "HRESULT<" + ToStr((uint32_t)el) + ">";
}

#if ENABLED(ENABLE_UNIT_TESTS)
#include "3rdparty/catch/catch.hpp"

TEST_CASE("DXGI ToStr", "[tostr][d3d]")
{
  HRESULT hr = DXGI_ERROR_DEVICE_RESET;

  CHECK(ToStr(hr) == "DXGI_ERROR_DEVICE_RESET");
  CHECK(ToStr(E_INVALIDARG) == "E_INVALIDARG");

  static const GUID guid = {
      0x2dc365d4, 0xc562, 0x411e, {0x9d, 0x34, 0x16, 0x59, 0xa4, 0xf3, 0x1d, 0xdd}};

  CHECK(ToStr(guid) == "GUID {2dc365d4-c562-411e-9d34-1659a4f31ddd}");
}

#endif