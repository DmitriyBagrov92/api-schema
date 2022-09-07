// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: presence.proto

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

@class GPBTimestamp;
@class OutPeer;
@class Peer;
@class UpdateGroupTyping_UserTyping;
@class UserOutPeer;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Enum TypingType

typedef GPB_ENUM(TypingType) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  TypingType_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  TypingType_TypingTypeUnknown = 0,
  TypingType_TypingTypeText = 1,
  TypingType_TypingTypeVoice = 2,
};

GPBEnumDescriptor *TypingType_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL TypingType_IsValidValue(int32_t value);

#pragma mark - Enum DeviceType

typedef GPB_ENUM(DeviceType) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  DeviceType_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  DeviceType_DeviceTypeUnknown = 0,
  DeviceType_DeviceTypeGeneric = 1,
  DeviceType_DeviceTypePc = 2,
  DeviceType_DeviceTypeMobile = 3,
  DeviceType_DeviceTypeTablet = 4,
  DeviceType_DeviceTypeWatch = 5,
  DeviceType_DeviceTypeMirror = 6,
  DeviceType_DeviceTypeCar = 7,
  DeviceType_DeviceTypeTable = 8,
};

GPBEnumDescriptor *DeviceType_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL DeviceType_IsValidValue(int32_t value);

#pragma mark - PresenceRoot

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
GPB_FINAL @interface PresenceRoot : GPBRootObject
@end

#pragma mark - RequestStartTyping

typedef GPB_ENUM(RequestStartTyping_FieldNumber) {
  RequestStartTyping_FieldNumber_Peer = 1,
  RequestStartTyping_FieldNumber_TypingType = 2,
};

/**
 * Sending typing notification
 **/
GPB_FINAL @interface RequestStartTyping : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) OutPeer *peer;
/** Test to see if @c peer has been set. */
@property(nonatomic, readwrite) BOOL hasPeer;

@property(nonatomic, readwrite) TypingType typingType;

@end

/**
 * Fetches the raw value of a @c RequestStartTyping's @c typingType property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t RequestStartTyping_TypingType_RawValue(RequestStartTyping *message);
/**
 * Sets the raw value of an @c RequestStartTyping's @c typingType property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetRequestStartTyping_TypingType_RawValue(RequestStartTyping *message, int32_t value);

#pragma mark - RequestStopTyping

typedef GPB_ENUM(RequestStopTyping_FieldNumber) {
  RequestStopTyping_FieldNumber_Peer = 1,
  RequestStopTyping_FieldNumber_TypingType = 2,
};

/**
 * Stop typing
 **/
GPB_FINAL @interface RequestStopTyping : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) OutPeer *peer;
/** Test to see if @c peer has been set. */
@property(nonatomic, readwrite) BOOL hasPeer;

@property(nonatomic, readwrite) TypingType typingType;

@end

/**
 * Fetches the raw value of a @c RequestStopTyping's @c typingType property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t RequestStopTyping_TypingType_RawValue(RequestStopTyping *message);
/**
 * Sets the raw value of an @c RequestStopTyping's @c typingType property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetRequestStopTyping_TypingType_RawValue(RequestStopTyping *message, int32_t value);

#pragma mark - RequestSetOnline

typedef GPB_ENUM(RequestSetOnline_FieldNumber) {
  RequestSetOnline_FieldNumber_IsOnline = 1,
  RequestSetOnline_FieldNumber_Timeout = 2,
  RequestSetOnline_FieldNumber_DeviceType = 3,
};

/**
 * Sending online state
 **/
GPB_FINAL @interface RequestSetOnline : GPBMessage

@property(nonatomic, readwrite) BOOL isOnline;

/** / offline after timeout */
@property(nonatomic, readwrite) int64_t timeout;

@property(nonatomic, readwrite) DeviceType deviceType;

@end

/**
 * Fetches the raw value of a @c RequestSetOnline's @c deviceType property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t RequestSetOnline_DeviceType_RawValue(RequestSetOnline *message);
/**
 * Sets the raw value of an @c RequestSetOnline's @c deviceType property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetRequestSetOnline_DeviceType_RawValue(RequestSetOnline *message, int32_t value);

#pragma mark - UpdateTyping

typedef GPB_ENUM(UpdateTyping_FieldNumber) {
  UpdateTyping_FieldNumber_Peer = 1,
  UpdateTyping_FieldNumber_UserId = 2,
  UpdateTyping_FieldNumber_TypingType = 3,
};

/**
 * Update about user's typing
 **/
GPB_FINAL @interface UpdateTyping : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) Peer *peer;
/** Test to see if @c peer has been set. */
@property(nonatomic, readwrite) BOOL hasPeer;

@property(nonatomic, readwrite, copy, null_resettable) NSString *userId;

@property(nonatomic, readwrite) TypingType typingType;

@end

/**
 * Fetches the raw value of a @c UpdateTyping's @c typingType property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t UpdateTyping_TypingType_RawValue(UpdateTyping *message);
/**
 * Sets the raw value of an @c UpdateTyping's @c typingType property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetUpdateTyping_TypingType_RawValue(UpdateTyping *message, int32_t value);

#pragma mark - UpdateTypingStop

typedef GPB_ENUM(UpdateTypingStop_FieldNumber) {
  UpdateTypingStop_FieldNumber_Peer = 1,
  UpdateTypingStop_FieldNumber_UserId = 2,
  UpdateTypingStop_FieldNumber_TypingType = 3,
};

/**
 * Update about user's typing stop
 **/
GPB_FINAL @interface UpdateTypingStop : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) Peer *peer;
/** Test to see if @c peer has been set. */
@property(nonatomic, readwrite) BOOL hasPeer;

@property(nonatomic, readwrite, copy, null_resettable) NSString *userId;

@property(nonatomic, readwrite) TypingType typingType;

@end

/**
 * Fetches the raw value of a @c UpdateTypingStop's @c typingType property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t UpdateTypingStop_TypingType_RawValue(UpdateTypingStop *message);
/**
 * Sets the raw value of an @c UpdateTypingStop's @c typingType property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetUpdateTypingStop_TypingType_RawValue(UpdateTypingStop *message, int32_t value);

#pragma mark - UpdateUserLastSeen

typedef GPB_ENUM(UpdateUserLastSeen_FieldNumber) {
  UpdateUserLastSeen_FieldNumber_UserId = 1,
  UpdateUserLastSeen_FieldNumber_LastSeenAt = 2,
  UpdateUserLastSeen_FieldNumber_DeviceType = 3,
  UpdateUserLastSeen_FieldNumber_CurrentServerTime = 4,
};

/**
 * Update about user's last seen state
 **/
GPB_FINAL @interface UpdateUserLastSeen : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *userId;

@property(nonatomic, readwrite) int64_t lastSeenAt;

@property(nonatomic, readwrite) DeviceType deviceType;

@property(nonatomic, readwrite) int64_t currentServerTime;

@end

/**
 * Fetches the raw value of a @c UpdateUserLastSeen's @c deviceType property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t UpdateUserLastSeen_DeviceType_RawValue(UpdateUserLastSeen *message);
/**
 * Sets the raw value of an @c UpdateUserLastSeen's @c deviceType property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetUpdateUserLastSeen_DeviceType_RawValue(UpdateUserLastSeen *message, int32_t value);

#pragma mark - UpdateGroupOnline

typedef GPB_ENUM(UpdateGroupOnline_FieldNumber) {
  UpdateGroupOnline_FieldNumber_GroupId = 1,
  UpdateGroupOnline_FieldNumber_Count = 2,
  UpdateGroupOnline_FieldNumber_UsersIdArray = 3,
};

/**
 * Update about group online change
 **/
GPB_FINAL @interface UpdateGroupOnline : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *groupId;

/** / amount of online users. */
@property(nonatomic, readwrite) int32_t count;

/** / The list of online users will only be sent if the flag was set during the subscription. */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSString*> *usersIdArray;
/** The number of items in @c usersIdArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger usersIdArray_Count;

@end

#pragma mark - UpdateGroupTyping

typedef GPB_ENUM(UpdateGroupTyping_FieldNumber) {
  UpdateGroupTyping_FieldNumber_GroupId = 1,
  UpdateGroupTyping_FieldNumber_UsersTypingArray = 2,
};

GPB_FINAL @interface UpdateGroupTyping : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *groupId;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<UpdateGroupTyping_UserTyping*> *usersTypingArray;
/** The number of items in @c usersTypingArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger usersTypingArray_Count;

@end

#pragma mark - UpdateGroupTyping_UserTyping

typedef GPB_ENUM(UpdateGroupTyping_UserTyping_FieldNumber) {
  UpdateGroupTyping_UserTyping_FieldNumber_UserId = 1,
  UpdateGroupTyping_UserTyping_FieldNumber_TypingType = 2,
};

GPB_FINAL @interface UpdateGroupTyping_UserTyping : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *userId;

@property(nonatomic, readwrite) TypingType typingType;

@end

/**
 * Fetches the raw value of a @c UpdateGroupTyping_UserTyping's @c typingType property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t UpdateGroupTyping_UserTyping_TypingType_RawValue(UpdateGroupTyping_UserTyping *message);
/**
 * Sets the raw value of an @c UpdateGroupTyping_UserTyping's @c typingType property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetUpdateGroupTyping_UserTyping_TypingType_RawValue(UpdateGroupTyping_UserTyping *message, int32_t value);

#pragma mark - RequestGetUserLastPresence

typedef GPB_ENUM(RequestGetUserLastPresence_FieldNumber) {
  RequestGetUserLastPresence_FieldNumber_UserOutPeer = 1,
};

/**
 * Request for last user online timestamp
 **/
GPB_FINAL @interface RequestGetUserLastPresence : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) UserOutPeer *userOutPeer;
/** Test to see if @c userOutPeer has been set. */
@property(nonatomic, readwrite) BOOL hasUserOutPeer;

@end

#pragma mark - ResponseGetUserLastPresence

typedef GPB_ENUM(ResponseGetUserLastPresence_FieldNumber) {
  ResponseGetUserLastPresence_FieldNumber_LastOnlineAt = 1,
};

/**
 * Response for RequestGetUserLastPresence
 **/
GPB_FINAL @interface ResponseGetUserLastPresence : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) GPBTimestamp *lastOnlineAt;
/** Test to see if @c lastOnlineAt has been set. */
@property(nonatomic, readwrite) BOOL hasLastOnlineAt;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
