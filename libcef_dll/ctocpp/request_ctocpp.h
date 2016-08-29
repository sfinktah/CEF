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

#ifndef CEF_LIBCEF_DLL_CTOCPP_REQUEST_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_REQUEST_CTOCPP_H_
#pragma once

#ifndef USING_CEF_SHARED
#pragma message("Warning: "__FILE__" may be accessed wrapper-side only")
#else  // USING_CEF_SHARED

#include "include/cef_request.h"
#include "include/capi/cef_request_capi.h"
#include "libcef_dll/ctocpp/ctocpp.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefRequestCToCpp
    : public CefCToCpp<CefRequestCToCpp, CefRequest, cef_request_t> {
 public:
  CefRequestCToCpp();

  // CefRequest methods.
  bool IsReadOnly() OVERRIDE;
  CefString GetURL() OVERRIDE;
  void SetURL(const CefString& url) OVERRIDE;
  CefString GetMethod() OVERRIDE;
  void SetMethod(const CefString& method) OVERRIDE;
  void SetReferrer(const CefString& referrer_url,
      ReferrerPolicy policy) OVERRIDE;
  CefString GetReferrerURL() OVERRIDE;
  ReferrerPolicy GetReferrerPolicy() OVERRIDE;
  CefRefPtr<CefPostData> GetPostData() OVERRIDE;
  void SetPostData(CefRefPtr<CefPostData> postData) OVERRIDE;
  void GetHeaderMap(HeaderMap& headerMap) OVERRIDE;
  void SetHeaderMap(const HeaderMap& headerMap) OVERRIDE;
  void Set(const CefString& url, const CefString& method,
      CefRefPtr<CefPostData> postData, const HeaderMap& headerMap) OVERRIDE;
  int GetFlags() OVERRIDE;
  void SetFlags(int flags) OVERRIDE;
  CefString GetFirstPartyForCookies() OVERRIDE;
  void SetFirstPartyForCookies(const CefString& url) OVERRIDE;
  ResourceType GetResourceType() OVERRIDE;
  TransitionType GetTransitionType() OVERRIDE;
  uint64 GetIdentifier() OVERRIDE;
};

#endif  // USING_CEF_SHARED
#endif  // CEF_LIBCEF_DLL_CTOCPP_REQUEST_CTOCPP_H_
