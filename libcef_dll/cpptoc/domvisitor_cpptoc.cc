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

#include "libcef_dll/cpptoc/domvisitor_cpptoc.h"
#include "libcef_dll/ctocpp/domdocument_ctocpp.h"


namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

void CEF_CALLBACK domvisitor_visit(struct _cef_domvisitor_t* self,
    struct _cef_domdocument_t* document) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: document; type: refptr_diff
  DCHECK(document);
  if (!document)
    return;

  // Execute
  CefDOMVisitorCppToC::Get(self)->Visit(
      CefDOMDocumentCToCpp::Wrap(document));
}

}  // namespace


// CONSTRUCTOR - Do not edit by hand.

CefDOMVisitorCppToC::CefDOMVisitorCppToC() {
  GetStruct()->visit = domvisitor_visit;
}

template<> CefRefPtr<CefDOMVisitor> CefCppToC<CefDOMVisitorCppToC,
    CefDOMVisitor, cef_domvisitor_t>::UnwrapDerived(CefWrapperType type,
    cef_domvisitor_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#ifndef NDEBUG
template<> base::AtomicRefCount CefCppToC<CefDOMVisitorCppToC, CefDOMVisitor,
    cef_domvisitor_t>::DebugObjCt = 0;
#endif

template<> CefWrapperType CefCppToC<CefDOMVisitorCppToC, CefDOMVisitor,
    cef_domvisitor_t>::kWrapperType = WT_DOMVISITOR;
