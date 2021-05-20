/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/type/metadata/v3/metadata.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#if COCOAPODS==1
  #include  "third_party/upb/upb/msg.h"
#else
  #include  "upb/msg.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/envoy/type/metadata/v3/metadata.upb.h"
#else
  #include  "envoy/type/metadata/v3/metadata.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/udpa/annotations/status.upb.h"
#else
  #include  "udpa/annotations/status.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/udpa/annotations/versioning.upb.h"
#else
  #include  "udpa/annotations/versioning.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/validate/validate.upb.h"
#else
  #include  "validate/validate.upb.h"
#endif

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_def.inc"
#else
  #include  "upb/port_def.inc"
#endif

static const upb_msglayout *const envoy_type_metadata_v3_MetadataKey_submsgs[1] = {
  &envoy_type_metadata_v3_MetadataKey_PathSegment_msginit,
};

static const upb_msglayout_field envoy_type_metadata_v3_MetadataKey__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, 1},
  {2, UPB_SIZE(8, 16), 0, 0, 11, 3},
};

const upb_msglayout envoy_type_metadata_v3_MetadataKey_msginit = {
  &envoy_type_metadata_v3_MetadataKey_submsgs[0],
  &envoy_type_metadata_v3_MetadataKey__fields[0],
  UPB_SIZE(16, 32), 2, false, 255,
};

static const upb_msglayout_field envoy_type_metadata_v3_MetadataKey_PathSegment__fields[1] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(-9, -17), 0, 9, 1},
};

const upb_msglayout envoy_type_metadata_v3_MetadataKey_PathSegment_msginit = {
  NULL,
  &envoy_type_metadata_v3_MetadataKey_PathSegment__fields[0],
  UPB_SIZE(16, 32), 1, false, 255,
};

static const upb_msglayout *const envoy_type_metadata_v3_MetadataKind_submsgs[4] = {
  &envoy_type_metadata_v3_MetadataKind_Cluster_msginit,
  &envoy_type_metadata_v3_MetadataKind_Host_msginit,
  &envoy_type_metadata_v3_MetadataKind_Request_msginit,
  &envoy_type_metadata_v3_MetadataKind_Route_msginit,
};

static const upb_msglayout_field envoy_type_metadata_v3_MetadataKind__fields[4] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 2, 11, 1},
  {2, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 3, 11, 1},
  {3, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 0, 11, 1},
  {4, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 1, 11, 1},
};

const upb_msglayout envoy_type_metadata_v3_MetadataKind_msginit = {
  &envoy_type_metadata_v3_MetadataKind_submsgs[0],
  &envoy_type_metadata_v3_MetadataKind__fields[0],
  UPB_SIZE(8, 16), 4, false, 255,
};

const upb_msglayout envoy_type_metadata_v3_MetadataKind_Request_msginit = {
  NULL,
  NULL,
  UPB_SIZE(0, 0), 0, false, 255,
};

const upb_msglayout envoy_type_metadata_v3_MetadataKind_Route_msginit = {
  NULL,
  NULL,
  UPB_SIZE(0, 0), 0, false, 255,
};

const upb_msglayout envoy_type_metadata_v3_MetadataKind_Cluster_msginit = {
  NULL,
  NULL,
  UPB_SIZE(0, 0), 0, false, 255,
};

const upb_msglayout envoy_type_metadata_v3_MetadataKind_Host_msginit = {
  NULL,
  NULL,
  UPB_SIZE(0, 0), 0, false, 255,
};

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_undef.inc"
#else
  #include  "upb/port_undef.inc"
#endif

