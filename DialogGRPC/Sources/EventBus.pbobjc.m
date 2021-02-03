// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: event_bus.proto

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

#import "EventBus.pbobjc.h"
#import "Annotations.pbobjc.h"
#import "Peers.pbobjc.h"
#import "Definitions.pbobjc.h"
#import "Miscellaneous.pbobjc.h"
#import "Scalapb.pbobjc.h"
// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#pragma mark - Objective C Class declarations
// Forward declarations of Objective C classes that we can use as
// static values in struct initializers.
// We don't use [Foo class] because it is not a static value.
GPBObjCClassDeclaration(Peer);

#pragma mark - EventBusRoot

@implementation EventBusRoot

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

#pragma mark - EventBusRoot_FileDescriptor

static GPBFileDescriptor *EventBusRoot_FileDescriptor(void) {
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

#pragma mark - RequestJoinEventBus

@implementation RequestJoinEventBus

@dynamic id_p;
@dynamic timeout;

typedef struct RequestJoinEventBus__storage_ {
  uint32_t _has_storage_[1];
  NSString *id_p;
  int64_t timeout;
} RequestJoinEventBus__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "id_p",
        .dataTypeSpecific.clazz = Nil,
        .number = RequestJoinEventBus_FieldNumber_Id_p,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(RequestJoinEventBus__storage_, id_p),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeString,
      },
      {
        .name = "timeout",
        .dataTypeSpecific.clazz = Nil,
        .number = RequestJoinEventBus_FieldNumber_Timeout,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(RequestJoinEventBus__storage_, timeout),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt64,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[RequestJoinEventBus class]
                                     rootClass:[EventBusRoot class]
                                          file:EventBusRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(RequestJoinEventBus__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - ResponseJoinEventBus

@implementation ResponseJoinEventBus

@dynamic deviceId;

typedef struct ResponseJoinEventBus__storage_ {
  uint32_t _has_storage_[1];
  int64_t deviceId;
} ResponseJoinEventBus__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "deviceId",
        .dataTypeSpecific.clazz = Nil,
        .number = ResponseJoinEventBus_FieldNumber_DeviceId,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(ResponseJoinEventBus__storage_, deviceId),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt64,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[ResponseJoinEventBus class]
                                     rootClass:[EventBusRoot class]
                                          file:EventBusRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(ResponseJoinEventBus__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - RequestKeepAliveEventBus

@implementation RequestKeepAliveEventBus

@dynamic id_p;
@dynamic timeout;

typedef struct RequestKeepAliveEventBus__storage_ {
  uint32_t _has_storage_[1];
  NSString *id_p;
  int64_t timeout;
} RequestKeepAliveEventBus__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "id_p",
        .dataTypeSpecific.clazz = Nil,
        .number = RequestKeepAliveEventBus_FieldNumber_Id_p,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(RequestKeepAliveEventBus__storage_, id_p),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeString,
      },
      {
        .name = "timeout",
        .dataTypeSpecific.clazz = Nil,
        .number = RequestKeepAliveEventBus_FieldNumber_Timeout,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(RequestKeepAliveEventBus__storage_, timeout),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt64,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[RequestKeepAliveEventBus class]
                                     rootClass:[EventBusRoot class]
                                          file:EventBusRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(RequestKeepAliveEventBus__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - RequestPostToEventBus

@implementation RequestPostToEventBus

@dynamic id_p;
@dynamic destinationsArray, destinationsArray_Count;
@dynamic message;

typedef struct RequestPostToEventBus__storage_ {
  uint32_t _has_storage_[1];
  NSString *id_p;
  GPBInt64Array *destinationsArray;
  NSData *message;
} RequestPostToEventBus__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "id_p",
        .dataTypeSpecific.clazz = Nil,
        .number = RequestPostToEventBus_FieldNumber_Id_p,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(RequestPostToEventBus__storage_, id_p),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeString,
      },
      {
        .name = "destinationsArray",
        .dataTypeSpecific.clazz = Nil,
        .number = RequestPostToEventBus_FieldNumber_DestinationsArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(RequestPostToEventBus__storage_, destinationsArray),
        .flags = (GPBFieldFlags)(GPBFieldRepeated | GPBFieldPacked),
        .dataType = GPBDataTypeInt64,
      },
      {
        .name = "message",
        .dataTypeSpecific.clazz = Nil,
        .number = RequestPostToEventBus_FieldNumber_Message,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(RequestPostToEventBus__storage_, message),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeBytes,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[RequestPostToEventBus class]
                                     rootClass:[EventBusRoot class]
                                          file:EventBusRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(RequestPostToEventBus__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - UpdateEventBusDeviceConnected

@implementation UpdateEventBusDeviceConnected

@dynamic id_p;
@dynamic userId;
@dynamic deviceId;
@dynamic hasPeer, peer;

typedef struct UpdateEventBusDeviceConnected__storage_ {
  uint32_t _has_storage_[1];
  int32_t userId;
  NSString *id_p;
  Peer *peer;
  int64_t deviceId;
} UpdateEventBusDeviceConnected__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "id_p",
        .dataTypeSpecific.clazz = Nil,
        .number = UpdateEventBusDeviceConnected_FieldNumber_Id_p,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(UpdateEventBusDeviceConnected__storage_, id_p),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeString,
      },
      {
        .name = "userId",
        .dataTypeSpecific.clazz = Nil,
        .number = UpdateEventBusDeviceConnected_FieldNumber_UserId,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(UpdateEventBusDeviceConnected__storage_, userId),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt32,
      },
      {
        .name = "deviceId",
        .dataTypeSpecific.clazz = Nil,
        .number = UpdateEventBusDeviceConnected_FieldNumber_DeviceId,
        .hasIndex = 2,
        .offset = (uint32_t)offsetof(UpdateEventBusDeviceConnected__storage_, deviceId),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt64,
      },
      {
        .name = "peer",
        .dataTypeSpecific.clazz = GPBObjCClass(Peer),
        .number = UpdateEventBusDeviceConnected_FieldNumber_Peer,
        .hasIndex = 3,
        .offset = (uint32_t)offsetof(UpdateEventBusDeviceConnected__storage_, peer),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[UpdateEventBusDeviceConnected class]
                                     rootClass:[EventBusRoot class]
                                          file:EventBusRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(UpdateEventBusDeviceConnected__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - UpdateEventBusDeviceDisconnected

@implementation UpdateEventBusDeviceDisconnected

@dynamic id_p;
@dynamic userId;
@dynamic deviceId;
@dynamic hasPeer, peer;

typedef struct UpdateEventBusDeviceDisconnected__storage_ {
  uint32_t _has_storage_[1];
  int32_t userId;
  NSString *id_p;
  Peer *peer;
  int64_t deviceId;
} UpdateEventBusDeviceDisconnected__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "id_p",
        .dataTypeSpecific.clazz = Nil,
        .number = UpdateEventBusDeviceDisconnected_FieldNumber_Id_p,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(UpdateEventBusDeviceDisconnected__storage_, id_p),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeString,
      },
      {
        .name = "userId",
        .dataTypeSpecific.clazz = Nil,
        .number = UpdateEventBusDeviceDisconnected_FieldNumber_UserId,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(UpdateEventBusDeviceDisconnected__storage_, userId),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt32,
      },
      {
        .name = "deviceId",
        .dataTypeSpecific.clazz = Nil,
        .number = UpdateEventBusDeviceDisconnected_FieldNumber_DeviceId,
        .hasIndex = 2,
        .offset = (uint32_t)offsetof(UpdateEventBusDeviceDisconnected__storage_, deviceId),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt64,
      },
      {
        .name = "peer",
        .dataTypeSpecific.clazz = GPBObjCClass(Peer),
        .number = UpdateEventBusDeviceDisconnected_FieldNumber_Peer,
        .hasIndex = 3,
        .offset = (uint32_t)offsetof(UpdateEventBusDeviceDisconnected__storage_, peer),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[UpdateEventBusDeviceDisconnected class]
                                     rootClass:[EventBusRoot class]
                                          file:EventBusRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(UpdateEventBusDeviceDisconnected__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - UpdateEventBusMessage

@implementation UpdateEventBusMessage

@dynamic id_p;
@dynamic senderId;
@dynamic senderDeviceId;
@dynamic message;

typedef struct UpdateEventBusMessage__storage_ {
  uint32_t _has_storage_[1];
  int32_t senderId;
  NSString *id_p;
  NSData *message;
  int64_t senderDeviceId;
} UpdateEventBusMessage__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "id_p",
        .dataTypeSpecific.clazz = Nil,
        .number = UpdateEventBusMessage_FieldNumber_Id_p,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(UpdateEventBusMessage__storage_, id_p),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeString,
      },
      {
        .name = "senderId",
        .dataTypeSpecific.clazz = Nil,
        .number = UpdateEventBusMessage_FieldNumber_SenderId,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(UpdateEventBusMessage__storage_, senderId),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt32,
      },
      {
        .name = "senderDeviceId",
        .dataTypeSpecific.clazz = Nil,
        .number = UpdateEventBusMessage_FieldNumber_SenderDeviceId,
        .hasIndex = 2,
        .offset = (uint32_t)offsetof(UpdateEventBusMessage__storage_, senderDeviceId),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt64,
      },
      {
        .name = "message",
        .dataTypeSpecific.clazz = Nil,
        .number = UpdateEventBusMessage_FieldNumber_Message,
        .hasIndex = 3,
        .offset = (uint32_t)offsetof(UpdateEventBusMessage__storage_, message),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeBytes,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[UpdateEventBusMessage class]
                                     rootClass:[EventBusRoot class]
                                          file:EventBusRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(UpdateEventBusMessage__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - UpdateEventBusDisposed

@implementation UpdateEventBusDisposed

@dynamic id_p;

typedef struct UpdateEventBusDisposed__storage_ {
  uint32_t _has_storage_[1];
  NSString *id_p;
} UpdateEventBusDisposed__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "id_p",
        .dataTypeSpecific.clazz = Nil,
        .number = UpdateEventBusDisposed_FieldNumber_Id_p,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(UpdateEventBusDisposed__storage_, id_p),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeString,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[UpdateEventBusDisposed class]
                                     rootClass:[EventBusRoot class]
                                          file:EventBusRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(UpdateEventBusDisposed__storage_)
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
