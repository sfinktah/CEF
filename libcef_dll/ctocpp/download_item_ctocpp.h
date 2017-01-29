// Copyright (c) 2017 The Chromium Embedded Framework Authors. All rights
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

#ifndef CEF_LIBCEF_DLL_CTOCPP_DOWNLOAD_ITEM_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_DOWNLOAD_ITEM_CTOCPP_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/cef_download_item.h"
#include "include/capi/cef_download_item_capi.h"
#include "libcef_dll/ctocpp/ctocpp.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefDownloadItemCToCpp
    : public CefCToCpp<CefDownloadItemCToCpp, CefDownloadItem,
        cef_download_item_t> {
 public:
  CefDownloadItemCToCpp();

  // CefDownloadItem methods.
  bool IsValid() OVERRIDE;
  bool IsInProgress() OVERRIDE;
  bool IsComplete() OVERRIDE;
  bool IsCanceled() OVERRIDE;
  int64 GetCurrentSpeed() OVERRIDE;
  int GetPercentComplete() OVERRIDE;
  int64 GetTotalBytes() OVERRIDE;
  int64 GetReceivedBytes() OVERRIDE;
  CefTime GetStartTime() OVERRIDE;
  CefTime GetEndTime() OVERRIDE;
  CefString GetFullPath() OVERRIDE;
  uint32 GetId() OVERRIDE;
  CefString GetURL() OVERRIDE;
  CefString GetOriginalUrl() OVERRIDE;
  CefString GetSuggestedFileName() OVERRIDE;
  CefString GetContentDisposition() OVERRIDE;
  CefString GetMimeType() OVERRIDE;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_DOWNLOAD_ITEM_CTOCPP_H_
