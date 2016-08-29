// Copyright (c) 2016 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_RESOURCE_BUNDLE_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_RESOURCE_BUNDLE_CTOCPP_H_
#pragma once

#ifndef USING_CEF_SHARED
#pragma message("Warning: "__FILE__" may be accessed wrapper-side only")
#else  // USING_CEF_SHARED

#include "include/cef_resource_bundle.h"
#include "include/capi/cef_resource_bundle_capi.h"
#include "libcef_dll/ctocpp/ctocpp.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefResourceBundleCToCpp
    : public CefCToCpp<CefResourceBundleCToCpp, CefResourceBundle,
        cef_resource_bundle_t> {
 public:
  CefResourceBundleCToCpp();

  // CefResourceBundle methods.
  CefString GetLocalizedString(int string_id) OVERRIDE;
  bool GetDataResource(int resource_id, void*& data,
      size_t& data_size) OVERRIDE;
  bool GetDataResourceForScale(int resource_id, ScaleFactor scale_factor,
      void*& data, size_t& data_size) OVERRIDE;
};

#endif  // USING_CEF_SHARED
#endif  // CEF_LIBCEF_DLL_CTOCPP_RESOURCE_BUNDLE_CTOCPP_H_
