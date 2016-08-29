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

#include "libcef_dll/ctocpp/post_data_ctocpp.h"
#include "libcef_dll/ctocpp/request_ctocpp.h"
#include "libcef_dll/transfer_util.h"


// STATIC METHODS - Body may be edited by hand.

CefRefPtr<CefRequest> CefRequest::Create() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_request_t* _retval = cef_request_create();

  // Return type: refptr_same
  return CefRequestCToCpp::Wrap(_retval);
}


// VIRTUAL METHODS - Body may be edited by hand.

bool CefRequestCToCpp::IsReadOnly() {
  cef_request_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_read_only))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_read_only(_struct);

  // Return type: bool
  return _retval?true:false;
}

CefString CefRequestCToCpp::GetURL() {
  cef_request_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_url))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_url(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

void CefRequestCToCpp::SetURL(const CefString& url) {
  cef_request_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_url))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: url; type: string_byref_const
  DCHECK(!url.empty());
  if (url.empty())
    return;

  // Execute
  _struct->set_url(_struct,
      url.GetStruct());
}

CefString CefRequestCToCpp::GetMethod() {
  cef_request_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_method))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_method(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

void CefRequestCToCpp::SetMethod(const CefString& method) {
  cef_request_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_method))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: method; type: string_byref_const
  DCHECK(!method.empty());
  if (method.empty())
    return;

  // Execute
  _struct->set_method(_struct,
      method.GetStruct());
}

void CefRequestCToCpp::SetReferrer(const CefString& referrer_url,
    ReferrerPolicy policy) {
  cef_request_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_referrer))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: referrer_url; type: string_byref_const
  DCHECK(!referrer_url.empty());
  if (referrer_url.empty())
    return;

  // Execute
  _struct->set_referrer(_struct,
      referrer_url.GetStruct(),
      policy);
}

CefString CefRequestCToCpp::GetReferrerURL() {
  cef_request_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_referrer_url))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_referrer_url(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

CefRequest::ReferrerPolicy CefRequestCToCpp::GetReferrerPolicy() {
  cef_request_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_referrer_policy))
    return REFERRER_POLICY_DEFAULT;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_referrer_policy_t _retval = _struct->get_referrer_policy(_struct);

  // Return type: simple
  return _retval;
}

CefRefPtr<CefPostData> CefRequestCToCpp::GetPostData() {
  cef_request_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_post_data))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_post_data_t* _retval = _struct->get_post_data(_struct);

  // Return type: refptr_same
  return CefPostDataCToCpp::Wrap(_retval);
}

void CefRequestCToCpp::SetPostData(CefRefPtr<CefPostData> postData) {
  cef_request_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_post_data))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: postData; type: refptr_same
  DCHECK(postData.get());
  if (!postData.get())
    return;

  // Execute
  _struct->set_post_data(_struct,
      CefPostDataCToCpp::Unwrap(postData));
}

void CefRequestCToCpp::GetHeaderMap(HeaderMap& headerMap) {
  cef_request_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_header_map))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Translate param: headerMap; type: string_map_multi_byref
  cef_string_multimap_t headerMapMultimap = cef_string_multimap_alloc();
  DCHECK(headerMapMultimap);
  if (headerMapMultimap)
    transfer_string_multimap_contents(headerMap, headerMapMultimap);

  // Execute
  _struct->get_header_map(_struct,
      headerMapMultimap);

  // Restore param:headerMap; type: string_map_multi_byref
  if (headerMapMultimap) {
    headerMap.clear();
    transfer_string_multimap_contents(headerMapMultimap, headerMap);
    cef_string_multimap_free(headerMapMultimap);
  }
}

void CefRequestCToCpp::SetHeaderMap(const HeaderMap& headerMap) {
  cef_request_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_header_map))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Translate param: headerMap; type: string_map_multi_byref_const
  cef_string_multimap_t headerMapMultimap = cef_string_multimap_alloc();
  DCHECK(headerMapMultimap);
  if (headerMapMultimap)
    transfer_string_multimap_contents(headerMap, headerMapMultimap);

  // Execute
  _struct->set_header_map(_struct,
      headerMapMultimap);

  // Restore param:headerMap; type: string_map_multi_byref_const
  if (headerMapMultimap)
    cef_string_multimap_free(headerMapMultimap);
}

void CefRequestCToCpp::Set(const CefString& url, const CefString& method,
    CefRefPtr<CefPostData> postData, const HeaderMap& headerMap) {
  cef_request_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: url; type: string_byref_const
  DCHECK(!url.empty());
  if (url.empty())
    return;
  // Verify param: method; type: string_byref_const
  DCHECK(!method.empty());
  if (method.empty())
    return;
  // Unverified params: postData

  // Translate param: headerMap; type: string_map_multi_byref_const
  cef_string_multimap_t headerMapMultimap = cef_string_multimap_alloc();
  DCHECK(headerMapMultimap);
  if (headerMapMultimap)
    transfer_string_multimap_contents(headerMap, headerMapMultimap);

  // Execute
  _struct->set(_struct,
      url.GetStruct(),
      method.GetStruct(),
      CefPostDataCToCpp::Unwrap(postData),
      headerMapMultimap);

  // Restore param:headerMap; type: string_map_multi_byref_const
  if (headerMapMultimap)
    cef_string_multimap_free(headerMapMultimap);
}

int CefRequestCToCpp::GetFlags() {
  cef_request_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_flags))
    return UR_FLAG_NONE;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->get_flags(_struct);

  // Return type: simple
  return _retval;
}

void CefRequestCToCpp::SetFlags(int flags) {
  cef_request_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_flags))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_flags(_struct,
      flags);
}

CefString CefRequestCToCpp::GetFirstPartyForCookies() {
  cef_request_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_first_party_for_cookies))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_first_party_for_cookies(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

void CefRequestCToCpp::SetFirstPartyForCookies(const CefString& url) {
  cef_request_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_first_party_for_cookies))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: url; type: string_byref_const
  DCHECK(!url.empty());
  if (url.empty())
    return;

  // Execute
  _struct->set_first_party_for_cookies(_struct,
      url.GetStruct());
}

CefRequest::ResourceType CefRequestCToCpp::GetResourceType() {
  cef_request_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_resource_type))
    return RT_SUB_RESOURCE;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_resource_type_t _retval = _struct->get_resource_type(_struct);

  // Return type: simple
  return _retval;
}

CefRequest::TransitionType CefRequestCToCpp::GetTransitionType() {
  cef_request_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_transition_type))
    return TT_EXPLICIT;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_transition_type_t _retval = _struct->get_transition_type(_struct);

  // Return type: simple
  return _retval;
}

uint64 CefRequestCToCpp::GetIdentifier() {
  cef_request_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_identifier))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  uint64 _retval = _struct->get_identifier(_struct);

  // Return type: simple
  return _retval;
}


// CONSTRUCTOR - Do not edit by hand.

CefRequestCToCpp::CefRequestCToCpp() {
}

template<> cef_request_t* CefCToCpp<CefRequestCToCpp, CefRequest,
    cef_request_t>::UnwrapDerived(CefWrapperType type, CefRequest* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#ifndef NDEBUG
template<> base::AtomicRefCount CefCToCpp<CefRequestCToCpp, CefRequest,
    cef_request_t>::DebugObjCt = 0;
#endif

template<> CefWrapperType CefCToCpp<CefRequestCToCpp, CefRequest,
    cef_request_t>::kWrapperType = WT_REQUEST;
