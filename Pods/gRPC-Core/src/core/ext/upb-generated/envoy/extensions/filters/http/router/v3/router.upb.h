/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/extensions/filters/http/router/v3/router.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_EXTENSIONS_FILTERS_HTTP_ROUTER_V3_ROUTER_PROTO_UPB_H_
#define ENVOY_EXTENSIONS_FILTERS_HTTP_ROUTER_V3_ROUTER_PROTO_UPB_H_

#if COCOAPODS==1
  #include  "third_party/upb/upb/msg.h"
#else
  #include  "upb/msg.h"
#endif
#if COCOAPODS==1
  #include  "third_party/upb/upb/decode.h"
#else
  #include  "upb/decode.h"
#endif
#if COCOAPODS==1
  #include  "third_party/upb/upb/decode_fast.h"
#else
  #include  "upb/decode_fast.h"
#endif
#if COCOAPODS==1
  #include  "third_party/upb/upb/encode.h"
#else
  #include  "upb/encode.h"
#endif

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_def.inc"
#else
  #include  "upb/port_def.inc"
#endif

#ifdef __cplusplus
extern "C" {
#endif

struct envoy_extensions_filters_http_router_v3_Router;
typedef struct envoy_extensions_filters_http_router_v3_Router envoy_extensions_filters_http_router_v3_Router;
extern const upb_msglayout envoy_extensions_filters_http_router_v3_Router_msginit;
struct envoy_config_accesslog_v3_AccessLog;
struct google_protobuf_BoolValue;
extern const upb_msglayout envoy_config_accesslog_v3_AccessLog_msginit;
extern const upb_msglayout google_protobuf_BoolValue_msginit;


/* envoy.extensions.filters.http.router.v3.Router */

UPB_INLINE envoy_extensions_filters_http_router_v3_Router *envoy_extensions_filters_http_router_v3_Router_new(upb_arena *arena) {
  return (envoy_extensions_filters_http_router_v3_Router *)_upb_msg_new(&envoy_extensions_filters_http_router_v3_Router_msginit, arena);
}
UPB_INLINE envoy_extensions_filters_http_router_v3_Router *envoy_extensions_filters_http_router_v3_Router_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_extensions_filters_http_router_v3_Router *ret = envoy_extensions_filters_http_router_v3_Router_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_extensions_filters_http_router_v3_Router_msginit, arena)) ? ret : NULL;
}
UPB_INLINE envoy_extensions_filters_http_router_v3_Router *envoy_extensions_filters_http_router_v3_Router_parse_ex(const char *buf, size_t size,
                           upb_arena *arena, int options) {
  envoy_extensions_filters_http_router_v3_Router *ret = envoy_extensions_filters_http_router_v3_Router_new(arena);
  return (ret && _upb_decode(buf, size, ret, &envoy_extensions_filters_http_router_v3_Router_msginit, arena, options))
      ? ret : NULL;
}
UPB_INLINE char *envoy_extensions_filters_http_router_v3_Router_serialize(const envoy_extensions_filters_http_router_v3_Router *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_extensions_filters_http_router_v3_Router_msginit, arena, len);
}

UPB_INLINE bool envoy_extensions_filters_http_router_v3_Router_has_dynamic_stats(const envoy_extensions_filters_http_router_v3_Router *msg) { return _upb_hasbit(msg, 1); }
UPB_INLINE const struct google_protobuf_BoolValue* envoy_extensions_filters_http_router_v3_Router_dynamic_stats(const envoy_extensions_filters_http_router_v3_Router *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(4, 8), const struct google_protobuf_BoolValue*); }
UPB_INLINE bool envoy_extensions_filters_http_router_v3_Router_start_child_span(const envoy_extensions_filters_http_router_v3_Router *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(1, 1), bool); }
UPB_INLINE bool envoy_extensions_filters_http_router_v3_Router_has_upstream_log(const envoy_extensions_filters_http_router_v3_Router *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(8, 16)); }
UPB_INLINE const struct envoy_config_accesslog_v3_AccessLog* const* envoy_extensions_filters_http_router_v3_Router_upstream_log(const envoy_extensions_filters_http_router_v3_Router *msg, size_t *len) { return (const struct envoy_config_accesslog_v3_AccessLog* const*)_upb_array_accessor(msg, UPB_SIZE(8, 16), len); }
UPB_INLINE bool envoy_extensions_filters_http_router_v3_Router_suppress_envoy_headers(const envoy_extensions_filters_http_router_v3_Router *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(2, 2), bool); }
UPB_INLINE upb_strview const* envoy_extensions_filters_http_router_v3_Router_strict_check_headers(const envoy_extensions_filters_http_router_v3_Router *msg, size_t *len) { return (upb_strview const*)_upb_array_accessor(msg, UPB_SIZE(12, 24), len); }
UPB_INLINE bool envoy_extensions_filters_http_router_v3_Router_respect_expected_rq_timeout(const envoy_extensions_filters_http_router_v3_Router *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(3, 3), bool); }

UPB_INLINE void envoy_extensions_filters_http_router_v3_Router_set_dynamic_stats(envoy_extensions_filters_http_router_v3_Router *msg, struct google_protobuf_BoolValue* value) {
  _upb_sethas(msg, 1);
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8), struct google_protobuf_BoolValue*) = value;
}
UPB_INLINE struct google_protobuf_BoolValue* envoy_extensions_filters_http_router_v3_Router_mutable_dynamic_stats(envoy_extensions_filters_http_router_v3_Router *msg, upb_arena *arena) {
  struct google_protobuf_BoolValue* sub = (struct google_protobuf_BoolValue*)envoy_extensions_filters_http_router_v3_Router_dynamic_stats(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_BoolValue*)_upb_msg_new(&google_protobuf_BoolValue_msginit, arena);
    if (!sub) return NULL;
    envoy_extensions_filters_http_router_v3_Router_set_dynamic_stats(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_extensions_filters_http_router_v3_Router_set_start_child_span(envoy_extensions_filters_http_router_v3_Router *msg, bool value) {
  *UPB_PTR_AT(msg, UPB_SIZE(1, 1), bool) = value;
}
UPB_INLINE struct envoy_config_accesslog_v3_AccessLog** envoy_extensions_filters_http_router_v3_Router_mutable_upstream_log(envoy_extensions_filters_http_router_v3_Router *msg, size_t *len) {
  return (struct envoy_config_accesslog_v3_AccessLog**)_upb_array_mutable_accessor(msg, UPB_SIZE(8, 16), len);
}
UPB_INLINE struct envoy_config_accesslog_v3_AccessLog** envoy_extensions_filters_http_router_v3_Router_resize_upstream_log(envoy_extensions_filters_http_router_v3_Router *msg, size_t len, upb_arena *arena) {
  return (struct envoy_config_accesslog_v3_AccessLog**)_upb_array_resize_accessor2(msg, UPB_SIZE(8, 16), len, UPB_SIZE(2, 3), arena);
}
UPB_INLINE struct envoy_config_accesslog_v3_AccessLog* envoy_extensions_filters_http_router_v3_Router_add_upstream_log(envoy_extensions_filters_http_router_v3_Router *msg, upb_arena *arena) {
  struct envoy_config_accesslog_v3_AccessLog* sub = (struct envoy_config_accesslog_v3_AccessLog*)_upb_msg_new(&envoy_config_accesslog_v3_AccessLog_msginit, arena);
  bool ok = _upb_array_append_accessor2(
      msg, UPB_SIZE(8, 16), UPB_SIZE(2, 3), &sub, arena);
  if (!ok) return NULL;
  return sub;
}
UPB_INLINE void envoy_extensions_filters_http_router_v3_Router_set_suppress_envoy_headers(envoy_extensions_filters_http_router_v3_Router *msg, bool value) {
  *UPB_PTR_AT(msg, UPB_SIZE(2, 2), bool) = value;
}
UPB_INLINE upb_strview* envoy_extensions_filters_http_router_v3_Router_mutable_strict_check_headers(envoy_extensions_filters_http_router_v3_Router *msg, size_t *len) {
  return (upb_strview*)_upb_array_mutable_accessor(msg, UPB_SIZE(12, 24), len);
}
UPB_INLINE upb_strview* envoy_extensions_filters_http_router_v3_Router_resize_strict_check_headers(envoy_extensions_filters_http_router_v3_Router *msg, size_t len, upb_arena *arena) {
  return (upb_strview*)_upb_array_resize_accessor2(msg, UPB_SIZE(12, 24), len, UPB_SIZE(3, 4), arena);
}
UPB_INLINE bool envoy_extensions_filters_http_router_v3_Router_add_strict_check_headers(envoy_extensions_filters_http_router_v3_Router *msg, upb_strview val, upb_arena *arena) {
  return _upb_array_append_accessor2(msg, UPB_SIZE(12, 24), UPB_SIZE(3, 4), &val,
      arena);
}
UPB_INLINE void envoy_extensions_filters_http_router_v3_Router_set_respect_expected_rq_timeout(envoy_extensions_filters_http_router_v3_Router *msg, bool value) {
  *UPB_PTR_AT(msg, UPB_SIZE(3, 3), bool) = value;
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_undef.inc"
#else
  #include  "upb/port_undef.inc"
#endif

#endif  /* ENVOY_EXTENSIONS_FILTERS_HTTP_ROUTER_V3_ROUTER_PROTO_UPB_H_ */
