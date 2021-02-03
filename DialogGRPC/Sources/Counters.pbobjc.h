// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: counters.proto

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

@class AppCounters;
@class GPBInt32Value;
@class GPBInt64Value;
@class Peer;
@class UnreadDialog;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - CountersRoot

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
GPB_FINAL @interface CountersRoot : GPBRootObject
@end

#pragma mark - UnreadDialog

typedef GPB_ENUM(UnreadDialog_FieldNumber) {
  UnreadDialog_FieldNumber_Peer = 1,
  UnreadDialog_FieldNumber_Counter = 2,
};

/**
 * Unread dialogs
 **/
GPB_FINAL @interface UnreadDialog : GPBMessage

/** / dialog peer */
@property(nonatomic, readwrite, strong, null_resettable) Peer *peer;
/** Test to see if @c peer has been set. */
@property(nonatomic, readwrite) BOOL hasPeer;

/** / unread messages count */
@property(nonatomic, readwrite) int32_t counter;

@end

#pragma mark - AppCounters

typedef GPB_ENUM(AppCounters_FieldNumber) {
  AppCounters_FieldNumber_GlobalCounter = 1,
  AppCounters_FieldNumber_GlobalDialogsCounter = 2,
  AppCounters_FieldNumber_UnreadDialogsArray = 3,
};

GPB_FINAL @interface AppCounters : GPBMessage

/** / Global unread counter */
@property(nonatomic, readwrite, strong, null_resettable) GPBInt32Value *globalCounter;
/** Test to see if @c globalCounter has been set. */
@property(nonatomic, readwrite) BOOL hasGlobalCounter;

/** / Global count of dialogs with positive counter values */
@property(nonatomic, readwrite, strong, null_resettable) GPBInt32Value *globalDialogsCounter;
/** Test to see if @c globalDialogsCounter has been set. */
@property(nonatomic, readwrite) BOOL hasGlobalDialogsCounter;

/** / map of chat peer id to unread to counters */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<UnreadDialog*> *unreadDialogsArray;
/** The number of items in @c unreadDialogsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger unreadDialogsArray_Count;

@end

#pragma mark - UpdateCountersChanged

typedef GPB_ENUM(UpdateCountersChanged_FieldNumber) {
  UpdateCountersChanged_FieldNumber_Counters = 1,
  UpdateCountersChanged_FieldNumber_Ts = 2,
};

/**
 * / deprecated
 **/
GPB_FINAL @interface UpdateCountersChanged : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) AppCounters *counters;
/** Test to see if @c counters has been set. */
@property(nonatomic, readwrite) BOOL hasCounters;

@property(nonatomic, readwrite, strong, null_resettable) GPBInt64Value *ts;
/** Test to see if @c ts has been set. */
@property(nonatomic, readwrite) BOOL hasTs;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
