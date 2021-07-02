// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: privacy.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers_RuntimeSupport.h>
#else
 #import "GPBProtocolBuffers_RuntimeSupport.h"
#endif

#import "Privacy.pbobjc.h"
#import "Annotations.pbobjc.h"
#import "Empty.pbobjc.h"
#import "Definitions.pbobjc.h"
#import "Peers.pbobjc.h"
#import "Scalapb.pbobjc.h"
// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#pragma mark - Objective C Class declarations
// Forward declarations of Objective C classes that we can use as
// static values in struct initializers.
// We don't use [Foo class] because it is not a static value.
GPBObjCClassDeclaration(UserOutPeer);

#pragma mark - PrivacyRoot

@implementation PrivacyRoot

+ (GPBExtensionRegistry*)extensionRegistry {
  // This is called by +initialize so there is no need to worry
  // about thread safety and initialization of registry.
  static GPBExtensionRegistry* registry = nil;
  if (!registry) {
    GPB_DEBUG_CHECK_RUNTIME_VERSIONS();
    registry = [[GPBExtensionRegistry alloc] init];
    // Merge in the imports (direct or indirect) that defined extensions.
    [registry addExtensions:[GAPIAnnotationsRoot extensionRegistry]];
    [registry addExtensions:[DefinitionsRoot extensionRegistry]];
    [registry addExtensions:[ScalapbRoot extensionRegistry]];
  }
  return registry;
}

@end

#pragma mark - PrivacyRoot_FileDescriptor

static GPBFileDescriptor *PrivacyRoot_FileDescriptor(void) {
  // This is called by +initialize so there is no need to worry
  // about thread safety of the singleton.
  static GPBFileDescriptor *descriptor = NULL;
  if (!descriptor) {
    GPB_DEBUG_CHECK_RUNTIME_VERSIONS();
    descriptor = [[GPBFileDescriptor alloc] initWithPackage:@"dialog"
                                                     syntax:GPBFileSyntaxProto3];
  }
  return descriptor;
}

#pragma mark - RequestBlockUser

@implementation RequestBlockUser

@dynamic hasPeer, peer;

typedef struct RequestBlockUser__storage_ {
  uint32_t _has_storage_[1];
  UserOutPeer *peer;
} RequestBlockUser__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "peer",
        .dataTypeSpecific.clazz = GPBObjCClass(UserOutPeer),
        .number = RequestBlockUser_FieldNumber_Peer,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(RequestBlockUser__storage_, peer),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[RequestBlockUser class]
                                     rootClass:[PrivacyRoot class]
                                          file:PrivacyRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(RequestBlockUser__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - RequestUnblockUser

@implementation RequestUnblockUser

@dynamic hasPeer, peer;

typedef struct RequestUnblockUser__storage_ {
  uint32_t _has_storage_[1];
  UserOutPeer *peer;
} RequestUnblockUser__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "peer",
        .dataTypeSpecific.clazz = GPBObjCClass(UserOutPeer),
        .number = RequestUnblockUser_FieldNumber_Peer,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(RequestUnblockUser__storage_, peer),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[RequestUnblockUser class]
                                     rootClass:[PrivacyRoot class]
                                          file:PrivacyRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(RequestUnblockUser__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - RequestLoadBlockedUsers

@implementation RequestLoadBlockedUsers


typedef struct RequestLoadBlockedUsers__storage_ {
  uint32_t _has_storage_[1];
} RequestLoadBlockedUsers__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[RequestLoadBlockedUsers class]
                                     rootClass:[PrivacyRoot class]
                                          file:PrivacyRoot_FileDescriptor()
                                        fields:NULL
                                    fieldCount:0
                                   storageSize:sizeof(RequestLoadBlockedUsers__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - ResponseLoadBlockedUsers

@implementation ResponseLoadBlockedUsers

@dynamic userPeersArray, userPeersArray_Count;

typedef struct ResponseLoadBlockedUsers__storage_ {
  uint32_t _has_storage_[1];
  NSMutableArray *userPeersArray;
} ResponseLoadBlockedUsers__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "userPeersArray",
        .dataTypeSpecific.clazz = GPBObjCClass(UserOutPeer),
        .number = ResponseLoadBlockedUsers_FieldNumber_UserPeersArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(ResponseLoadBlockedUsers__storage_, userPeersArray),
        .flags = GPBFieldRepeated,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[ResponseLoadBlockedUsers class]
                                     rootClass:[PrivacyRoot class]
                                          file:PrivacyRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(ResponseLoadBlockedUsers__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - UpdateUserBlocked

@implementation UpdateUserBlocked

@dynamic userId;

typedef struct UpdateUserBlocked__storage_ {
  uint32_t _has_storage_[1];
  NSString *userId;
} UpdateUserBlocked__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "userId",
        .dataTypeSpecific.clazz = Nil,
        .number = UpdateUserBlocked_FieldNumber_UserId,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(UpdateUserBlocked__storage_, userId),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeString,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[UpdateUserBlocked class]
                                     rootClass:[PrivacyRoot class]
                                          file:PrivacyRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(UpdateUserBlocked__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - UpdateUserUnblocked

@implementation UpdateUserUnblocked

@dynamic userId;

typedef struct UpdateUserUnblocked__storage_ {
  uint32_t _has_storage_[1];
  NSString *userId;
} UpdateUserUnblocked__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "userId",
        .dataTypeSpecific.clazz = Nil,
        .number = UpdateUserUnblocked_FieldNumber_UserId,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(UpdateUserUnblocked__storage_, userId),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeString,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[UpdateUserUnblocked class]
                                     rootClass:[PrivacyRoot class]
                                          file:PrivacyRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(UpdateUserUnblocked__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end


#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
