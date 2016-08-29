// Copyright (c) 2016 Marshall A. Greenblatt. All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//    * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//    * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//    * Neither the name of Google Inc. nor the name Chromium Embedded
// Framework nor the names of its contributors may be used to endorse
// or promote products derived from this software without specific prior
// written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool and should not edited
// by hand. See the translator.README.txt file in the tools directory for
// more information.
//

#ifndef CEF_INCLUDE_CAPI_CEF_PARSER_CAPI_H_
#define CEF_INCLUDE_CAPI_CEF_PARSER_CAPI_H_
#pragma once

#include "include/capi/cef_base_capi.h"

#ifdef __cplusplus
extern "C" {
#endif


///
// Parse the specified |url| into its component parts. Returns false (0) if the
// URL is NULL or invalid.
///
CEF_EXPORT int cef_parse_url(const cef_string_t* url,
    struct _cef_urlparts_t* parts);

///
// Creates a URL from the specified |parts|, which must contain a non-NULL spec
// or a non-NULL host and path (at a minimum), but not both. Returns false (0)
// if |parts| isn't initialized as described.
///
CEF_EXPORT int cef_create_url(const struct _cef_urlparts_t* parts,
    cef_string_t* url);

///
// This is a convenience function for formatting a URL in a concise and human-
// friendly way to help users make security-related decisions (or in other
// circumstances when people need to distinguish sites, origins, or otherwise-
// simplified URLs from each other). Internationalized domain names (IDN) may be
// presented in Unicode if the conversion is considered safe. The returned value
// will (a) omit the path for standard schemes, excepting file and filesystem,
// and (b) omit the port if it is the default for the scheme. Do not use this
// for URLs which will be parsed or sent to other applications.
///
// The resulting string must be freed by calling cef_string_userfree_free().
CEF_EXPORT cef_string_userfree_t cef_format_url_for_security_display(
    const cef_string_t* origin_url);

///
// Returns the mime type for the specified file extension or an NULL string if
// unknown.
///
// The resulting string must be freed by calling cef_string_userfree_free().
CEF_EXPORT cef_string_userfree_t cef_get_mime_type(
    const cef_string_t* extension);

///
// Get the extensions associated with the given mime type. This should be passed
// in lower case. There could be multiple extensions for a given mime type, like
// "html,htm" for "text/html", or "txt,text,html,..." for "text/*". Any existing
// elements in the provided vector will not be erased.
///
CEF_EXPORT void cef_get_extensions_for_mime_type(const cef_string_t* mime_type,
    cef_string_list_t extensions);

///
// Encodes |data| as a base64 string.
///
// The resulting string must be freed by calling cef_string_userfree_free().
CEF_EXPORT cef_string_userfree_t cef_base64encode(const void* data,
    size_t data_size);

///
// Decodes the base64 encoded string |data|. The returned value will be NULL if
// the decoding fails.
///
CEF_EXPORT struct _cef_binary_value_t* cef_base64decode(
    const cef_string_t* data);

///
// Escapes characters in |text| which are unsuitable for use as a query
// parameter value. Everything except alphanumerics and -_.!~*'() will be
// converted to "%XX". If |use_plus| is true (1) spaces will change to "+". The
// result is basically the same as encodeURIComponent in Javacript.
///
// The resulting string must be freed by calling cef_string_userfree_free().
CEF_EXPORT cef_string_userfree_t cef_uriencode(const cef_string_t* text,
    int use_plus);

///
// Unescapes |text| and returns the result. Unescaping consists of looking for
// the exact pattern "%XX" where each X is a hex digit and converting to the
// character with the numerical value of those digits (e.g. "i%20=%203%3b"
// unescapes to "i = 3;"). If |convert_to_utf8| is true (1) this function will
// attempt to interpret the initial decoded result as UTF-8. If the result is
// convertable into UTF-8 it will be returned as converted. Otherwise the
// initial decoded result will be returned.  The |unescape_rule| parameter
// supports further customization the decoding process.
///
// The resulting string must be freed by calling cef_string_userfree_free().
CEF_EXPORT cef_string_userfree_t cef_uridecode(const cef_string_t* text,
    int convert_to_utf8, cef_uri_unescape_rule_t unescape_rule);

///
// Parses the specified |json_string| and returns a dictionary or list
// representation. If JSON parsing fails this function returns NULL.
///
CEF_EXPORT struct _cef_value_t* cef_parse_json(const cef_string_t* json_string,
    cef_json_parser_options_t options);

///
// Parses the specified |json_string| and returns a dictionary or list
// representation. If JSON parsing fails this function returns NULL and
// populates |error_code_out| and |error_msg_out| with an error code and a
// formatted error message respectively.
///
CEF_EXPORT struct _cef_value_t* cef_parse_jsonand_return_error(
    const cef_string_t* json_string, cef_json_parser_options_t options,
    cef_json_parser_error_t* error_code_out, cef_string_t* error_msg_out);

///
// Generates a JSON string from the specified root |node| which should be a
// dictionary or list value. Returns an NULL string on failure. This function
// requires exclusive access to |node| including any underlying data.
///
// The resulting string must be freed by calling cef_string_userfree_free().
CEF_EXPORT cef_string_userfree_t cef_write_json(struct _cef_value_t* node,
    cef_json_writer_options_t options);

#ifdef __cplusplus
}
#endif

#endif  // CEF_INCLUDE_CAPI_CEF_PARSER_CAPI_H_
