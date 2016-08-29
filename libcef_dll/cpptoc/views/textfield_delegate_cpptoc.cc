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

#include "libcef_dll/cpptoc/views/textfield_delegate_cpptoc.h"
#include "libcef_dll/ctocpp/views/textfield_ctocpp.h"
#include "libcef_dll/ctocpp/views/view_ctocpp.h"


namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

int CEF_CALLBACK textfield_delegate_on_key_event(
    struct _cef_textfield_delegate_t* self, cef_textfield_t* textfield,
    const struct _cef_key_event_t* event) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: textfield; type: refptr_diff
  DCHECK(textfield);
  if (!textfield)
    return 0;
  // Verify param: event; type: struct_byref_const
  DCHECK(event);
  if (!event)
    return 0;

  // Translate param: event; type: struct_byref_const
  CefKeyEvent eventObj;
  if (event)
    eventObj.Set(*event, false);

  // Execute
  bool _retval = CefTextfieldDelegateCppToC::Get(self)->OnKeyEvent(
      CefTextfieldCToCpp::Wrap(textfield),
      eventObj);

  // Return type: bool
  return _retval;
}

void CEF_CALLBACK textfield_delegate_on_after_user_action(
    struct _cef_textfield_delegate_t* self, cef_textfield_t* textfield) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: textfield; type: refptr_diff
  DCHECK(textfield);
  if (!textfield)
    return;

  // Execute
  CefTextfieldDelegateCppToC::Get(self)->OnAfterUserAction(
      CefTextfieldCToCpp::Wrap(textfield));
}

cef_size_t CEF_CALLBACK textfield_delegate_get_preferred_size(
    struct _cef_view_delegate_t* self, cef_view_t* view) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return CefSize();
  // Verify param: view; type: refptr_diff
  DCHECK(view);
  if (!view)
    return CefSize();

  // Execute
  cef_size_t _retval = CefTextfieldDelegateCppToC::Get(
      reinterpret_cast<cef_textfield_delegate_t*>(self))->GetPreferredSize(
      CefViewCToCpp::Wrap(view));

  // Return type: simple
  return _retval;
}

cef_size_t CEF_CALLBACK textfield_delegate_get_minimum_size(
    struct _cef_view_delegate_t* self, cef_view_t* view) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return CefSize();
  // Verify param: view; type: refptr_diff
  DCHECK(view);
  if (!view)
    return CefSize();

  // Execute
  cef_size_t _retval = CefTextfieldDelegateCppToC::Get(
      reinterpret_cast<cef_textfield_delegate_t*>(self))->GetMinimumSize(
      CefViewCToCpp::Wrap(view));

  // Return type: simple
  return _retval;
}

cef_size_t CEF_CALLBACK textfield_delegate_get_maximum_size(
    struct _cef_view_delegate_t* self, cef_view_t* view) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return CefSize();
  // Verify param: view; type: refptr_diff
  DCHECK(view);
  if (!view)
    return CefSize();

  // Execute
  cef_size_t _retval = CefTextfieldDelegateCppToC::Get(
      reinterpret_cast<cef_textfield_delegate_t*>(self))->GetMaximumSize(
      CefViewCToCpp::Wrap(view));

  // Return type: simple
  return _retval;
}

int CEF_CALLBACK textfield_delegate_get_height_for_width(
    struct _cef_view_delegate_t* self, cef_view_t* view, int width) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: view; type: refptr_diff
  DCHECK(view);
  if (!view)
    return 0;

  // Execute
  int _retval = CefTextfieldDelegateCppToC::Get(
      reinterpret_cast<cef_textfield_delegate_t*>(self))->GetHeightForWidth(
      CefViewCToCpp::Wrap(view),
      width);

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK textfield_delegate_on_parent_view_changed(
    struct _cef_view_delegate_t* self, cef_view_t* view, int added,
    cef_view_t* parent) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: view; type: refptr_diff
  DCHECK(view);
  if (!view)
    return;
  // Verify param: parent; type: refptr_diff
  DCHECK(parent);
  if (!parent)
    return;

  // Execute
  CefTextfieldDelegateCppToC::Get(reinterpret_cast<cef_textfield_delegate_t*>(
      self))->OnParentViewChanged(
      CefViewCToCpp::Wrap(view),
      added?true:false,
      CefViewCToCpp::Wrap(parent));
}

void CEF_CALLBACK textfield_delegate_on_child_view_changed(
    struct _cef_view_delegate_t* self, cef_view_t* view, int added,
    cef_view_t* child) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: view; type: refptr_diff
  DCHECK(view);
  if (!view)
    return;
  // Verify param: child; type: refptr_diff
  DCHECK(child);
  if (!child)
    return;

  // Execute
  CefTextfieldDelegateCppToC::Get(reinterpret_cast<cef_textfield_delegate_t*>(
      self))->OnChildViewChanged(
      CefViewCToCpp::Wrap(view),
      added?true:false,
      CefViewCToCpp::Wrap(child));
}

}  // namespace


// CONSTRUCTOR - Do not edit by hand.

CefTextfieldDelegateCppToC::CefTextfieldDelegateCppToC() {
  GetStruct()->on_key_event = textfield_delegate_on_key_event;
  GetStruct()->on_after_user_action = textfield_delegate_on_after_user_action;
  GetStruct()->base.get_preferred_size = textfield_delegate_get_preferred_size;
  GetStruct()->base.get_minimum_size = textfield_delegate_get_minimum_size;
  GetStruct()->base.get_maximum_size = textfield_delegate_get_maximum_size;
  GetStruct()->base.get_height_for_width =
      textfield_delegate_get_height_for_width;
  GetStruct()->base.on_parent_view_changed =
      textfield_delegate_on_parent_view_changed;
  GetStruct()->base.on_child_view_changed =
      textfield_delegate_on_child_view_changed;
}

template<> CefRefPtr<CefTextfieldDelegate> CefCppToC<CefTextfieldDelegateCppToC,
    CefTextfieldDelegate, cef_textfield_delegate_t>::UnwrapDerived(
    CefWrapperType type, cef_textfield_delegate_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#ifndef NDEBUG
template<> base::AtomicRefCount CefCppToC<CefTextfieldDelegateCppToC,
    CefTextfieldDelegate, cef_textfield_delegate_t>::DebugObjCt = 0;
#endif

template<> CefWrapperType CefCppToC<CefTextfieldDelegateCppToC,
    CefTextfieldDelegate, cef_textfield_delegate_t>::kWrapperType =
    WT_TEXTFIELD_DELEGATE;
