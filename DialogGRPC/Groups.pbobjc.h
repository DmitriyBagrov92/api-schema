// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: groups.proto

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
@class FileLocation;
@class GPBBytesValue;
@class GPBInt32Value;
@class GPBInt64Value;
@class GPBStringValue;
@class GPBTimestamp;
@class Group;
@class GroupData;
@class GroupMemberPermission;
@class Member;
@class UserOutPeer;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Enum GroupType

typedef GPB_ENUM(GroupType) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  GroupType_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  GroupType_GroupTypeUnknown = 0,
  GroupType_GroupTypeGroup = 1,
  GroupType_GroupTypeChannel = 2,
  GroupType_GroupTypeThread = 3,
};

GPBEnumDescriptor *GroupType_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL GroupType_IsValidValue(int32_t value);

#pragma mark - Enum GroupAdminPermission

/** / Possible permissions on a group */
typedef GPB_ENUM(GroupAdminPermission) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  GroupAdminPermission_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  GroupAdminPermission_GroupAdminPermissionUnknown = 0,
  GroupAdminPermission_GroupAdminPermissionInvite = 2,
  GroupAdminPermission_GroupAdminPermissionKick = 3,
  GroupAdminPermission_GroupAdminPermissionUpdateinfo = 4,
  GroupAdminPermission_GroupAdminPermissionSetpermissions = 5,
  GroupAdminPermission_GroupAdminPermissionEditmessage = 6,
  GroupAdminPermission_GroupAdminPermissionDeletemessage = 7,
  GroupAdminPermission_GroupAdminPermissionGetintegrationtoken = 8,
  GroupAdminPermission_GroupAdminPermissionSendmessage = 9,
  GroupAdminPermission_GroupAdminPermissionPinmessage = 10,
  GroupAdminPermission_GroupAdminPermissionViewmembers = 11,

  /** / read only permission */
  GroupAdminPermission_GroupAdminPermissionLeave = 12,
  GroupAdminPermission_GroupAdminPermissionTargeting = 13,
  GroupAdminPermission_GroupAdminPermissionDelete = 14,
  GroupAdminPermission_GroupAdminPermissionManageConference = 15,
};

GPBEnumDescriptor *GroupAdminPermission_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL GroupAdminPermission_IsValidValue(int32_t value);

#pragma mark - GroupsRoot

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
GPB_FINAL @interface GroupsRoot : GPBRootObject
@end

#pragma mark - Member

typedef GPB_ENUM(Member_FieldNumber) {
  Member_FieldNumber_UserId = 1,
  Member_FieldNumber_InvitedAt = 2,
  Member_FieldNumber_PermissionsArray = 3,
  Member_FieldNumber_Clock = 4,
  Member_FieldNumber_DeletedAt = 5,
};

/**
 * Member information
 **/
GPB_FINAL @interface Member : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *userId;

@property(nonatomic, readwrite) int64_t invitedAt;

/** List of member permissions */
// |permissionsArray| contains |GroupAdminPermission|
@property(nonatomic, readwrite, strong, null_resettable) GPBEnumArray *permissionsArray;
/** The number of items in @c permissionsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger permissionsArray_Count;

@property(nonatomic, readwrite) int64_t clock;

@property(nonatomic, readwrite, strong, null_resettable) GPBTimestamp *deletedAt;
/** Test to see if @c deletedAt has been set. */
@property(nonatomic, readwrite) BOOL hasDeletedAt;

@end

#pragma mark - Group

typedef GPB_ENUM(Group_FieldNumber) {
  Group_FieldNumber_Id_p = 1,
  Group_FieldNumber_AccessHash = 2,
  Group_FieldNumber_Data_p = 29,
  Group_FieldNumber_SelfMember = 30,
};

/**
 * Group information
 **/
GPB_FINAL @interface Group : GPBMessage

/** / group id */
@property(nonatomic, readwrite, copy, null_resettable) NSString *id_p;

/** / Access hash of group */
@property(nonatomic, readwrite) int64_t accessHash;

@property(nonatomic, readwrite, strong, null_resettable) GroupData *data_p;
/** Test to see if @c data_p has been set. */
@property(nonatomic, readwrite) BOOL hasData_p;

@property(nonatomic, readwrite, strong, null_resettable) Member *selfMember;
/** Test to see if @c selfMember has been set. */
@property(nonatomic, readwrite) BOOL hasSelfMember;

@end

#pragma mark - GroupData

typedef GPB_ENUM(GroupData_FieldNumber) {
  GroupData_FieldNumber_Title = 2,
  GroupData_FieldNumber_Avatar = 3,
  GroupData_FieldNumber_MembersAmount = 4,
  GroupData_FieldNumber_GroupType = 5,
  GroupData_FieldNumber_OwnerUserId = 6,
  GroupData_FieldNumber_CreatedAt = 7,
  GroupData_FieldNumber_About = 8,
  GroupData_FieldNumber_BasePermissionsArray = 10,
  GroupData_FieldNumber_Clock = 11,
  GroupData_FieldNumber_PinnedAt = 12,
  GroupData_FieldNumber_ConferenceLink = 13,
  GroupData_FieldNumber_MembersCountLimit = 14,
  GroupData_FieldNumber_DeletedAt = 15,
  GroupData_FieldNumber_IsPublic = 16,
};

GPB_FINAL @interface GroupData : GPBMessage

/** / Title of group */
@property(nonatomic, readwrite, copy, null_resettable) NSString *title;

/** / Avatar of group */
@property(nonatomic, readwrite, strong, null_resettable) Avatar *avatar;
/** Test to see if @c avatar has been set. */
@property(nonatomic, readwrite) BOOL hasAvatar;

/** / Number of members */
@property(nonatomic, readwrite) int32_t membersAmount;

/** / Group Type. Used only for displaying information. Default is GROUP. */
@property(nonatomic, readwrite) GroupType groupType;

/** / Group creator */
@property(nonatomic, readwrite, copy, null_resettable) NSString *ownerUserId;

/** / Date of creation */
@property(nonatomic, readwrite, strong, null_resettable) GPBTimestamp *createdAt;
/** Test to see if @c createdAt has been set. */
@property(nonatomic, readwrite) BOOL hasCreatedAt;

/** / About of group */
@property(nonatomic, readwrite, strong, null_resettable) GPBStringValue *about;
/** Test to see if @c about has been set. */
@property(nonatomic, readwrite) BOOL hasAbout;

// |basePermissionsArray| contains |GroupAdminPermission|
@property(nonatomic, readwrite, strong, null_resettable) GPBEnumArray *basePermissionsArray;
/** The number of items in @c basePermissionsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger basePermissionsArray_Count;

@property(nonatomic, readwrite) int64_t clock;

@property(nonatomic, readwrite, strong, null_resettable) GPBInt64Value *pinnedAt;
/** Test to see if @c pinnedAt has been set. */
@property(nonatomic, readwrite) BOOL hasPinnedAt;

@property(nonatomic, readwrite, strong, null_resettable) GPBStringValue *conferenceLink;
/** Test to see if @c conferenceLink has been set. */
@property(nonatomic, readwrite) BOOL hasConferenceLink;

@property(nonatomic, readwrite, strong, null_resettable) GPBInt32Value *membersCountLimit;
/** Test to see if @c membersCountLimit has been set. */
@property(nonatomic, readwrite) BOOL hasMembersCountLimit;

@property(nonatomic, readwrite, strong, null_resettable) GPBInt64Value *deletedAt;
/** Test to see if @c deletedAt has been set. */
@property(nonatomic, readwrite) BOOL hasDeletedAt;

@property(nonatomic, readwrite) BOOL isPublic;

@end

/**
 * Fetches the raw value of a @c GroupData's @c groupType property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t GroupData_GroupType_RawValue(GroupData *message);
/**
 * Sets the raw value of an @c GroupData's @c groupType property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetGroupData_GroupType_RawValue(GroupData *message, int32_t value);

#pragma mark - GroupPartialInfo

typedef GPB_ENUM(GroupPartialInfo_FieldNumber) {
  GroupPartialInfo_FieldNumber_GroupId = 1,
  GroupPartialInfo_FieldNumber_AccessHash = 2,
  GroupPartialInfo_FieldNumber_Clock = 3,
  GroupPartialInfo_FieldNumber_Type = 4,
  GroupPartialInfo_FieldNumber_Title = 5,
  GroupPartialInfo_FieldNumber_Avatar = 7,
  GroupPartialInfo_FieldNumber_SelfMember = 8,
  GroupPartialInfo_FieldNumber_PinnedAt = 9,
  GroupPartialInfo_FieldNumber_IsPublic = 10,
};

GPB_FINAL @interface GroupPartialInfo : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *groupId;

@property(nonatomic, readwrite) int64_t accessHash;

@property(nonatomic, readwrite) int64_t clock;

@property(nonatomic, readwrite) GroupType type;

@property(nonatomic, readwrite, copy, null_resettable) NSString *title;

@property(nonatomic, readwrite, strong, null_resettable) Avatar *avatar;
/** Test to see if @c avatar has been set. */
@property(nonatomic, readwrite) BOOL hasAvatar;

@property(nonatomic, readwrite, strong, null_resettable) Member *selfMember;
/** Test to see if @c selfMember has been set. */
@property(nonatomic, readwrite) BOOL hasSelfMember;

@property(nonatomic, readwrite, strong, null_resettable) GPBInt64Value *pinnedAt;
/** Test to see if @c pinnedAt has been set. */
@property(nonatomic, readwrite) BOOL hasPinnedAt;

@property(nonatomic, readwrite) BOOL isPublic;

@end

/**
 * Fetches the raw value of a @c GroupPartialInfo's @c type property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t GroupPartialInfo_Type_RawValue(GroupPartialInfo *message);
/**
 * Sets the raw value of an @c GroupPartialInfo's @c type property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetGroupPartialInfo_Type_RawValue(GroupPartialInfo *message, int32_t value);

#pragma mark - UpdateGroup

typedef GPB_ENUM(UpdateGroup_FieldNumber) {
  UpdateGroup_FieldNumber_GroupId = 1,
  UpdateGroup_FieldNumber_Data_p = 2,
};

/**
 * Update about group data changed
 **/
GPB_FINAL @interface UpdateGroup : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *groupId;

@property(nonatomic, readwrite, strong, null_resettable) GroupData *data_p;
/** Test to see if @c data_p has been set. */
@property(nonatomic, readwrite) BOOL hasData_p;

@end

#pragma mark - RequestLoadMembers

typedef GPB_ENUM(RequestLoadMembers_FieldNumber) {
  RequestLoadMembers_FieldNumber_Limit = 2,
  RequestLoadMembers_FieldNumber_Next = 3,
  RequestLoadMembers_FieldNumber_GroupId = 4,
};

/**
 * Loading group members
 **/
GPB_FINAL @interface RequestLoadMembers : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *groupId;

@property(nonatomic, readwrite) int32_t limit;

/** / cursor */
@property(nonatomic, readwrite, strong, null_resettable) GPBBytesValue *next;
/** Test to see if @c next has been set. */
@property(nonatomic, readwrite) BOOL hasNext;

@end

#pragma mark - ResponseLoadMembers

typedef GPB_ENUM(ResponseLoadMembers_FieldNumber) {
  ResponseLoadMembers_FieldNumber_Cursor = 1,
  ResponseLoadMembers_FieldNumber_MembersArray = 2,
};

GPB_FINAL @interface ResponseLoadMembers : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) GPBBytesValue *cursor;
/** Test to see if @c cursor has been set. */
@property(nonatomic, readwrite) BOOL hasCursor;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Member*> *membersArray;
/** The number of items in @c membersArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger membersArray_Count;

@end

#pragma mark - UpdateGroupTitleChanged

typedef GPB_ENUM(UpdateGroupTitleChanged_FieldNumber) {
  UpdateGroupTitleChanged_FieldNumber_GroupId = 1,
  UpdateGroupTitleChanged_FieldNumber_Title = 2,
};

/**
 * Update about title changed
 **/
GPB_FINAL @interface UpdateGroupTitleChanged : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *groupId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *title;

@end

#pragma mark - UpdateGroupAvatarChanged

typedef GPB_ENUM(UpdateGroupAvatarChanged_FieldNumber) {
  UpdateGroupAvatarChanged_FieldNumber_GroupId = 1,
  UpdateGroupAvatarChanged_FieldNumber_Avatar = 2,
};

/**
 * Update about avatar changed
 **/
GPB_FINAL @interface UpdateGroupAvatarChanged : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *groupId;

@property(nonatomic, readwrite, strong, null_resettable) Avatar *avatar;
/** Test to see if @c avatar has been set. */
@property(nonatomic, readwrite) BOOL hasAvatar;

@end

#pragma mark - UpdateGroupAboutChanged

typedef GPB_ENUM(UpdateGroupAboutChanged_FieldNumber) {
  UpdateGroupAboutChanged_FieldNumber_GroupId = 1,
  UpdateGroupAboutChanged_FieldNumber_About = 2,
};

/**
 * Update about about changed
 **/
GPB_FINAL @interface UpdateGroupAboutChanged : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *groupId;

@property(nonatomic, readwrite, strong, null_resettable) GPBStringValue *about;
/** Test to see if @c about has been set. */
@property(nonatomic, readwrite) BOOL hasAbout;

@end

#pragma mark - UpdateGroupOwnerChanged

typedef GPB_ENUM(UpdateGroupOwnerChanged_FieldNumber) {
  UpdateGroupOwnerChanged_FieldNumber_GroupId = 1,
  UpdateGroupOwnerChanged_FieldNumber_UserId = 2,
};

/**
 * Update about owner changed
 **/
GPB_FINAL @interface UpdateGroupOwnerChanged : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *groupId;

/** / new owner */
@property(nonatomic, readwrite, copy, null_resettable) NSString *userId;

@end

#pragma mark - UpdateGroupBasePermissionsChanged

typedef GPB_ENUM(UpdateGroupBasePermissionsChanged_FieldNumber) {
  UpdateGroupBasePermissionsChanged_FieldNumber_GroupId = 1,
  UpdateGroupBasePermissionsChanged_FieldNumber_BasePermissionsArray = 2,
};

/**
 * Update about base group permissions changed
 **/
GPB_FINAL @interface UpdateGroupBasePermissionsChanged : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *groupId;

/** / new base permissions */
// |basePermissionsArray| contains |GroupAdminPermission|
@property(nonatomic, readwrite, strong, null_resettable) GPBEnumArray *basePermissionsArray;
/** The number of items in @c basePermissionsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger basePermissionsArray_Count;

@end

#pragma mark - UpdateGroupMembersUpdated

typedef GPB_ENUM(UpdateGroupMembersUpdated_FieldNumber) {
  UpdateGroupMembersUpdated_FieldNumber_GroupId = 1,
  UpdateGroupMembersUpdated_FieldNumber_MembersArray = 2,
};

/**
 * Update about members updated
 **/
GPB_FINAL @interface UpdateGroupMembersUpdated : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *groupId;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Member*> *membersArray;
/** The number of items in @c membersArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger membersArray_Count;

@end

#pragma mark - UpdateGroupMemberDiff

typedef GPB_ENUM(UpdateGroupMemberDiff_FieldNumber) {
  UpdateGroupMemberDiff_FieldNumber_GroupId = 1,
  UpdateGroupMemberDiff_FieldNumber_RemovedUsersArray = 2,
  UpdateGroupMemberDiff_FieldNumber_AddedMembersArray = 3,
  UpdateGroupMemberDiff_FieldNumber_MembersCount = 4,
};

/**
 * Update about members changed
 **/
GPB_FINAL @interface UpdateGroupMemberDiff : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *groupId;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSString*> *removedUsersArray;
/** The number of items in @c removedUsersArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger removedUsersArray_Count;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Member*> *addedMembersArray;
/** The number of items in @c addedMembersArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger addedMembersArray_Count;

@property(nonatomic, readwrite) int32_t membersCount;

@end

#pragma mark - UpdateGroupMembersCountChanged

typedef GPB_ENUM(UpdateGroupMembersCountChanged_FieldNumber) {
  UpdateGroupMembersCountChanged_FieldNumber_GroupId = 1,
  UpdateGroupMembersCountChanged_FieldNumber_MembersCount = 2,
};

/**
 * Update about members count changed
 **/
GPB_FINAL @interface UpdateGroupMembersCountChanged : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *groupId;

@property(nonatomic, readwrite) int32_t membersCount;

@end

#pragma mark - RequestCreateGroup

typedef GPB_ENUM(RequestCreateGroup_FieldNumber) {
  RequestCreateGroup_FieldNumber_Rid = 1,
  RequestCreateGroup_FieldNumber_Title = 3,
  RequestCreateGroup_FieldNumber_UsersArray = 4,
  RequestCreateGroup_FieldNumber_GroupType = 5,
  RequestCreateGroup_FieldNumber_BasePermissionsArray = 7,
  RequestCreateGroup_FieldNumber_IsPublic = 8,
};

/**
 * Creating group chat
 **/
GPB_FINAL @interface RequestCreateGroup : GPBMessage

/** / Id for query deduplication */
@property(nonatomic, readwrite) int64_t rid;

@property(nonatomic, readwrite, copy, null_resettable) NSString *title;

/** / members */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<UserOutPeer*> *usersArray;
/** The number of items in @c usersArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger usersArray_Count;

/** / group or channel */
@property(nonatomic, readwrite) GroupType groupType;

/** / Base permissions for invited members */
// |basePermissionsArray| contains |GroupAdminPermission|
@property(nonatomic, readwrite, strong, null_resettable) GPBEnumArray *basePermissionsArray;
/** The number of items in @c basePermissionsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger basePermissionsArray_Count;

@property(nonatomic, readwrite) BOOL isPublic;

@end

/**
 * Fetches the raw value of a @c RequestCreateGroup's @c groupType property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t RequestCreateGroup_GroupType_RawValue(RequestCreateGroup *message);
/**
 * Sets the raw value of an @c RequestCreateGroup's @c groupType property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetRequestCreateGroup_GroupType_RawValue(RequestCreateGroup *message, int32_t value);

#pragma mark - ResponseCreateGroup

typedef GPB_ENUM(ResponseCreateGroup_FieldNumber) {
  ResponseCreateGroup_FieldNumber_Group = 1,
  ResponseCreateGroup_FieldNumber_UserPeersArray = 2,
};

GPB_FINAL @interface ResponseCreateGroup : GPBMessage

/** / created group */
@property(nonatomic, readwrite, strong, null_resettable) Group *group;
/** Test to see if @c group has been set. */
@property(nonatomic, readwrite) BOOL hasGroup;

/** / empty if dropped by optimizations */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<UserOutPeer*> *userPeersArray;
/** The number of items in @c userPeersArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger userPeersArray_Count;

@end

#pragma mark - RequestEditGroupTitle

typedef GPB_ENUM(RequestEditGroupTitle_FieldNumber) {
  RequestEditGroupTitle_FieldNumber_Rid = 2,
  RequestEditGroupTitle_FieldNumber_Title = 3,
  RequestEditGroupTitle_FieldNumber_GroupId = 4,
};

/**
 * Changing group title
 **/
GPB_FINAL @interface RequestEditGroupTitle : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *groupId;

/** / Id for query deduplication */
@property(nonatomic, readwrite) int64_t rid;

@property(nonatomic, readwrite, copy, null_resettable) NSString *title;

@end

#pragma mark - RequestEditGroupAvatar

typedef GPB_ENUM(RequestEditGroupAvatar_FieldNumber) {
  RequestEditGroupAvatar_FieldNumber_Rid = 2,
  RequestEditGroupAvatar_FieldNumber_FileLocation = 3,
  RequestEditGroupAvatar_FieldNumber_GroupId = 4,
};

/**
 * Changing group avatar
 **/
GPB_FINAL @interface RequestEditGroupAvatar : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *groupId;

/** / Id for query deduplication */
@property(nonatomic, readwrite) int64_t rid;

@property(nonatomic, readwrite, strong, null_resettable) FileLocation *fileLocation;
/** Test to see if @c fileLocation has been set. */
@property(nonatomic, readwrite) BOOL hasFileLocation;

@end

#pragma mark - RequestRemoveGroupAvatar

typedef GPB_ENUM(RequestRemoveGroupAvatar_FieldNumber) {
  RequestRemoveGroupAvatar_FieldNumber_Rid = 2,
  RequestRemoveGroupAvatar_FieldNumber_GroupId = 3,
};

/**
 * Removing group avatar
 **/
GPB_FINAL @interface RequestRemoveGroupAvatar : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *groupId;

/** / Id for query deduplication */
@property(nonatomic, readwrite) int64_t rid;

@end

#pragma mark - RequestEditGroupAbout

typedef GPB_ENUM(RequestEditGroupAbout_FieldNumber) {
  RequestEditGroupAbout_FieldNumber_Rid = 2,
  RequestEditGroupAbout_FieldNumber_About = 3,
  RequestEditGroupAbout_FieldNumber_GroupId = 4,
};

/**
 * Edit Group About
 **/
GPB_FINAL @interface RequestEditGroupAbout : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *groupId;

/** / Id for query deduplication */
@property(nonatomic, readwrite) int64_t rid;

@property(nonatomic, readwrite, strong, null_resettable) GPBStringValue *about;
/** Test to see if @c about has been set. */
@property(nonatomic, readwrite) BOOL hasAbout;

@end

#pragma mark - RequestEditGroupBasePermissions

typedef GPB_ENUM(RequestEditGroupBasePermissions_FieldNumber) {
  RequestEditGroupBasePermissions_FieldNumber_RandomId = 2,
  RequestEditGroupBasePermissions_FieldNumber_GrantedPermissionsArray = 3,
  RequestEditGroupBasePermissions_FieldNumber_RevokedPermissionsArray = 4,
  RequestEditGroupBasePermissions_FieldNumber_GroupId = 5,
};

GPB_FINAL @interface RequestEditGroupBasePermissions : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *groupId;

/** / Id for query deduplication */
@property(nonatomic, readwrite, copy, null_resettable) NSString *randomId;

// |grantedPermissionsArray| contains |GroupAdminPermission|
@property(nonatomic, readwrite, strong, null_resettable) GPBEnumArray *grantedPermissionsArray;
/** The number of items in @c grantedPermissionsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger grantedPermissionsArray_Count;

// |revokedPermissionsArray| contains |GroupAdminPermission|
@property(nonatomic, readwrite, strong, null_resettable) GPBEnumArray *revokedPermissionsArray;
/** The number of items in @c revokedPermissionsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger revokedPermissionsArray_Count;

@end

#pragma mark - RequestEditMemberPermissions

typedef GPB_ENUM(RequestEditMemberPermissions_FieldNumber) {
  RequestEditMemberPermissions_FieldNumber_GrantedPermissionsArray = 3,
  RequestEditMemberPermissions_FieldNumber_RevokedPermissionsArray = 4,
  RequestEditMemberPermissions_FieldNumber_GroupId = 5,
  RequestEditMemberPermissions_FieldNumber_UserId = 6,
};

GPB_FINAL @interface RequestEditMemberPermissions : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *groupId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *userId;

// |grantedPermissionsArray| contains |GroupAdminPermission|
@property(nonatomic, readwrite, strong, null_resettable) GPBEnumArray *grantedPermissionsArray;
/** The number of items in @c grantedPermissionsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger grantedPermissionsArray_Count;

// |revokedPermissionsArray| contains |GroupAdminPermission|
@property(nonatomic, readwrite, strong, null_resettable) GPBEnumArray *revokedPermissionsArray;
/** The number of items in @c revokedPermissionsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger revokedPermissionsArray_Count;

@end

#pragma mark - ResponseMember

typedef GPB_ENUM(ResponseMember_FieldNumber) {
  ResponseMember_FieldNumber_Member = 1,
};

GPB_FINAL @interface ResponseMember : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) Member *member;
/** Test to see if @c member has been set. */
@property(nonatomic, readwrite) BOOL hasMember;

@end

#pragma mark - RequestInviteUser

typedef GPB_ENUM(RequestInviteUser_FieldNumber) {
  RequestInviteUser_FieldNumber_Rid = 2,
  RequestInviteUser_FieldNumber_User = 3,
  RequestInviteUser_FieldNumber_GroupId = 4,
};

/**
 * Inviting user to group
 **/
GPB_FINAL @interface RequestInviteUser : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *groupId;

/** / Id for query deduplication */
@property(nonatomic, readwrite) int64_t rid;

@property(nonatomic, readwrite, strong, null_resettable) UserOutPeer *user;
/** Test to see if @c user has been set. */
@property(nonatomic, readwrite) BOOL hasUser;

@end

#pragma mark - RequestLeaveGroup

typedef GPB_ENUM(RequestLeaveGroup_FieldNumber) {
  RequestLeaveGroup_FieldNumber_Rid = 2,
  RequestLeaveGroup_FieldNumber_GroupId = 3,
};

/**
 * Leaving group
 **/
GPB_FINAL @interface RequestLeaveGroup : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *groupId;

/** / Id for query deduplication */
@property(nonatomic, readwrite) int64_t rid;

@end

#pragma mark - RequestKickUser

typedef GPB_ENUM(RequestKickUser_FieldNumber) {
  RequestKickUser_FieldNumber_Rid = 2,
  RequestKickUser_FieldNumber_GroupId = 4,
  RequestKickUser_FieldNumber_UserId = 5,
};

/**
 * Kicking user from group
 **/
GPB_FINAL @interface RequestKickUser : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *groupId;

/** / Id for query deduplication */
@property(nonatomic, readwrite) int64_t rid;

@property(nonatomic, readwrite, copy, null_resettable) NSString *userId;

@end

#pragma mark - RequestMakeUserAdmin

typedef GPB_ENUM(RequestMakeUserAdmin_FieldNumber) {
  RequestMakeUserAdmin_FieldNumber_PermissionsArray = 3,
  RequestMakeUserAdmin_FieldNumber_GroupId = 4,
  RequestMakeUserAdmin_FieldNumber_UserId = 5,
};

/**
 * Make user admin
 **/
GPB_FINAL @interface RequestMakeUserAdmin : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *groupId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *userId;

// |permissionsArray| contains |GroupAdminPermission|
@property(nonatomic, readwrite, strong, null_resettable) GPBEnumArray *permissionsArray;
/** The number of items in @c permissionsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger permissionsArray_Count;

@end

#pragma mark - GroupMemberPermission

typedef GPB_ENUM(GroupMemberPermission_FieldNumber) {
  GroupMemberPermission_FieldNumber_UserId = 1,
  GroupMemberPermission_FieldNumber_PermissionsArray = 2,
};

/**
 * A struct mapping a group member to their permissions
 * userId the id of the group member
 * permissions a list of permissions that user has
 **/
GPB_FINAL @interface GroupMemberPermission : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *userId;

// |permissionsArray| contains |GroupAdminPermission|
@property(nonatomic, readwrite, strong, null_resettable) GPBEnumArray *permissionsArray;
/** The number of items in @c permissionsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger permissionsArray_Count;

@end

#pragma mark - RequestGetGroupMemberPermissions

typedef GPB_ENUM(RequestGetGroupMemberPermissions_FieldNumber) {
  RequestGetGroupMemberPermissions_FieldNumber_GroupId = 1,
  RequestGetGroupMemberPermissions_FieldNumber_UserIdsArray = 2,
};

/**
 * Fetches the group administration permissions for each of the users from the list
 **/
GPB_FINAL @interface RequestGetGroupMemberPermissions : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *groupId;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSString*> *userIdsArray;
/** The number of items in @c userIdsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger userIdsArray_Count;

@end

#pragma mark - ResponseGetGroupMemberPermissions

typedef GPB_ENUM(ResponseGetGroupMemberPermissions_FieldNumber) {
  ResponseGetGroupMemberPermissions_FieldNumber_PermissionsArray = 1,
};

GPB_FINAL @interface ResponseGetGroupMemberPermissions : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<GroupMemberPermission*> *permissionsArray;
/** The number of items in @c permissionsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger permissionsArray_Count;

@end

#pragma mark - UpdateGroupMemberPermissionsChanged

typedef GPB_ENUM(UpdateGroupMemberPermissionsChanged_FieldNumber) {
  UpdateGroupMemberPermissionsChanged_FieldNumber_GroupId = 1,
  UpdateGroupMemberPermissionsChanged_FieldNumber_UserId = 2,
  UpdateGroupMemberPermissionsChanged_FieldNumber_PermissionsArray = 3,
};

/**
 * Update about the user's permissions
 **/
GPB_FINAL @interface UpdateGroupMemberPermissionsChanged : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *groupId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *userId;

// |permissionsArray| contains |GroupAdminPermission|
@property(nonatomic, readwrite, strong, null_resettable) GPBEnumArray *permissionsArray;
/** The number of items in @c permissionsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger permissionsArray_Count;

@end

#pragma mark - RequestTransferOwnership

typedef GPB_ENUM(RequestTransferOwnership_FieldNumber) {
  RequestTransferOwnership_FieldNumber_NewOwner = 2,
  RequestTransferOwnership_FieldNumber_GroupId = 3,
};

/**
 * Transfer ownership of group
 **/
GPB_FINAL @interface RequestTransferOwnership : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *groupId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *newOwner NS_RETURNS_NOT_RETAINED;

@end

#pragma mark - ResponseInviteUrl

typedef GPB_ENUM(ResponseInviteUrl_FieldNumber) {
  ResponseInviteUrl_FieldNumber_URL = 1,
};

/**
 * Response for invite url methods
 **/
GPB_FINAL @interface ResponseInviteUrl : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *URL;

@end

#pragma mark - RequestGetGroupInviteUrl

typedef GPB_ENUM(RequestGetGroupInviteUrl_FieldNumber) {
  RequestGetGroupInviteUrl_FieldNumber_GroupId = 2,
};

/**
 * Building invite url
 **/
GPB_FINAL @interface RequestGetGroupInviteUrl : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *groupId;

@end

#pragma mark - RequestGetGroupInviteUrlBase

/**
 * Get group invite url base
 **/
GPB_FINAL @interface RequestGetGroupInviteUrlBase : GPBMessage

@end

#pragma mark - ResponseGetGroupInviteUrlBase

typedef GPB_ENUM(ResponseGetGroupInviteUrlBase_FieldNumber) {
  ResponseGetGroupInviteUrlBase_FieldNumber_URL = 1,
};

GPB_FINAL @interface ResponseGetGroupInviteUrlBase : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *URL;

@end

#pragma mark - RequestRevokeInviteUrl

typedef GPB_ENUM(RequestRevokeInviteUrl_FieldNumber) {
  RequestRevokeInviteUrl_FieldNumber_GroupId = 2,
};

/**
 * Revoking invite urls
 **/
GPB_FINAL @interface RequestRevokeInviteUrl : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *groupId;

@end

#pragma mark - RequestJoinGroup

typedef GPB_ENUM(RequestJoinGroup_FieldNumber) {
  RequestJoinGroup_FieldNumber_Token = 1,
};

/**
 * Join group method
 **/
GPB_FINAL @interface RequestJoinGroup : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *token;

@end

#pragma mark - ResponseJoinGroup

typedef GPB_ENUM(ResponseJoinGroup_FieldNumber) {
  ResponseJoinGroup_FieldNumber_Group = 1,
  ResponseJoinGroup_FieldNumber_UserPeersArray = 2,
};

GPB_FINAL @interface ResponseJoinGroup : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) Group *group;
/** Test to see if @c group has been set. */
@property(nonatomic, readwrite) BOOL hasGroup;

/** / empty if dropped by optimizations */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<UserOutPeer*> *userPeersArray;
/** The number of items in @c userPeersArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger userPeersArray_Count;

@end

#pragma mark - RequestJoinGroupByPeer

typedef GPB_ENUM(RequestJoinGroupByPeer_FieldNumber) {
  RequestJoinGroupByPeer_FieldNumber_GroupId = 2,
};

/**
 * Join group by peer
 **/
GPB_FINAL @interface RequestJoinGroupByPeer : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *groupId;

@end

#pragma mark - RequestDeleteGroup

typedef GPB_ENUM(RequestDeleteGroup_FieldNumber) {
  RequestDeleteGroup_FieldNumber_GroupId = 1,
};

GPB_FINAL @interface RequestDeleteGroup : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *groupId;

@end

#pragma mark - RequestGetGroupPartialInfo

typedef GPB_ENUM(RequestGetGroupPartialInfo_FieldNumber) {
  RequestGetGroupPartialInfo_FieldNumber_Token = 1,
};

/**
 * get group info by invite token
 **/
GPB_FINAL @interface RequestGetGroupPartialInfo : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *token;

@end

#pragma mark - RequestChangeGroupPublicity

typedef GPB_ENUM(RequestChangeGroupPublicity_FieldNumber) {
  RequestChangeGroupPublicity_FieldNumber_GroupId = 1,
  RequestChangeGroupPublicity_FieldNumber_IsPublic = 2,
};

GPB_FINAL @interface RequestChangeGroupPublicity : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *groupId;

@property(nonatomic, readwrite) BOOL isPublic;

@end

#pragma mark - UpdateGroupMemberInvited

typedef GPB_ENUM(UpdateGroupMemberInvited_FieldNumber) {
  UpdateGroupMemberInvited_FieldNumber_GroupId = 1,
  UpdateGroupMemberInvited_FieldNumber_Member = 2,
};

/**
 * *
 * Update notifies that some user got invited to the group
 **/
GPB_FINAL @interface UpdateGroupMemberInvited : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *groupId;

@property(nonatomic, readwrite, strong, null_resettable) Member *member;
/** Test to see if @c member has been set. */
@property(nonatomic, readwrite) BOOL hasMember;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
