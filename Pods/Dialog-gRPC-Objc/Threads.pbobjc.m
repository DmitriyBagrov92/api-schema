// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: threads.proto

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

#import "Threads.pbobjc.h"
#import "Wrappers.pbobjc.h"
#import "Empty.pbobjc.h"
#import "Annotations.pbobjc.h"
#import "Scalapb.pbobjc.h"
#import "Definitions.pbobjc.h"
#import "Peers.pbobjc.h"
// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#pragma mark - Objective C Class declarations
// Forward declarations of Objective C classes that we can use as
// static values in struct initializers.
// We don't use [Foo class] because it is not a static value.
GPBObjCClassDeclaration(GPBBoolValue);
GPBObjCClassDeclaration(Peer);
GPBObjCClassDeclaration(PeerThread);
GPBObjCClassDeclaration(ThreadInfo);
GPBObjCClassDeclaration(UUIDValue);

#pragma mark - ThreadsRoot

@implementation ThreadsRoot

+ (GPBExtensionRegistry*)extensionRegistry {
  // This is called by +initialize so there is no need to worry
  // about thread safety and initialization of registry.
  static GPBExtensionRegistry* registry = nil;
  if (!registry) {
    GPB_DEBUG_CHECK_RUNTIME_VERSIONS();
    registry = [[GPBExtensionRegistry alloc] init];
    // Merge in the imports (direct or indirect) that defined extensions.
    [registry addExtensions:[GAPIAnnotationsRoot extensionRegistry]];
    [registry addExtensions:[ScalapbRoot extensionRegistry]];
    [registry addExtensions:[DefinitionsRoot extensionRegistry]];
  }
  return registry;
}

@end

#pragma mark - ThreadsRoot_FileDescriptor

static GPBFileDescriptor *ThreadsRoot_FileDescriptor(void) {
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

#pragma mark - ThreadInfo

@implementation ThreadInfo

@dynamic messagesCount;
@dynamic latestActiveUserIdsArray, latestActiveUserIdsArray_Count;
@dynamic lastActivityDate;
@dynamic hasIsFollowing, isFollowing;

typedef struct ThreadInfo__storage_ {
  uint32_t _has_storage_[1];
  uint32_t messagesCount;
  NSMutableArray *latestActiveUserIdsArray;
  GPBBoolValue *isFollowing;
  uint64_t lastActivityDate;
} ThreadInfo__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "messagesCount",
        .dataTypeSpecific.clazz = Nil,
        .number = ThreadInfo_FieldNumber_MessagesCount,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(ThreadInfo__storage_, messagesCount),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeUInt32,
      },
      {
        .name = "latestActiveUserIdsArray",
        .dataTypeSpecific.clazz = Nil,
        .number = ThreadInfo_FieldNumber_LatestActiveUserIdsArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(ThreadInfo__storage_, latestActiveUserIdsArray),
        .flags = GPBFieldRepeated,
        .dataType = GPBDataTypeString,
      },
      {
        .name = "lastActivityDate",
        .dataTypeSpecific.clazz = Nil,
        .number = ThreadInfo_FieldNumber_LastActivityDate,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(ThreadInfo__storage_, lastActivityDate),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeUInt64,
      },
      {
        .name = "isFollowing",
        .dataTypeSpecific.clazz = GPBObjCClass(GPBBoolValue),
        .number = ThreadInfo_FieldNumber_IsFollowing,
        .hasIndex = 2,
        .offset = (uint32_t)offsetof(ThreadInfo__storage_, isFollowing),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[ThreadInfo class]
                                     rootClass:[ThreadsRoot class]
                                          file:ThreadsRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(ThreadInfo__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - RequestGetThreadInfos

@implementation RequestGetThreadInfos

@dynamic fromClock;
@dynamic hasPeer, peer;

typedef struct RequestGetThreadInfos__storage_ {
  uint32_t _has_storage_[1];
  Peer *peer;
  int64_t fromClock;
} RequestGetThreadInfos__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "fromClock",
        .dataTypeSpecific.clazz = Nil,
        .number = RequestGetThreadInfos_FieldNumber_FromClock,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(RequestGetThreadInfos__storage_, fromClock),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt64,
      },
      {
        .name = "peer",
        .dataTypeSpecific.clazz = GPBObjCClass(Peer),
        .number = RequestGetThreadInfos_FieldNumber_Peer,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(RequestGetThreadInfos__storage_, peer),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[RequestGetThreadInfos class]
                                     rootClass:[ThreadsRoot class]
                                          file:ThreadsRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(RequestGetThreadInfos__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - PeerThread

@implementation PeerThread

@dynamic hasParentMid, parentMid;
@dynamic hasInfo, info;

typedef struct PeerThread__storage_ {
  uint32_t _has_storage_[1];
  UUIDValue *parentMid;
  ThreadInfo *info;
} PeerThread__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "parentMid",
        .dataTypeSpecific.clazz = GPBObjCClass(UUIDValue),
        .number = PeerThread_FieldNumber_ParentMid,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(PeerThread__storage_, parentMid),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "info",
        .dataTypeSpecific.clazz = GPBObjCClass(ThreadInfo),
        .number = PeerThread_FieldNumber_Info,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(PeerThread__storage_, info),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[PeerThread class]
                                     rootClass:[ThreadsRoot class]
                                          file:ThreadsRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(PeerThread__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - ResponseGetThreadInfos

@implementation ResponseGetThreadInfos

@dynamic threadsArray, threadsArray_Count;
@dynamic peerClock;
@dynamic nextAvailable;

typedef struct ResponseGetThreadInfos__storage_ {
  uint32_t _has_storage_[1];
  NSMutableArray *threadsArray;
  int64_t peerClock;
} ResponseGetThreadInfos__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "threadsArray",
        .dataTypeSpecific.clazz = GPBObjCClass(PeerThread),
        .number = ResponseGetThreadInfos_FieldNumber_ThreadsArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(ResponseGetThreadInfos__storage_, threadsArray),
        .flags = GPBFieldRepeated,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "peerClock",
        .dataTypeSpecific.clazz = Nil,
        .number = ResponseGetThreadInfos_FieldNumber_PeerClock,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(ResponseGetThreadInfos__storage_, peerClock),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt64,
      },
      {
        .name = "nextAvailable",
        .dataTypeSpecific.clazz = Nil,
        .number = ResponseGetThreadInfos_FieldNumber_NextAvailable,
        .hasIndex = 1,
        .offset = 2,  // Stored in _has_storage_ to save space.
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeBool,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[ResponseGetThreadInfos class]
                                     rootClass:[ThreadsRoot class]
                                          file:ThreadsRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(ResponseGetThreadInfos__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - RequestFollowThread

@implementation RequestFollowThread

@dynamic hasPeer, peer;

typedef struct RequestFollowThread__storage_ {
  uint32_t _has_storage_[1];
  Peer *peer;
} RequestFollowThread__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "peer",
        .dataTypeSpecific.clazz = GPBObjCClass(Peer),
        .number = RequestFollowThread_FieldNumber_Peer,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(RequestFollowThread__storage_, peer),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[RequestFollowThread class]
                                     rootClass:[ThreadsRoot class]
                                          file:ThreadsRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(RequestFollowThread__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - RequestUnfollowThread

@implementation RequestUnfollowThread

@dynamic hasPeer, peer;

typedef struct RequestUnfollowThread__storage_ {
  uint32_t _has_storage_[1];
  Peer *peer;
} RequestUnfollowThread__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "peer",
        .dataTypeSpecific.clazz = GPBObjCClass(Peer),
        .number = RequestUnfollowThread_FieldNumber_Peer,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(RequestUnfollowThread__storage_, peer),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[RequestUnfollowThread class]
                                     rootClass:[ThreadsRoot class]
                                          file:ThreadsRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(RequestUnfollowThread__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - UpdateThreadInfos

@implementation UpdateThreadInfos

@dynamic hasPeer, peer;
@dynamic infosArray, infosArray_Count;
@dynamic peerClock;
@dynamic prevPeerClock;

typedef struct UpdateThreadInfos__storage_ {
  uint32_t _has_storage_[1];
  Peer *peer;
  NSMutableArray *infosArray;
  int64_t peerClock;
  int64_t prevPeerClock;
} UpdateThreadInfos__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "peer",
        .dataTypeSpecific.clazz = GPBObjCClass(Peer),
        .number = UpdateThreadInfos_FieldNumber_Peer,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(UpdateThreadInfos__storage_, peer),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "infosArray",
        .dataTypeSpecific.clazz = GPBObjCClass(PeerThread),
        .number = UpdateThreadInfos_FieldNumber_InfosArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(UpdateThreadInfos__storage_, infosArray),
        .flags = GPBFieldRepeated,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "peerClock",
        .dataTypeSpecific.clazz = Nil,
        .number = UpdateThreadInfos_FieldNumber_PeerClock,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(UpdateThreadInfos__storage_, peerClock),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt64,
      },
      {
        .name = "prevPeerClock",
        .dataTypeSpecific.clazz = Nil,
        .number = UpdateThreadInfos_FieldNumber_PrevPeerClock,
        .hasIndex = 2,
        .offset = (uint32_t)offsetof(UpdateThreadInfos__storage_, prevPeerClock),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt64,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[UpdateThreadInfos class]
                                     rootClass:[ThreadsRoot class]
                                          file:ThreadsRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(UpdateThreadInfos__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - UpdateThreadFollowing

@implementation UpdateThreadFollowing

@dynamic hasPeer, peer;
@dynamic isFollowing;

typedef struct UpdateThreadFollowing__storage_ {
  uint32_t _has_storage_[1];
  Peer *peer;
} UpdateThreadFollowing__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "peer",
        .dataTypeSpecific.clazz = GPBObjCClass(Peer),
        .number = UpdateThreadFollowing_FieldNumber_Peer,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(UpdateThreadFollowing__storage_, peer),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "isFollowing",
        .dataTypeSpecific.clazz = Nil,
        .number = UpdateThreadFollowing_FieldNumber_IsFollowing,
        .hasIndex = 1,
        .offset = 2,  // Stored in _has_storage_ to save space.
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeBool,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[UpdateThreadFollowing class]
                                     rootClass:[ThreadsRoot class]
                                          file:ThreadsRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(UpdateThreadFollowing__storage_)
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
