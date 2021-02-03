// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: users.proto

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

@class Avatar;
@class BotCommand;
@class ContactRecord;
@class DataClock;
@class FullUser;
@class GPBBoolValue;
@class GPBInt64Value;
@class GPBStringValue;
@class Peer;
@class RecursiveMapValue;
@class RequestLoadUserData_Claim;
@class User;
@class UserData;
@class UserData_Ext;
@class UserOutPeer;
@class UserStatus;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Enum Sex

typedef GPB_ENUM(Sex) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  Sex_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  Sex_SexUnknown = 0,
  Sex_SexMale = 2,
  Sex_SexFemale = 3,
};

GPBEnumDescriptor *Sex_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL Sex_IsValidValue(int32_t value);

#pragma mark - Enum ContactType

typedef GPB_ENUM(ContactType) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  ContactType_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  ContactType_ContacttypeUnknown = 0,
  ContactType_ContacttypePhone = 1,
  ContactType_ContacttypeEmail = 2,
  ContactType_ContacttypeWeb = 3,
  ContactType_ContacttypeSocial = 4,
};

GPBEnumDescriptor *ContactType_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL ContactType_IsValidValue(int32_t value);

#pragma mark - Enum UserStatusType

typedef GPB_ENUM(UserStatusType) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  UserStatusType_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  UserStatusType_UserstatustypeUnknown = 0,
  UserStatusType_UserstatustypeUnset = 1,
  UserStatusType_UserstatustypeAway = 2,
  UserStatusType_UserstatustypeDonotdisturb = 3,
  UserStatusType_UserstatustypeInvisible = 4,
  UserStatusType_UserstatustypeBusy = 5,
};

GPBEnumDescriptor *UserStatusType_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL UserStatusType_IsValidValue(int32_t value);

#pragma mark - Enum UserData_Lifecycle

typedef GPB_ENUM(UserData_Lifecycle) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  UserData_Lifecycle_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  UserData_Lifecycle_Missed = 0,
  UserData_Lifecycle_Active = 1,
  UserData_Lifecycle_Deleted = 2,
  UserData_Lifecycle_Blocked = 3,
  UserData_Lifecycle_BlockedAndDeleted = 4,
};

GPBEnumDescriptor *UserData_Lifecycle_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL UserData_Lifecycle_IsValidValue(int32_t value);

#pragma mark - Enum UserData_Hint

typedef GPB_ENUM(UserData_Hint) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  UserData_Hint_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  UserData_Hint_UserHintRegular = 0,
  UserData_Hint_UserHintGuest = 1,
};

GPBEnumDescriptor *UserData_Hint_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL UserData_Hint_IsValidValue(int32_t value);

#pragma mark - UsersRoot

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
GPB_FINAL @interface UsersRoot : GPBRootObject
@end

#pragma mark - ContactRecord

typedef GPB_ENUM(ContactRecord_FieldNumber) {
  ContactRecord_FieldNumber_Type = 1,
  ContactRecord_FieldNumber_StringValue = 2,
  ContactRecord_FieldNumber_LongValue = 3,
  ContactRecord_FieldNumber_Title = 4,
  ContactRecord_FieldNumber_Subtitle = 5,
  ContactRecord_FieldNumber_TypeSpec = 6,
};

/**
 * Contact information record
 **/
GPB_FINAL @interface ContactRecord : GPBMessage

@property(nonatomic, readwrite) ContactType type;

/**
 * *
 * Value for specification type of contact,
 * for example 'mobile/standalone/office' for phones or 'vk/fb/telegram'
 * for extenrnal networks.
 **/
@property(nonatomic, readwrite, strong, null_resettable) GPBStringValue *typeSpec;
/** Test to see if @c typeSpec has been set. */
@property(nonatomic, readwrite) BOOL hasTypeSpec;

@property(nonatomic, readwrite, strong, null_resettable) GPBStringValue *stringValue;
/** Test to see if @c stringValue has been set. */
@property(nonatomic, readwrite) BOOL hasStringValue;

@property(nonatomic, readwrite, strong, null_resettable) GPBInt64Value *longValue;
/** Test to see if @c longValue has been set. */
@property(nonatomic, readwrite) BOOL hasLongValue;

@property(nonatomic, readwrite, strong, null_resettable) GPBStringValue *title;
/** Test to see if @c title has been set. */
@property(nonatomic, readwrite) BOOL hasTitle;

@property(nonatomic, readwrite, strong, null_resettable) GPBStringValue *subtitle;
/** Test to see if @c subtitle has been set. */
@property(nonatomic, readwrite) BOOL hasSubtitle;

@end

/**
 * Fetches the raw value of a @c ContactRecord's @c type property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t ContactRecord_Type_RawValue(ContactRecord *message);
/**
 * Sets the raw value of an @c ContactRecord's @c type property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetContactRecord_Type_RawValue(ContactRecord *message, int32_t value);

#pragma mark - UserStatus

typedef GPB_ENUM(UserStatus_FieldNumber) {
  UserStatus_FieldNumber_Type = 1,
  UserStatus_FieldNumber_Text = 2,
  UserStatus_FieldNumber_Clock = 3,
};

/**
 * User's status
 **/
GPB_FINAL @interface UserStatus : GPBMessage

@property(nonatomic, readwrite) UserStatusType type;

/** / Text supplied by user */
@property(nonatomic, readwrite, strong, null_resettable) GPBStringValue *text;
/** Test to see if @c text has been set. */
@property(nonatomic, readwrite) BOOL hasText;

@property(nonatomic, readwrite) int64_t clock;

@end

/**
 * Fetches the raw value of a @c UserStatus's @c type property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t UserStatus_Type_RawValue(UserStatus *message);
/**
 * Sets the raw value of an @c UserStatus's @c type property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetUserStatus_Type_RawValue(UserStatus *message, int32_t value);

#pragma mark - UserData

typedef GPB_ENUM(UserData_FieldNumber) {
  UserData_FieldNumber_Name = 1,
  UserData_FieldNumber_Nick = 2,
  UserData_FieldNumber_Sex = 3,
  UserData_FieldNumber_Avatar = 4,
  UserData_FieldNumber_IsBot = 5,
  UserData_FieldNumber_Status = 6,
  UserData_FieldNumber_UserStatus = 7,
  UserData_FieldNumber_TimeZone = 8,
  UserData_FieldNumber_ExtsArray = 9,
  UserData_FieldNumber_ObsoleteClock = 10,
  UserData_FieldNumber_LocalesArray = 11,
  UserData_FieldNumber_About = 12,
  UserData_FieldNumber_ContactInfoArray = 13,
  UserData_FieldNumber_BotCommandsArray = 14,
  UserData_FieldNumber_CustomProfile = 15,
  UserData_FieldNumber_Clock = 16,
  UserData_FieldNumber_Hint = 17,
};

/**
 * Main user object
 **/
GPB_FINAL @interface UserData : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *name;

@property(nonatomic, readwrite, strong, null_resettable) GPBStringValue *nick;
/** Test to see if @c nick has been set. */
@property(nonatomic, readwrite) BOOL hasNick;

@property(nonatomic, readwrite) Sex sex;

@property(nonatomic, readwrite, strong, null_resettable) Avatar *avatar;
/** Test to see if @c avatar has been set. */
@property(nonatomic, readwrite) BOOL hasAvatar;

@property(nonatomic, readwrite, strong, null_resettable) GPBBoolValue *isBot;
/** Test to see if @c isBot has been set. */
@property(nonatomic, readwrite) BOOL hasIsBot;

@property(nonatomic, readwrite) UserData_Lifecycle status;

@property(nonatomic, readwrite, strong, null_resettable) UserStatus *userStatus;
/** Test to see if @c userStatus has been set. */
@property(nonatomic, readwrite) BOOL hasUserStatus;

@property(nonatomic, readwrite, copy, null_resettable) NSString *timeZone;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<UserData_Ext*> *extsArray;
/** The number of items in @c extsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger extsArray_Count;

/** deprecated */
@property(nonatomic, readwrite, strong, null_resettable) DataClock *obsoleteClock;
/** Test to see if @c obsoleteClock has been set. */
@property(nonatomic, readwrite) BOOL hasObsoleteClock;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSString*> *localesArray;
/** The number of items in @c localesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger localesArray_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBStringValue *about;
/** Test to see if @c about has been set. */
@property(nonatomic, readwrite) BOOL hasAbout;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<ContactRecord*> *contactInfoArray;
/** The number of items in @c contactInfoArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger contactInfoArray_Count;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<BotCommand*> *botCommandsArray;
/** The number of items in @c botCommandsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger botCommandsArray_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBStringValue *customProfile;
/** Test to see if @c customProfile has been set. */
@property(nonatomic, readwrite) BOOL hasCustomProfile;

/** / This parameter intended just to show in UI (client shouldn't base any logic on that) */
@property(nonatomic, readwrite) UserData_Hint hint;

@property(nonatomic, readwrite) int64_t clock;

@end

/**
 * Fetches the raw value of a @c UserData's @c sex property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t UserData_Sex_RawValue(UserData *message);
/**
 * Sets the raw value of an @c UserData's @c sex property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetUserData_Sex_RawValue(UserData *message, int32_t value);

/**
 * Fetches the raw value of a @c UserData's @c status property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t UserData_Status_RawValue(UserData *message);
/**
 * Sets the raw value of an @c UserData's @c status property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetUserData_Status_RawValue(UserData *message, int32_t value);

/**
 * Fetches the raw value of a @c UserData's @c hint property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t UserData_Hint_RawValue(UserData *message);
/**
 * Sets the raw value of an @c UserData's @c hint property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetUserData_Hint_RawValue(UserData *message, int32_t value);

#pragma mark - UserData_Ext

typedef GPB_ENUM(UserData_Ext_FieldNumber) {
  UserData_Ext_FieldNumber_Key = 1,
  UserData_Ext_FieldNumber_S = 2,
  UserData_Ext_FieldNumber_B = 3,
};

typedef GPB_ENUM(UserData_Ext_V_OneOfCase) {
  UserData_Ext_V_OneOfCase_GPBUnsetOneOfCase = 0,
  UserData_Ext_V_OneOfCase_S = 2,
  UserData_Ext_V_OneOfCase_B = 3,
};

GPB_FINAL @interface UserData_Ext : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *key;

@property(nonatomic, readonly) UserData_Ext_V_OneOfCase vOneOfCase;

@property(nonatomic, readwrite, copy, null_resettable) NSString *s;

@property(nonatomic, readwrite) BOOL b;

@end

/**
 * Clears whatever value was set for the oneof 'v'.
 **/
void UserData_Ext_ClearVOneOfCase(UserData_Ext *message);

#pragma mark - User

typedef GPB_ENUM(User_FieldNumber) {
  User_FieldNumber_Id_p = 1,
  User_FieldNumber_AccessHash = 2,
  User_FieldNumber_Data_p = 3,
};

GPB_FINAL @interface User : GPBMessage

/** / User's id */
@property(nonatomic, readwrite) int32_t id_p;

@property(nonatomic, readwrite) int64_t accessHash;

/** required */
@property(nonatomic, readwrite, strong, null_resettable) UserData *data_p;
/** Test to see if @c data_p has been set. */
@property(nonatomic, readwrite) BOOL hasData_p;

@end

#pragma mark - UserPartialInfo

typedef GPB_ENUM(UserPartialInfo_FieldNumber) {
  UserPartialInfo_FieldNumber_Id_p = 1,
  UserPartialInfo_FieldNumber_AccessHash = 2,
  UserPartialInfo_FieldNumber_Clock = 3,
  UserPartialInfo_FieldNumber_Name = 4,
  UserPartialInfo_FieldNumber_Nick = 5,
  UserPartialInfo_FieldNumber_Avatar = 6,
};

GPB_FINAL @interface UserPartialInfo : GPBMessage

@property(nonatomic, readwrite) int32_t id_p;

@property(nonatomic, readwrite) int64_t accessHash;

@property(nonatomic, readwrite) int64_t clock;

@property(nonatomic, readwrite, copy, null_resettable) NSString *name;

@property(nonatomic, readwrite, strong, null_resettable) GPBStringValue *nick;
/** Test to see if @c nick has been set. */
@property(nonatomic, readwrite) BOOL hasNick;

@property(nonatomic, readwrite, strong, null_resettable) Avatar *avatar;
/** Test to see if @c avatar has been set. */
@property(nonatomic, readwrite) BOOL hasAvatar;

@end

#pragma mark - UserProfile

typedef GPB_ENUM(UserProfile_FieldNumber) {
  UserProfile_FieldNumber_User = 1,
  UserProfile_FieldNumber_ContactInfoArray = 2,
  UserProfile_FieldNumber_About = 3,
  UserProfile_FieldNumber_PreferredLanguagesArray = 4,
  UserProfile_FieldNumber_TimeZone = 5,
  UserProfile_FieldNumber_BotCommandsArray = 6,
  UserProfile_FieldNumber_CustomProfile = 9,
  UserProfile_FieldNumber_IntegrationToken = 10,
};

GPB_FINAL @interface UserProfile : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) User *user;
/** Test to see if @c user has been set. */
@property(nonatomic, readwrite) BOOL hasUser;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<ContactRecord*> *contactInfoArray;
/** The number of items in @c contactInfoArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger contactInfoArray_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBStringValue *about;
/** Test to see if @c about has been set. */
@property(nonatomic, readwrite) BOOL hasAbout;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSString*> *preferredLanguagesArray;
/** The number of items in @c preferredLanguagesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger preferredLanguagesArray_Count;

/** / Time Zone of user in TZ format */
@property(nonatomic, readwrite, strong, null_resettable) GPBStringValue *timeZone;
/** Test to see if @c timeZone has been set. */
@property(nonatomic, readwrite) BOOL hasTimeZone;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<BotCommand*> *botCommandsArray;
/** The number of items in @c botCommandsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger botCommandsArray_Count;

/** / custom user profile info in JSON format */
@property(nonatomic, readwrite, copy, null_resettable) NSString *customProfile;

@property(nonatomic, readwrite, strong, null_resettable) GPBStringValue *integrationToken;
/** Test to see if @c integrationToken has been set. */
@property(nonatomic, readwrite) BOOL hasIntegrationToken;

@end

#pragma mark - FullUser

typedef GPB_ENUM(FullUser_FieldNumber) {
  FullUser_FieldNumber_Id_p = 1,
  FullUser_FieldNumber_ContactInfoArray = 2,
  FullUser_FieldNumber_About = 3,
  FullUser_FieldNumber_PreferredLanguagesArray = 4,
  FullUser_FieldNumber_TimeZone = 5,
  FullUser_FieldNumber_BotCommandsArray = 6,
  FullUser_FieldNumber_IsBlocked = 8,
  FullUser_FieldNumber_CustomProfile = 9,
  FullUser_FieldNumber_IntegrationToken = 10,
  FullUser_FieldNumber_Status = 11,
};

/**
 * Full User representation - deprecated
 **/
GPB_FINAL @interface FullUser : GPBMessage

/** / User's id */
@property(nonatomic, readwrite) int32_t id_p;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<ContactRecord*> *contactInfoArray;
/** The number of items in @c contactInfoArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger contactInfoArray_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBStringValue *about;
/** Test to see if @c about has been set. */
@property(nonatomic, readwrite) BOOL hasAbout;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSString*> *preferredLanguagesArray;
/** The number of items in @c preferredLanguagesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger preferredLanguagesArray_Count;

/** / Time Zone of user in TZ format */
@property(nonatomic, readwrite, strong, null_resettable) GPBStringValue *timeZone;
/** Test to see if @c timeZone has been set. */
@property(nonatomic, readwrite) BOOL hasTimeZone;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<BotCommand*> *botCommandsArray;
/** The number of items in @c botCommandsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger botCommandsArray_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBBoolValue *isBlocked;
/** Test to see if @c isBlocked has been set. */
@property(nonatomic, readwrite) BOOL hasIsBlocked;

/** / custom user profile info in JSON format */
@property(nonatomic, readwrite, copy, null_resettable) NSString *customProfile;

@property(nonatomic, readwrite, strong, null_resettable) GPBStringValue *integrationToken;
/** Test to see if @c integrationToken has been set. */
@property(nonatomic, readwrite) BOOL hasIntegrationToken;

@property(nonatomic, readwrite, strong, null_resettable) UserStatus *status;
/** Test to see if @c status has been set. */
@property(nonatomic, readwrite) BOOL hasStatus;

@end

#pragma mark - BotCommand

typedef GPB_ENUM(BotCommand_FieldNumber) {
  BotCommand_FieldNumber_SlashCommand = 1,
  BotCommand_FieldNumber_Description_p = 2,
  BotCommand_FieldNumber_LocKey = 3,
};

/**
 * Available bot commands
 **/
GPB_FINAL @interface BotCommand : GPBMessage

/** / Slash command name (wihtout slash) */
@property(nonatomic, readwrite, copy, null_resettable) NSString *slashCommand;

/** / Slash command description */
@property(nonatomic, readwrite, copy, null_resettable) NSString *description_p;

/** / Optional Localization Key for i18n */
@property(nonatomic, readwrite, strong, null_resettable) GPBStringValue *locKey;
/** Test to see if @c locKey has been set. */
@property(nonatomic, readwrite) BOOL hasLocKey;

@end

#pragma mark - RequestEditUserLocalName

typedef GPB_ENUM(RequestEditUserLocalName_FieldNumber) {
  RequestEditUserLocalName_FieldNumber_Uid = 1,
  RequestEditUserLocalName_FieldNumber_AccessHash = 2,
  RequestEditUserLocalName_FieldNumber_Name = 3,
};

/**
 * Renaming of user's visible name
 **/
GPB_FINAL @interface RequestEditUserLocalName : GPBMessage

@property(nonatomic, readwrite) int32_t uid;

@property(nonatomic, readwrite) int64_t accessHash;

@property(nonatomic, readwrite, copy, null_resettable) NSString *name;

@end

#pragma mark - RequestLoadUserData

typedef GPB_ENUM(RequestLoadUserData_FieldNumber) {
  RequestLoadUserData_FieldNumber_ClaimsArray = 1,
};

GPB_FINAL @interface RequestLoadUserData : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<RequestLoadUserData_Claim*> *claimsArray;
/** The number of items in @c claimsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger claimsArray_Count;

@end

#pragma mark - RequestLoadUserData_Claim

typedef GPB_ENUM(RequestLoadUserData_Claim_FieldNumber) {
  RequestLoadUserData_Claim_FieldNumber_UserPeer = 1,
  RequestLoadUserData_Claim_FieldNumber_P2P = 2,
  RequestLoadUserData_Claim_FieldNumber_GroupMember = 3,
  RequestLoadUserData_Claim_FieldNumber_Contact = 4,
};

typedef GPB_ENUM(RequestLoadUserData_Claim_Kind_OneOfCase) {
  RequestLoadUserData_Claim_Kind_OneOfCase_GPBUnsetOneOfCase = 0,
  RequestLoadUserData_Claim_Kind_OneOfCase_P2P = 2,
  RequestLoadUserData_Claim_Kind_OneOfCase_GroupMember = 3,
  RequestLoadUserData_Claim_Kind_OneOfCase_Contact = 4,
};

GPB_FINAL @interface RequestLoadUserData_Claim : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) Peer *userPeer;
/** Test to see if @c userPeer has been set. */
@property(nonatomic, readwrite) BOOL hasUserPeer;

@property(nonatomic, readonly) RequestLoadUserData_Claim_Kind_OneOfCase kindOneOfCase;

@property(nonatomic, readwrite) BOOL p2P;

@property(nonatomic, readwrite, strong, null_resettable) Peer *groupMember;

@property(nonatomic, readwrite) BOOL contact;

@end

/**
 * Clears whatever value was set for the oneof 'kind'.
 **/
void RequestLoadUserData_Claim_ClearKindOneOfCase(RequestLoadUserData_Claim *message);

#pragma mark - ResponseLoadUserData

typedef GPB_ENUM(ResponseLoadUserData_FieldNumber) {
  ResponseLoadUserData_FieldNumber_UsersArray = 1,
};

GPB_FINAL @interface ResponseLoadUserData : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<User*> *usersArray;
/** The number of items in @c usersArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger usersArray_Count;

@end

#pragma mark - UpdateUser

typedef GPB_ENUM(UpdateUser_FieldNumber) {
  UpdateUser_FieldNumber_Id_p = 1,
  UpdateUser_FieldNumber_Data_p = 2,
};

GPB_FINAL @interface UpdateUser : GPBMessage

@property(nonatomic, readwrite) int32_t id_p;

@property(nonatomic, readwrite, strong, null_resettable) UserData *data_p;
/** Test to see if @c data_p has been set. */
@property(nonatomic, readwrite) BOOL hasData_p;

@end

#pragma mark - UpdateUserAvatarChanged

typedef GPB_ENUM(UpdateUserAvatarChanged_FieldNumber) {
  UpdateUserAvatarChanged_FieldNumber_Uid = 1,
  UpdateUserAvatarChanged_FieldNumber_Avatar = 2,
};

/**
 * Update about avatar changed
 **/
GPB_FINAL @interface UpdateUserAvatarChanged : GPBMessage

@property(nonatomic, readwrite) int32_t uid;

@property(nonatomic, readwrite, strong, null_resettable) Avatar *avatar;
/** Test to see if @c avatar has been set. */
@property(nonatomic, readwrite) BOOL hasAvatar;

@end

#pragma mark - UpdateUserNameChanged

typedef GPB_ENUM(UpdateUserNameChanged_FieldNumber) {
  UpdateUserNameChanged_FieldNumber_Uid = 1,
  UpdateUserNameChanged_FieldNumber_Name = 2,
};

/**
 * Update about name changed
 **/
GPB_FINAL @interface UpdateUserNameChanged : GPBMessage

@property(nonatomic, readwrite) int32_t uid;

@property(nonatomic, readwrite, copy, null_resettable) NSString *name;

@end

#pragma mark - UpdateUserLocalNameChanged

typedef GPB_ENUM(UpdateUserLocalNameChanged_FieldNumber) {
  UpdateUserLocalNameChanged_FieldNumber_Uid = 1,
  UpdateUserLocalNameChanged_FieldNumber_LocalName = 2,
};

/**
 * Update about local name changed
 **/
GPB_FINAL @interface UpdateUserLocalNameChanged : GPBMessage

@property(nonatomic, readwrite) int32_t uid;

@property(nonatomic, readwrite, strong, null_resettable) GPBStringValue *localName;
/** Test to see if @c localName has been set. */
@property(nonatomic, readwrite) BOOL hasLocalName;

@end

#pragma mark - UpdateUserContactsChanged

typedef GPB_ENUM(UpdateUserContactsChanged_FieldNumber) {
  UpdateUserContactsChanged_FieldNumber_Uid = 1,
  UpdateUserContactsChanged_FieldNumber_ContactRecordsArray = 4,
};

/**
 * Update about contact information change
 **/
GPB_FINAL @interface UpdateUserContactsChanged : GPBMessage

@property(nonatomic, readwrite) int32_t uid;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<ContactRecord*> *contactRecordsArray;
/** The number of items in @c contactRecordsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger contactRecordsArray_Count;

@end

#pragma mark - UpdateUserNickChanged

typedef GPB_ENUM(UpdateUserNickChanged_FieldNumber) {
  UpdateUserNickChanged_FieldNumber_Uid = 1,
  UpdateUserNickChanged_FieldNumber_Nickname = 2,
};

/**
 * Update about nick changed
 **/
GPB_FINAL @interface UpdateUserNickChanged : GPBMessage

@property(nonatomic, readwrite) int32_t uid;

@property(nonatomic, readwrite, strong, null_resettable) GPBStringValue *nickname;
/** Test to see if @c nickname has been set. */
@property(nonatomic, readwrite) BOOL hasNickname;

@end

#pragma mark - UpdateUserAboutChanged

typedef GPB_ENUM(UpdateUserAboutChanged_FieldNumber) {
  UpdateUserAboutChanged_FieldNumber_Uid = 1,
  UpdateUserAboutChanged_FieldNumber_About = 2,
};

/**
 * Update about user's about changed
 **/
GPB_FINAL @interface UpdateUserAboutChanged : GPBMessage

@property(nonatomic, readwrite) int32_t uid;

@property(nonatomic, readwrite, strong, null_resettable) GPBStringValue *about;
/** Test to see if @c about has been set. */
@property(nonatomic, readwrite) BOOL hasAbout;

@end

#pragma mark - UpdateUserPreferredLanguagesChanged

typedef GPB_ENUM(UpdateUserPreferredLanguagesChanged_FieldNumber) {
  UpdateUserPreferredLanguagesChanged_FieldNumber_Uid = 1,
  UpdateUserPreferredLanguagesChanged_FieldNumber_PreferredLanguagesArray = 2,
};

/**
 * Update about user's preferred languages
 **/
GPB_FINAL @interface UpdateUserPreferredLanguagesChanged : GPBMessage

@property(nonatomic, readwrite) int32_t uid;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSString*> *preferredLanguagesArray;
/** The number of items in @c preferredLanguagesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger preferredLanguagesArray_Count;

@end

#pragma mark - UpdateUserTimeZoneChanged

typedef GPB_ENUM(UpdateUserTimeZoneChanged_FieldNumber) {
  UpdateUserTimeZoneChanged_FieldNumber_Uid = 1,
  UpdateUserTimeZoneChanged_FieldNumber_TimeZone = 2,
};

/**
 * User TimeZone changed
 **/
GPB_FINAL @interface UpdateUserTimeZoneChanged : GPBMessage

@property(nonatomic, readwrite) int32_t uid;

@property(nonatomic, readwrite, strong, null_resettable) GPBStringValue *timeZone;
/** Test to see if @c timeZone has been set. */
@property(nonatomic, readwrite) BOOL hasTimeZone;

@end

#pragma mark - UpdateUserBotCommandsChanged

typedef GPB_ENUM(UpdateUserBotCommandsChanged_FieldNumber) {
  UpdateUserBotCommandsChanged_FieldNumber_Uid = 1,
  UpdateUserBotCommandsChanged_FieldNumber_CommandsArray = 2,
};

/**
 * Update about bot commands changed
 **/
GPB_FINAL @interface UpdateUserBotCommandsChanged : GPBMessage

@property(nonatomic, readwrite) int32_t uid;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<BotCommand*> *commandsArray;
/** The number of items in @c commandsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger commandsArray_Count;

@end

#pragma mark - UpdateUserSexChanged

typedef GPB_ENUM(UpdateUserSexChanged_FieldNumber) {
  UpdateUserSexChanged_FieldNumber_Uid = 1,
  UpdateUserSexChanged_FieldNumber_Sex = 2,
};

/**
 * Update about user sex changed
 **/
GPB_FINAL @interface UpdateUserSexChanged : GPBMessage

@property(nonatomic, readwrite) int32_t uid;

@property(nonatomic, readwrite) Sex sex;

@end

/**
 * Fetches the raw value of a @c UpdateUserSexChanged's @c sex property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t UpdateUserSexChanged_Sex_RawValue(UpdateUserSexChanged *message);
/**
 * Sets the raw value of an @c UpdateUserSexChanged's @c sex property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetUpdateUserSexChanged_Sex_RawValue(UpdateUserSexChanged *message, int32_t value);

#pragma mark - UpdateUserCustomProfileChanged

typedef GPB_ENUM(UpdateUserCustomProfileChanged_FieldNumber) {
  UpdateUserCustomProfileChanged_FieldNumber_Uid = 1,
  UpdateUserCustomProfileChanged_FieldNumber_CustomProfile = 2,
};

/**
 * Update about user custom profile changed
 **/
GPB_FINAL @interface UpdateUserCustomProfileChanged : GPBMessage

@property(nonatomic, readwrite) int32_t uid;

/** / custom user profile info in JSON format */
@property(nonatomic, readwrite, copy, null_resettable) NSString *customProfile;

@end

#pragma mark - UpdateUserStatusChanged

typedef GPB_ENUM(UpdateUserStatusChanged_FieldNumber) {
  UpdateUserStatusChanged_FieldNumber_Uid = 1,
  UpdateUserStatusChanged_FieldNumber_Status = 2,
};

/**
 * Update about user status change
 **/
GPB_FINAL @interface UpdateUserStatusChanged : GPBMessage

@property(nonatomic, readwrite) int32_t uid;

@property(nonatomic, readwrite, strong, null_resettable) UserStatus *status;
/** Test to see if @c status has been set. */
@property(nonatomic, readwrite) BOOL hasStatus;

@end

#pragma mark - UpdateUserExtChanged

typedef GPB_ENUM(UpdateUserExtChanged_FieldNumber) {
  UpdateUserExtChanged_FieldNumber_Uid = 1,
  UpdateUserExtChanged_FieldNumber_Ext = 2,
};

GPB_FINAL @interface UpdateUserExtChanged : GPBMessage

@property(nonatomic, readwrite) int32_t uid;

@property(nonatomic, readwrite, strong, null_resettable) RecursiveMapValue *ext;
/** Test to see if @c ext has been set. */
@property(nonatomic, readwrite) BOOL hasExt;

@end

#pragma mark - UpdateUserFullExtChanged

typedef GPB_ENUM(UpdateUserFullExtChanged_FieldNumber) {
  UpdateUserFullExtChanged_FieldNumber_Uid = 1,
  UpdateUserFullExtChanged_FieldNumber_Ext = 2,
};

GPB_FINAL @interface UpdateUserFullExtChanged : GPBMessage

@property(nonatomic, readwrite) int32_t uid;

@property(nonatomic, readwrite, strong, null_resettable) RecursiveMapValue *ext;
/** Test to see if @c ext has been set. */
@property(nonatomic, readwrite) BOOL hasExt;

@end

#pragma mark - RequestLoadFullUsers

typedef GPB_ENUM(RequestLoadFullUsers_FieldNumber) {
  RequestLoadFullUsers_FieldNumber_UserPeersArray = 1,
};

/**
 * Loading Full User information
 **/
GPB_FINAL @interface RequestLoadFullUsers : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<UserOutPeer*> *userPeersArray;
/** The number of items in @c userPeersArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger userPeersArray_Count;

@end

#pragma mark - ResponseLoadFullUsers

typedef GPB_ENUM(ResponseLoadFullUsers_FieldNumber) {
  ResponseLoadFullUsers_FieldNumber_FullUsersArray = 1,
};

GPB_FINAL @interface ResponseLoadFullUsers : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<FullUser*> *fullUsersArray;
/** The number of items in @c fullUsersArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger fullUsersArray_Count;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
