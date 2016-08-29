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

#ifndef CEF_LIBCEF_DLL_CTOCPP_DRAG_DATA_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_DRAG_DATA_CTOCPP_H_
#pragma once

#ifndef USING_CEF_SHARED
#pragma message("Warning: "__FILE__" may be accessed wrapper-side only")
#else  // USING_CEF_SHARED

#include <vector>
#include "include/cef_drag_data.h"
#include "include/capi/cef_drag_data_capi.h"
#include "libcef_dll/ctocpp/ctocpp.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefDragDataCToCpp
    : public CefCToCpp<CefDragDataCToCpp, CefDragData, cef_drag_data_t> {
 public:
  CefDragDataCToCpp();

  // CefDragData methods.
  CefRefPtr<CefDragData> Clone() OVERRIDE;
  bool IsReadOnly() OVERRIDE;
  bool IsLink() OVERRIDE;
  bool IsFragment() OVERRIDE;
  bool IsFile() OVERRIDE;
  CefString GetLinkURL() OVERRIDE;
  CefString GetLinkTitle() OVERRIDE;
  CefString GetLinkMetadata() OVERRIDE;
  CefString GetFragmentText() OVERRIDE;
  CefString GetFragmentHtml() OVERRIDE;
  CefString GetFragmentBaseURL() OVERRIDE;
  CefString GetFileName() OVERRIDE;
  size_t GetFileContents(CefRefPtr<CefStreamWriter> writer) OVERRIDE;
  bool GetFileNames(std::vector<CefString>& names) OVERRIDE;
  void SetLinkURL(const CefString& url) OVERRIDE;
  void SetLinkTitle(const CefString& title) OVERRIDE;
  void SetLinkMetadata(const CefString& data) OVERRIDE;
  void SetFragmentText(const CefString& text) OVERRIDE;
  void SetFragmentHtml(const CefString& html) OVERRIDE;
  void SetFragmentBaseURL(const CefString& base_url) OVERRIDE;
  void ResetFileContents() OVERRIDE;
  void AddFile(const CefString& path, const CefString& display_name) OVERRIDE;
};

#endif  // USING_CEF_SHARED
#endif  // CEF_LIBCEF_DLL_CTOCPP_DRAG_DATA_CTOCPP_H_
