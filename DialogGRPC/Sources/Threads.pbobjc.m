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

#import <stdatomic.h>

#import "Threads.pbobjc.h"
#import "Wrappers.pbobjc.h"
#import "Annotations.pbobjc.h"
#import "Definitions.pbobjc.h"
#import "Miscellaneous.pbobjc.h"
#import "Scalapb.pbobjc.h"
#import "Peers.pbobjc.h"
#import "Groups.pbobjc.h"
// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#pragma mark - Objective C Class declarations
// Forward declarations of Objective C classes that we can use as
// static values in struct initializers.
// We don't use [Foo class] because it is not a static value.
GPBObjCClassDeclaration(GPBStringValue);
GPBObjCClassDeclaration(Group);
GPBObjCClassDeclaration(GroupOutPeer);
GPBObjCClassDeclaration(OutPeer);
GPBObjCClassDeclaration(ThreadReference);
GPBObjCClassDeclaration(UUIDValue);
GPBObjCClassDeclaration(UserOutPeer);

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

#pragma mark - ThreadReference

@implementation ThreadReference

@dynamic hasMessageId, messageId;
@dynamic hasPeer, peer;

typedef struct ThreadReference__storage_ {
  uint32_t _has_storage_[1];
  UUIDValue *messageId;
  OutPeer *peer;
} ThreadReference__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "messageId",
        .dataTypeSpecific.clazz = GPBObjCClass(UUIDValue),
        .number = ThreadReference_FieldNumber_MessageId,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(ThreadReference__storage_, messageId),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "peer",
        .dataTypeSpecific.clazz = GPBObjCClass(OutPeer),
        .number = ThreadReference_FieldNumber_Peer,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(ThreadReference__storage_, peer),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[ThreadReference class]
                                     rootClass:[ThreadsRoot class]
                                          file:ThreadsRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(ThreadReference__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - RequestCreateThread

@implementation RequestCreateThread

@dynamic randomId;
@dynamic hasParentGroupPeer, parentGroupPeer;
@dynamic hasStartMessageId, startMessageId;
@dynamic title;
@dynamic joinPolicy;
@dynamic membersArray, membersArray_Count;

typedef struct RequestCreateThread__storage_ {
  uint32_t _has_storage_[1];
  RequestCreateThread_JoinPolicy joinPolicy;
  GroupOutPeer *parentGroupPeer;
  UUIDValue *startMessageId;
  NSString *title;
  NSMutableArray *membersArray;
  int64_t randomId;
} RequestCreateThread__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "randomId",
        .dataTypeSpecific.clazz = Nil,
        .number = RequestCreateThread_FieldNumber_RandomId,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(RequestCreateThread__storage_, randomId),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt64,
      },
      {
        .name = "parentGroupPeer",
        .dataTypeSpecific.clazz = GPBObjCClass(GroupOutPeer),
        .number = RequestCreateThread_FieldNumber_ParentGroupPeer,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(RequestCreateThread__storage_, parentGroupPeer),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "startMessageId",
        .dataTypeSpecific.clazz = GPBObjCClass(UUIDValue),
        .number = RequestCreateThread_FieldNumber_StartMessageId,
        .hasIndex = 2,
        .offset = (uint32_t)offsetof(RequestCreateThread__storage_, startMessageId),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "title",
        .dataTypeSpecific.clazz = Nil,
        .number = RequestCreateThread_FieldNumber_Title,
        .hasIndex = 3,
        .offset = (uint32_t)offsetof(RequestCreateThread__storage_, title),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeString,
      },
      {
        .name = "joinPolicy",
        .dataTypeSpecific.enumDescFunc = RequestCreateThread_JoinPolicy_EnumDescriptor,
        .number = RequestCreateThread_FieldNumber_JoinPolicy,
        .hasIndex = 4,
        .offset = (uint32_t)offsetof(RequestCreateThread__storage_, joinPolicy),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldHasEnumDescriptor | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeEnum,
      },
      {
        .name = "membersArray",
        .dataTypeSpecific.clazz = GPBObjCClass(UserOutPeer),
        .number = RequestCreateThread_FieldNumber_MembersArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(RequestCreateThread__storage_, membersArray),
        .flags = GPBFieldRepeated,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[RequestCreateThread class]
                                     rootClass:[ThreadsRoot class]
                                          file:ThreadsRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(RequestCreateThread__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

int32_t RequestCreateThread_JoinPolicy_RawValue(RequestCreateThread *message) {
  GPBDescriptor *descriptor = [RequestCreateThread descriptor];
  GPBFieldDescriptor *field = [descriptor fieldWithNumber:RequestCreateThread_FieldNumber_JoinPolicy];
  return GPBGetMessageRawEnumField(message, field);
}

void SetRequestCreateThread_JoinPolicy_RawValue(RequestCreateThread *message, int32_t value) {
  GPBDescriptor *descriptor = [RequestCreateThread descriptor];
  GPBFieldDescriptor *field = [descriptor fieldWithNumber:RequestCreateThread_FieldNumber_JoinPolicy];
  GPBSetMessageRawEnumField(message, field, value);
}

#pragma mark - Enum RequestCreateThread_JoinPolicy

GPBEnumDescriptor *RequestCreateThread_JoinPolicy_EnumDescriptor(void) {
  static _Atomic(GPBEnumDescriptor*) descriptor = nil;
  if (!descriptor) {
    static const char *valueNames =
        "InviteOnly\000ThreadMembers\000";
    static const int32_t values[] = {
        RequestCreateThread_JoinPolicy_InviteOnly,
        RequestCreateThread_JoinPolicy_ThreadMembers,
    };
    GPBEnumDescriptor *worker =
        [GPBEnumDescriptor allocDescriptorForName:GPBNSStringifySymbol(RequestCreateThread_JoinPolicy)
                                       valueNames:valueNames
                                           values:values
                                            count:(uint32_t)(sizeof(values) / sizeof(int32_t))
                                     enumVerifier:RequestCreateThread_JoinPolicy_IsValidValue];
    GPBEnumDescriptor *expected = nil;
    if (!atomic_compare_exchange_strong(&descriptor, &expected, worker)) {
      [worker release];
    }
  }
  return descriptor;
}

BOOL RequestCreateThread_JoinPolicy_IsValidValue(int32_t value__) {
  switch (value__) {
    case RequestCreateThread_JoinPolicy_InviteOnly:
    case RequestCreateThread_JoinPolicy_ThreadMembers:
      return YES;
    default:
      return NO;
  }
}

#pragma mark - ResponseCreateThread

@implementation ResponseCreateThread

@dynamic hasThreadGroup, threadGroup;
@dynamic userPeersArray, userPeersArray_Count;

typedef struct ResponseCreateThread__storage_ {
  uint32_t _has_storage_[1];
  Group *threadGroup;
  NSMutableArray *userPeersArray;
} ResponseCreateThread__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "threadGroup",
        .dataTypeSpecific.clazz = GPBObjCClass(Group),
        .number = ResponseCreateThread_FieldNumber_ThreadGroup,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(ResponseCreateThread__storage_, threadGroup),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "userPeersArray",
        .dataTypeSpecific.clazz = GPBObjCClass(UserOutPeer),
        .number = ResponseCreateThread_FieldNumber_UserPeersArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(ResponseCreateThread__storage_, userPeersArray),
        .flags = GPBFieldRepeated,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[ResponseCreateThread class]
                                     rootClass:[ThreadsRoot class]
                                          file:ThreadsRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(ResponseCreateThread__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - RequestLiftThread

@implementation RequestLiftThread

@dynamic randomId;
@dynamic hasParentGroupPeer, parentGroupPeer;
@dynamic hasThreadGroupPeer, threadGroupPeer;
@dynamic hasTitle, title;

typedef struct RequestLiftThread__storage_ {
  uint32_t _has_storage_[1];
  GroupOutPeer *parentGroupPeer;
  GroupOutPeer *threadGroupPeer;
  GPBStringValue *title;
  int64_t randomId;
} RequestLiftThread__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "randomId",
        .dataTypeSpecific.clazz = Nil,
        .number = RequestLiftThread_FieldNumber_RandomId,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(RequestLiftThread__storage_, randomId),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt64,
      },
      {
        .name = "parentGroupPeer",
        .dataTypeSpecific.clazz = GPBObjCClass(GroupOutPeer),
        .number = RequestLiftThread_FieldNumber_ParentGroupPeer,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(RequestLiftThread__storage_, parentGroupPeer),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "threadGroupPeer",
        .dataTypeSpecific.clazz = GPBObjCClass(GroupOutPeer),
        .number = RequestLiftThread_FieldNumber_ThreadGroupPeer,
        .hasIndex = 2,
        .offset = (uint32_t)offsetof(RequestLiftThread__storage_, threadGroupPeer),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "title",
        .dataTypeSpecific.clazz = GPBObjCClass(GPBStringValue),
        .number = RequestLiftThread_FieldNumber_Title,
        .hasIndex = 3,
        .offset = (uint32_t)offsetof(RequestLiftThread__storage_, title),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[RequestLiftThread class]
                                     rootClass:[ThreadsRoot class]
                                          file:ThreadsRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(RequestLiftThread__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - ResponseLiftThread

@implementation ResponseLiftThread

@dynamic hasGroup, group;

typedef struct ResponseLiftThread__storage_ {
  uint32_t _has_storage_[1];
  Group *group;
} ResponseLiftThread__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "group",
        .dataTypeSpecific.clazz = GPBObjCClass(Group),
        .number = ResponseLiftThread_FieldNumber_Group,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(ResponseLiftThread__storage_, group),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[ResponseLiftThread class]
                                     rootClass:[ThreadsRoot class]
                                          file:ThreadsRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(ResponseLiftThread__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - RequestLoadGroupThreads

@implementation RequestLoadGroupThreads

@dynamic hasGroup, group;

typedef struct RequestLoadGroupThreads__storage_ {
  uint32_t _has_storage_[1];
  GroupOutPeer *group;
} RequestLoadGroupThreads__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "group",
        .dataTypeSpecific.clazz = GPBObjCClass(GroupOutPeer),
        .number = RequestLoadGroupThreads_FieldNumber_Group,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(RequestLoadGroupThreads__storage_, group),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[RequestLoadGroupThreads class]
                                     rootClass:[ThreadsRoot class]
                                          file:ThreadsRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(RequestLoadGroupThreads__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - ResponseLoadGroupThreads

@implementation ResponseLoadGroupThreads

@dynamic threadsArray, threadsArray_Count;

typedef struct ResponseLoadGroupThreads__storage_ {
  uint32_t _has_storage_[1];
  NSMutableArray *threadsArray;
} ResponseLoadGroupThreads__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "threadsArray",
        .dataTypeSpecific.clazz = GPBObjCClass(ThreadReference),
        .number = ResponseLoadGroupThreads_FieldNumber_ThreadsArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(ResponseLoadGroupThreads__storage_, threadsArray),
        .flags = GPBFieldRepeated,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[ResponseLoadGroupThreads class]
                                     rootClass:[ThreadsRoot class]
                                          file:ThreadsRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(ResponseLoadGroupThreads__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - RequestJoinThread

@implementation RequestJoinThread

@dynamic hasParentGroupPeer, parentGroupPeer;
@dynamic hasThreadGroupPeer, threadGroupPeer;

typedef struct RequestJoinThread__storage_ {
  uint32_t _has_storage_[1];
  GroupOutPeer *parentGroupPeer;
  GroupOutPeer *threadGroupPeer;
} RequestJoinThread__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "parentGroupPeer",
        .dataTypeSpecific.clazz = GPBObjCClass(GroupOutPeer),
        .number = RequestJoinThread_FieldNumber_ParentGroupPeer,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(RequestJoinThread__storage_, parentGroupPeer),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "threadGroupPeer",
        .dataTypeSpecific.clazz = GPBObjCClass(GroupOutPeer),
        .number = RequestJoinThread_FieldNumber_ThreadGroupPeer,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(RequestJoinThread__storage_, threadGroupPeer),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[RequestJoinThread class]
                                     rootClass:[ThreadsRoot class]
                                          file:ThreadsRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(RequestJoinThread__storage_)
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
