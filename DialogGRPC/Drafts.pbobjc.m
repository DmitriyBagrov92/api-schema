// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: drafts.proto

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

#import "Drafts.pbobjc.h"
#import "Annotations.pbobjc.h"
#import "Messaging.pbobjc.h"
#import "Peers.pbobjc.h"
#import "Definitions.pbobjc.h"
#import "Scalapb.pbobjc.h"
// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#pragma mark - Objective C Class declarations
// Forward declarations of Objective C classes that we can use as
// static values in struct initializers.
// We don't use [Foo class] because it is not a static value.
GPBObjCClassDeclaration(Draft);
GPBObjCClassDeclaration(MessageContent);
GPBObjCClassDeclaration(Peer);

#pragma mark - DraftsRoot

@implementation DraftsRoot

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

#pragma mark - DraftsRoot_FileDescriptor

static GPBFileDescriptor *DraftsRoot_FileDescriptor(void) {
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

#pragma mark - RequestLoadDrafts

@implementation RequestLoadDrafts

@dynamic clock;

typedef struct RequestLoadDrafts__storage_ {
  uint32_t _has_storage_[1];
  int64_t clock;
} RequestLoadDrafts__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "clock",
        .dataTypeSpecific.clazz = Nil,
        .number = RequestLoadDrafts_FieldNumber_Clock,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(RequestLoadDrafts__storage_, clock),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt64,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[RequestLoadDrafts class]
                                     rootClass:[DraftsRoot class]
                                          file:DraftsRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(RequestLoadDrafts__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - ResponseLoadDrafts

@implementation ResponseLoadDrafts

@dynamic draftsArray, draftsArray_Count;
@dynamic clock;

typedef struct ResponseLoadDrafts__storage_ {
  uint32_t _has_storage_[1];
  NSMutableArray *draftsArray;
  int64_t clock;
} ResponseLoadDrafts__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "draftsArray",
        .dataTypeSpecific.clazz = GPBObjCClass(Draft),
        .number = ResponseLoadDrafts_FieldNumber_DraftsArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(ResponseLoadDrafts__storage_, draftsArray),
        .flags = GPBFieldRepeated,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "clock",
        .dataTypeSpecific.clazz = Nil,
        .number = ResponseLoadDrafts_FieldNumber_Clock,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(ResponseLoadDrafts__storage_, clock),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt64,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[ResponseLoadDrafts class]
                                     rootClass:[DraftsRoot class]
                                          file:DraftsRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(ResponseLoadDrafts__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - RequestSaveDrafts

@implementation RequestSaveDrafts

@dynamic draftsArray, draftsArray_Count;

typedef struct RequestSaveDrafts__storage_ {
  uint32_t _has_storage_[1];
  NSMutableArray *draftsArray;
} RequestSaveDrafts__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "draftsArray",
        .dataTypeSpecific.clazz = GPBObjCClass(Draft),
        .number = RequestSaveDrafts_FieldNumber_DraftsArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(RequestSaveDrafts__storage_, draftsArray),
        .flags = GPBFieldRepeated,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[RequestSaveDrafts class]
                                     rootClass:[DraftsRoot class]
                                          file:DraftsRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(RequestSaveDrafts__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - ResponseSaveDrafts

@implementation ResponseSaveDrafts

@dynamic clock;

typedef struct ResponseSaveDrafts__storage_ {
  uint32_t _has_storage_[1];
  int64_t clock;
} ResponseSaveDrafts__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "clock",
        .dataTypeSpecific.clazz = Nil,
        .number = ResponseSaveDrafts_FieldNumber_Clock,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(ResponseSaveDrafts__storage_, clock),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt64,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[ResponseSaveDrafts class]
                                     rootClass:[DraftsRoot class]
                                          file:DraftsRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(ResponseSaveDrafts__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - UpdateDraftsChanged

@implementation UpdateDraftsChanged

@dynamic draftsArray, draftsArray_Count;
@dynamic clock;
@dynamic prevClock;

typedef struct UpdateDraftsChanged__storage_ {
  uint32_t _has_storage_[1];
  NSMutableArray *draftsArray;
  int64_t clock;
  int64_t prevClock;
} UpdateDraftsChanged__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "draftsArray",
        .dataTypeSpecific.clazz = GPBObjCClass(Draft),
        .number = UpdateDraftsChanged_FieldNumber_DraftsArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(UpdateDraftsChanged__storage_, draftsArray),
        .flags = GPBFieldRepeated,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "clock",
        .dataTypeSpecific.clazz = Nil,
        .number = UpdateDraftsChanged_FieldNumber_Clock,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(UpdateDraftsChanged__storage_, clock),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt64,
      },
      {
        .name = "prevClock",
        .dataTypeSpecific.clazz = Nil,
        .number = UpdateDraftsChanged_FieldNumber_PrevClock,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(UpdateDraftsChanged__storage_, prevClock),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt64,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[UpdateDraftsChanged class]
                                     rootClass:[DraftsRoot class]
                                          file:DraftsRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(UpdateDraftsChanged__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - Draft

@implementation Draft

@dynamic hasPeer, peer;
@dynamic hasContent, content;

typedef struct Draft__storage_ {
  uint32_t _has_storage_[1];
  Peer *peer;
  MessageContent *content;
} Draft__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "peer",
        .dataTypeSpecific.clazz = GPBObjCClass(Peer),
        .number = Draft_FieldNumber_Peer,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(Draft__storage_, peer),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "content",
        .dataTypeSpecific.clazz = GPBObjCClass(MessageContent),
        .number = Draft_FieldNumber_Content,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(Draft__storage_, content),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[Draft class]
                                     rootClass:[DraftsRoot class]
                                          file:DraftsRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(Draft__storage_)
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
