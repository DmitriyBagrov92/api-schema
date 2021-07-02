// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: permissions.proto

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

#import "Permissions.pbobjc.h"
#import "Definitions.pbobjc.h"
#import "Annotations.pbobjc.h"
// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

#pragma mark - PermissionsRoot

@implementation PermissionsRoot

+ (GPBExtensionRegistry*)extensionRegistry {
  // This is called by +initialize so there is no need to worry
  // about thread safety and initialization of registry.
  static GPBExtensionRegistry* registry = nil;
  if (!registry) {
    GPB_DEBUG_CHECK_RUNTIME_VERSIONS();
    registry = [[GPBExtensionRegistry alloc] init];
    // Merge in the imports (direct or indirect) that defined extensions.
    [registry addExtensions:[DefinitionsRoot extensionRegistry]];
    [registry addExtensions:[GAPIAnnotationsRoot extensionRegistry]];
  }
  return registry;
}

@end

#pragma mark - PermissionsRoot_FileDescriptor

static GPBFileDescriptor *PermissionsRoot_FileDescriptor(void) {
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

#pragma mark - Enum Permission

GPBEnumDescriptor *Permission_EnumDescriptor(void) {
  static _Atomic(GPBEnumDescriptor*) descriptor = nil;
  if (!descriptor) {
    static const char *valueNames =
        "PermissionUnknown\000PermissionSearch\000Permi"
        "ssionCreateGroups\000PermissionLeaveGroups\000";
    static const int32_t values[] = {
        Permission_PermissionUnknown,
        Permission_PermissionSearch,
        Permission_PermissionCreateGroups,
        Permission_PermissionLeaveGroups,
    };
    GPBEnumDescriptor *worker =
        [GPBEnumDescriptor allocDescriptorForName:GPBNSStringifySymbol(Permission)
                                       valueNames:valueNames
                                           values:values
                                            count:(uint32_t)(sizeof(values) / sizeof(int32_t))
                                     enumVerifier:Permission_IsValidValue];
    GPBEnumDescriptor *expected = nil;
    if (!atomic_compare_exchange_strong(&descriptor, &expected, worker)) {
      [worker release];
    }
  }
  return descriptor;
}

BOOL Permission_IsValidValue(int32_t value__) {
  switch (value__) {
    case Permission_PermissionUnknown:
    case Permission_PermissionSearch:
    case Permission_PermissionCreateGroups:
    case Permission_PermissionLeaveGroups:
      return YES;
    default:
      return NO;
  }
}

#pragma mark - RequestGetPermissions

@implementation RequestGetPermissions


typedef struct RequestGetPermissions__storage_ {
  uint32_t _has_storage_[1];
} RequestGetPermissions__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[RequestGetPermissions class]
                                     rootClass:[PermissionsRoot class]
                                          file:PermissionsRoot_FileDescriptor()
                                        fields:NULL
                                    fieldCount:0
                                   storageSize:sizeof(RequestGetPermissions__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - ResponseGetPermissions

@implementation ResponseGetPermissions

@dynamic permissionsArray, permissionsArray_Count;
@dynamic allKnownPermissionsArray, allKnownPermissionsArray_Count;
@dynamic clock;

typedef struct ResponseGetPermissions__storage_ {
  uint32_t _has_storage_[1];
  GPBEnumArray *permissionsArray;
  GPBEnumArray *allKnownPermissionsArray;
  int64_t clock;
} ResponseGetPermissions__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "permissionsArray",
        .dataTypeSpecific.enumDescFunc = Permission_EnumDescriptor,
        .number = ResponseGetPermissions_FieldNumber_PermissionsArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(ResponseGetPermissions__storage_, permissionsArray),
        .flags = (GPBFieldFlags)(GPBFieldRepeated | GPBFieldPacked | GPBFieldHasEnumDescriptor),
        .dataType = GPBDataTypeEnum,
      },
      {
        .name = "allKnownPermissionsArray",
        .dataTypeSpecific.enumDescFunc = Permission_EnumDescriptor,
        .number = ResponseGetPermissions_FieldNumber_AllKnownPermissionsArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(ResponseGetPermissions__storage_, allKnownPermissionsArray),
        .flags = (GPBFieldFlags)(GPBFieldRepeated | GPBFieldPacked | GPBFieldHasEnumDescriptor),
        .dataType = GPBDataTypeEnum,
      },
      {
        .name = "clock",
        .dataTypeSpecific.clazz = Nil,
        .number = ResponseGetPermissions_FieldNumber_Clock,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(ResponseGetPermissions__storage_, clock),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt64,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[ResponseGetPermissions class]
                                     rootClass:[PermissionsRoot class]
                                          file:PermissionsRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(ResponseGetPermissions__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - UpdatePermissionsChange

@implementation UpdatePermissionsChange

@dynamic permissionsArray, permissionsArray_Count;
@dynamic clock;

typedef struct UpdatePermissionsChange__storage_ {
  uint32_t _has_storage_[1];
  GPBEnumArray *permissionsArray;
  int64_t clock;
} UpdatePermissionsChange__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "permissionsArray",
        .dataTypeSpecific.enumDescFunc = Permission_EnumDescriptor,
        .number = UpdatePermissionsChange_FieldNumber_PermissionsArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(UpdatePermissionsChange__storage_, permissionsArray),
        .flags = (GPBFieldFlags)(GPBFieldRepeated | GPBFieldPacked | GPBFieldHasEnumDescriptor),
        .dataType = GPBDataTypeEnum,
      },
      {
        .name = "clock",
        .dataTypeSpecific.clazz = Nil,
        .number = UpdatePermissionsChange_FieldNumber_Clock,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(UpdatePermissionsChange__storage_, clock),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt64,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[UpdatePermissionsChange class]
                                     rootClass:[PermissionsRoot class]
                                          file:PermissionsRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(UpdatePermissionsChange__storage_)
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
