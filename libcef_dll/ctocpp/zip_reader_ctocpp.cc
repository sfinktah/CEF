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

#include "libcef_dll/ctocpp/stream_reader_ctocpp.h"
#include "libcef_dll/ctocpp/zip_reader_ctocpp.h"


// STATIC METHODS - Body may be edited by hand.

CefRefPtr<CefZipReader> CefZipReader::Create(
    CefRefPtr<CefStreamReader> stream) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: stream; type: refptr_same
  DCHECK(stream.get());
  if (!stream.get())
    return NULL;

  // Execute
  cef_zip_reader_t* _retval = cef_zip_reader_create(
      CefStreamReaderCToCpp::Unwrap(stream));

  // Return type: refptr_same
  return CefZipReaderCToCpp::Wrap(_retval);
}


// VIRTUAL METHODS - Body may be edited by hand.

bool CefZipReaderCToCpp::MoveToFirstFile() {
  cef_zip_reader_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, move_to_first_file))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->move_to_first_file(_struct);

  // Return type: bool
  return _retval?true:false;
}

bool CefZipReaderCToCpp::MoveToNextFile() {
  cef_zip_reader_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, move_to_next_file))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->move_to_next_file(_struct);

  // Return type: bool
  return _retval?true:false;
}

bool CefZipReaderCToCpp::MoveToFile(const CefString& fileName,
    bool caseSensitive) {
  cef_zip_reader_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, move_to_file))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: fileName; type: string_byref_const
  DCHECK(!fileName.empty());
  if (fileName.empty())
    return false;

  // Execute
  int _retval = _struct->move_to_file(_struct,
      fileName.GetStruct(),
      caseSensitive);

  // Return type: bool
  return _retval?true:false;
}

bool CefZipReaderCToCpp::Close() {
  cef_zip_reader_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, close))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->close(_struct);

  // Return type: bool
  return _retval?true:false;
}

CefString CefZipReaderCToCpp::GetFileName() {
  cef_zip_reader_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_file_name))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_file_name(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

int64 CefZipReaderCToCpp::GetFileSize() {
  cef_zip_reader_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_file_size))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int64 _retval = _struct->get_file_size(_struct);

  // Return type: simple
  return _retval;
}

CefTime CefZipReaderCToCpp::GetFileLastModified() {
  cef_zip_reader_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_file_last_modified))
    return CefTime();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_time_t _retval = _struct->get_file_last_modified(_struct);

  // Return type: simple
  return _retval;
}

bool CefZipReaderCToCpp::OpenFile(const CefString& password) {
  cef_zip_reader_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, open_file))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: password

  // Execute
  int _retval = _struct->open_file(_struct,
      password.GetStruct());

  // Return type: bool
  return _retval?true:false;
}

bool CefZipReaderCToCpp::CloseFile() {
  cef_zip_reader_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, close_file))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->close_file(_struct);

  // Return type: bool
  return _retval?true:false;
}

int CefZipReaderCToCpp::ReadFile(void* buffer, size_t bufferSize) {
  cef_zip_reader_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, read_file))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: buffer; type: simple_byaddr
  DCHECK(buffer);
  if (!buffer)
    return 0;

  // Execute
  int _retval = _struct->read_file(_struct,
      buffer,
      bufferSize);

  // Return type: simple
  return _retval;
}

int64 CefZipReaderCToCpp::Tell() {
  cef_zip_reader_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, tell))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int64 _retval = _struct->tell(_struct);

  // Return type: simple
  return _retval;
}

bool CefZipReaderCToCpp::Eof() {
  cef_zip_reader_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, eof))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->eof(_struct);

  // Return type: bool
  return _retval?true:false;
}


// CONSTRUCTOR - Do not edit by hand.

CefZipReaderCToCpp::CefZipReaderCToCpp() {
}

template<> cef_zip_reader_t* CefCToCpp<CefZipReaderCToCpp, CefZipReader,
    cef_zip_reader_t>::UnwrapDerived(CefWrapperType type, CefZipReader* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#ifndef NDEBUG
template<> base::AtomicRefCount CefCToCpp<CefZipReaderCToCpp, CefZipReader,
    cef_zip_reader_t>::DebugObjCt = 0;
#endif

template<> CefWrapperType CefCToCpp<CefZipReaderCToCpp, CefZipReader,
    cef_zip_reader_t>::kWrapperType = WT_ZIP_READER;
