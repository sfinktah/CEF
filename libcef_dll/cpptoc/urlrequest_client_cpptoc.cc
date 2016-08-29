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

#include "libcef_dll/cpptoc/urlrequest_client_cpptoc.h"
#include "libcef_dll/ctocpp/auth_callback_ctocpp.h"
#include "libcef_dll/ctocpp/urlrequest_ctocpp.h"


namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

void CEF_CALLBACK urlrequest_client_on_request_complete(
    struct _cef_urlrequest_client_t* self, cef_urlrequest_t* request) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: request; type: refptr_diff
  DCHECK(request);
  if (!request)
    return;

  // Execute
  CefURLRequestClientCppToC::Get(self)->OnRequestComplete(
      CefURLRequestCToCpp::Wrap(request));
}

void CEF_CALLBACK urlrequest_client_on_upload_progress(
    struct _cef_urlrequest_client_t* self, cef_urlrequest_t* request,
    int64 current, int64 total) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: request; type: refptr_diff
  DCHECK(request);
  if (!request)
    return;

  // Execute
  CefURLRequestClientCppToC::Get(self)->OnUploadProgress(
      CefURLRequestCToCpp::Wrap(request),
      current,
      total);
}

void CEF_CALLBACK urlrequest_client_on_download_progress(
    struct _cef_urlrequest_client_t* self, cef_urlrequest_t* request,
    int64 current, int64 total) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: request; type: refptr_diff
  DCHECK(request);
  if (!request)
    return;

  // Execute
  CefURLRequestClientCppToC::Get(self)->OnDownloadProgress(
      CefURLRequestCToCpp::Wrap(request),
      current,
      total);
}

void CEF_CALLBACK urlrequest_client_on_download_data(
    struct _cef_urlrequest_client_t* self, cef_urlrequest_t* request,
    const void* data, size_t data_length) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: request; type: refptr_diff
  DCHECK(request);
  if (!request)
    return;
  // Verify param: data; type: simple_byaddr
  DCHECK(data);
  if (!data)
    return;

  // Execute
  CefURLRequestClientCppToC::Get(self)->OnDownloadData(
      CefURLRequestCToCpp::Wrap(request),
      data,
      data_length);
}

int CEF_CALLBACK urlrequest_client_get_auth_credentials(
    struct _cef_urlrequest_client_t* self, int isProxy,
    const cef_string_t* host, int port, const cef_string_t* realm,
    const cef_string_t* scheme, cef_auth_callback_t* callback) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: host; type: string_byref_const
  DCHECK(host);
  if (!host)
    return 0;
  // Verify param: scheme; type: string_byref_const
  DCHECK(scheme);
  if (!scheme)
    return 0;
  // Verify param: callback; type: refptr_diff
  DCHECK(callback);
  if (!callback)
    return 0;
  // Unverified params: realm

  // Execute
  bool _retval = CefURLRequestClientCppToC::Get(self)->GetAuthCredentials(
      isProxy?true:false,
      CefString(host),
      port,
      CefString(realm),
      CefString(scheme),
      CefAuthCallbackCToCpp::Wrap(callback));

  // Return type: bool
  return _retval;
}

}  // namespace


// CONSTRUCTOR - Do not edit by hand.

CefURLRequestClientCppToC::CefURLRequestClientCppToC() {
  GetStruct()->on_request_complete = urlrequest_client_on_request_complete;
  GetStruct()->on_upload_progress = urlrequest_client_on_upload_progress;
  GetStruct()->on_download_progress = urlrequest_client_on_download_progress;
  GetStruct()->on_download_data = urlrequest_client_on_download_data;
  GetStruct()->get_auth_credentials = urlrequest_client_get_auth_credentials;
}

template<> CefRefPtr<CefURLRequestClient> CefCppToC<CefURLRequestClientCppToC,
    CefURLRequestClient, cef_urlrequest_client_t>::UnwrapDerived(
    CefWrapperType type, cef_urlrequest_client_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#ifndef NDEBUG
template<> base::AtomicRefCount CefCppToC<CefURLRequestClientCppToC,
    CefURLRequestClient, cef_urlrequest_client_t>::DebugObjCt = 0;
#endif

template<> CefWrapperType CefCppToC<CefURLRequestClientCppToC,
    CefURLRequestClient, cef_urlrequest_client_t>::kWrapperType =
    WT_URLREQUEST_CLIENT;
