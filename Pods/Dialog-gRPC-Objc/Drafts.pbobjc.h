// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: drafts.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30004
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30004 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

@class Draft;
@class MessageContent;
@class Peer;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - DraftsRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
GPB_FINAL @interface DraftsRoot : GPBRootObject
@end

#pragma mark - LoadDraftsRequest

typedef GPB_ENUM(LoadDraftsRequest_FieldNumber) {
  LoadDraftsRequest_FieldNumber_Clock = 1,
};

GPB_FINAL @interface LoadDraftsRequest : GPBMessage

@property(nonatomic, readwrite) int64_t clock;

@end

#pragma mark - LoadDraftsResponse

typedef GPB_ENUM(LoadDraftsResponse_FieldNumber) {
  LoadDraftsResponse_FieldNumber_DraftsArray = 1,
  LoadDraftsResponse_FieldNumber_Clock = 2,
};

GPB_FINAL @interface LoadDraftsResponse : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Draft*> *draftsArray;
/** The number of items in @c draftsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger draftsArray_Count;

@property(nonatomic, readwrite) int64_t clock;

@end

#pragma mark - SaveDraftsRequest

typedef GPB_ENUM(SaveDraftsRequest_FieldNumber) {
  SaveDraftsRequest_FieldNumber_DraftArray = 1,
};

GPB_FINAL @interface SaveDraftsRequest : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Draft*> *draftArray;
/** The number of items in @c draftArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger draftArray_Count;

@end

#pragma mark - SaveDraftsResponse

typedef GPB_ENUM(SaveDraftsResponse_FieldNumber) {
  SaveDraftsResponse_FieldNumber_Clock = 1,
};

GPB_FINAL @interface SaveDraftsResponse : GPBMessage

@property(nonatomic, readwrite) int64_t clock;

@end

#pragma mark - UpdateDraftsChanged

typedef GPB_ENUM(UpdateDraftsChanged_FieldNumber) {
  UpdateDraftsChanged_FieldNumber_DraftArray = 1,
  UpdateDraftsChanged_FieldNumber_Clock = 2,
  UpdateDraftsChanged_FieldNumber_PrevClock = 3,
};

GPB_FINAL @interface UpdateDraftsChanged : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Draft*> *draftArray;
/** The number of items in @c draftArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger draftArray_Count;

@property(nonatomic, readwrite) int64_t clock;

@property(nonatomic, readwrite) int64_t prevClock;

@end

#pragma mark - Draft

typedef GPB_ENUM(Draft_FieldNumber) {
  Draft_FieldNumber_Peer = 1,
  Draft_FieldNumber_Content = 2,
};

GPB_FINAL @interface Draft : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) Peer *peer;
/** Test to see if @c peer has been set. */
@property(nonatomic, readwrite) BOOL hasPeer;

@property(nonatomic, readwrite, strong, null_resettable) MessageContent *content;
/** Test to see if @c content has been set. */
@property(nonatomic, readwrite) BOOL hasContent;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
