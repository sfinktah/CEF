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

#include "libcef_dll/ctocpp/binary_value_ctocpp.h"
#include "libcef_dll/ctocpp/image_ctocpp.h"


// STATIC METHODS - Body may be edited by hand.

CefRefPtr<CefImage> CefImage::CreateImage() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_image_t* _retval = cef_image_create();

  // Return type: refptr_same
  return CefImageCToCpp::Wrap(_retval);
}


// VIRTUAL METHODS - Body may be edited by hand.

bool CefImageCToCpp::IsEmpty() {
  cef_image_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_empty))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_empty(_struct);

  // Return type: bool
  return _retval?true:false;
}

bool CefImageCToCpp::IsSame(CefRefPtr<CefImage> that) {
  cef_image_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_same))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: that; type: refptr_same
  DCHECK(that.get());
  if (!that.get())
    return false;

  // Execute
  int _retval = _struct->is_same(_struct,
      CefImageCToCpp::Unwrap(that));

  // Return type: bool
  return _retval?true:false;
}

bool CefImageCToCpp::AddBitmap(float scale_factor, int pixel_width,
    int pixel_height, cef_color_type_t color_type, cef_alpha_type_t alpha_type,
    const void* pixel_data, size_t pixel_data_size) {
  cef_image_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, add_bitmap))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: pixel_data; type: simple_byaddr
  DCHECK(pixel_data);
  if (!pixel_data)
    return false;

  // Execute
  int _retval = _struct->add_bitmap(_struct,
      scale_factor,
      pixel_width,
      pixel_height,
      color_type,
      alpha_type,
      pixel_data,
      pixel_data_size);

  // Return type: bool
  return _retval?true:false;
}

bool CefImageCToCpp::AddPNG(float scale_factor, const void* png_data,
    size_t png_data_size) {
  cef_image_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, add_png))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: png_data; type: simple_byaddr
  DCHECK(png_data);
  if (!png_data)
    return false;

  // Execute
  int _retval = _struct->add_png(_struct,
      scale_factor,
      png_data,
      png_data_size);

  // Return type: bool
  return _retval?true:false;
}

bool CefImageCToCpp::AddJPEG(float scale_factor, const void* jpeg_data,
    size_t jpeg_data_size) {
  cef_image_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, add_jpeg))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: jpeg_data; type: simple_byaddr
  DCHECK(jpeg_data);
  if (!jpeg_data)
    return false;

  // Execute
  int _retval = _struct->add_jpeg(_struct,
      scale_factor,
      jpeg_data,
      jpeg_data_size);

  // Return type: bool
  return _retval?true:false;
}

size_t CefImageCToCpp::GetWidth() {
  cef_image_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_width))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  size_t _retval = _struct->get_width(_struct);

  // Return type: simple
  return _retval;
}

size_t CefImageCToCpp::GetHeight() {
  cef_image_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_height))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  size_t _retval = _struct->get_height(_struct);

  // Return type: simple
  return _retval;
}

bool CefImageCToCpp::HasRepresentation(float scale_factor) {
  cef_image_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, has_representation))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->has_representation(_struct,
      scale_factor);

  // Return type: bool
  return _retval?true:false;
}

bool CefImageCToCpp::RemoveRepresentation(float scale_factor) {
  cef_image_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, remove_representation))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->remove_representation(_struct,
      scale_factor);

  // Return type: bool
  return _retval?true:false;
}

bool CefImageCToCpp::GetRepresentationInfo(float scale_factor,
    float& actual_scale_factor, int& pixel_width, int& pixel_height) {
  cef_image_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_representation_info))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->get_representation_info(_struct,
      scale_factor,
      &actual_scale_factor,
      &pixel_width,
      &pixel_height);

  // Return type: bool
  return _retval?true:false;
}

CefRefPtr<CefBinaryValue> CefImageCToCpp::GetAsBitmap(float scale_factor,
    cef_color_type_t color_type, cef_alpha_type_t alpha_type, int& pixel_width,
    int& pixel_height) {
  cef_image_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_as_bitmap))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_binary_value_t* _retval = _struct->get_as_bitmap(_struct,
      scale_factor,
      color_type,
      alpha_type,
      &pixel_width,
      &pixel_height);

  // Return type: refptr_same
  return CefBinaryValueCToCpp::Wrap(_retval);
}

CefRefPtr<CefBinaryValue> CefImageCToCpp::GetAsPNG(float scale_factor,
    bool with_transparency, int& pixel_width, int& pixel_height) {
  cef_image_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_as_png))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_binary_value_t* _retval = _struct->get_as_png(_struct,
      scale_factor,
      with_transparency,
      &pixel_width,
      &pixel_height);

  // Return type: refptr_same
  return CefBinaryValueCToCpp::Wrap(_retval);
}

CefRefPtr<CefBinaryValue> CefImageCToCpp::GetAsJPEG(float scale_factor,
    int quality, int& pixel_width, int& pixel_height) {
  cef_image_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_as_jpeg))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_binary_value_t* _retval = _struct->get_as_jpeg(_struct,
      scale_factor,
      quality,
      &pixel_width,
      &pixel_height);

  // Return type: refptr_same
  return CefBinaryValueCToCpp::Wrap(_retval);
}


// CONSTRUCTOR - Do not edit by hand.

CefImageCToCpp::CefImageCToCpp() {
}

template<> cef_image_t* CefCToCpp<CefImageCToCpp, CefImage,
    cef_image_t>::UnwrapDerived(CefWrapperType type, CefImage* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#ifndef NDEBUG
template<> base::AtomicRefCount CefCToCpp<CefImageCToCpp, CefImage,
    cef_image_t>::DebugObjCt = 0;
#endif

template<> CefWrapperType CefCToCpp<CefImageCToCpp, CefImage,
    cef_image_t>::kWrapperType = WT_IMAGE;
