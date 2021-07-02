// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: definitions.proto

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

#import "Definitions.pbobjc.h"
#import "Descriptor.pbobjc.h"
// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#pragma mark - Objective C Class declarations
// Forward declarations of Objective C classes that we can use as
// static values in struct initializers.
// We don't use [Foo class] because it is not a static value.
GPBObjCClassDeclaration(DialogOptions);
GPBObjCClassDeclaration(GPBFieldOptions);

#pragma mark - DefinitionsRoot

@implementation DefinitionsRoot

+ (GPBExtensionRegistry*)extensionRegistry {
  // This is called by +initialize so there is no need to worry
  // about thread safety and initialization of registry.
  static GPBExtensionRegistry* registry = nil;
  if (!registry) {
    GPB_DEBUG_CHECK_RUNTIME_VERSIONS();
    registry = [[GPBExtensionRegistry alloc] init];
    static GPBExtensionDescription descriptions[] = {
      {
        .defaultValue.valueMessage = nil,
        .singletonName = GPBStringifySymbol(DefinitionsRoot_dlg),
        .extendedClass.clazz = GPBObjCClass(GPBFieldOptions),
        .messageOrGroupClass.clazz = GPBObjCClass(DialogOptions),
        .enumDescriptorFunc = NULL,
        .fieldNumber = 100001,
        .dataType = GPBDataTypeMessage,
        .options = GPBExtensionNone,
      },
    };
    for (size_t i = 0; i < sizeof(descriptions) / sizeof(descriptions[0]); ++i) {
      GPBExtensionDescriptor *extension =
          [[GPBExtensionDescriptor alloc] initWithExtensionDescription:&descriptions[i]
                                                         usesClassRefs:YES];
      [registry addExtension:extension];
      [self globallyRegisterExtension:extension];
      [extension release];
    }
    // None of the imports (direct or indirect) defined extensions, so no need to add
    // them to this registry.
  }
  return registry;
}

@end

#pragma mark - DefinitionsRoot_FileDescriptor

static GPBFileDescriptor *DefinitionsRoot_FileDescriptor(void) {
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

#pragma mark - UUIDValue

@implementation UUIDValue

@dynamic msb;
@dynamic lsb;

typedef struct UUIDValue__storage_ {
  uint32_t _has_storage_[1];
  int64_t msb;
  int64_t lsb;
} UUIDValue__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "msb",
        .dataTypeSpecific.clazz = Nil,
        .number = UUIDValue_FieldNumber_Msb,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(UUIDValue__storage_, msb),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt64,
      },
      {
        .name = "lsb",
        .dataTypeSpecific.clazz = Nil,
        .number = UUIDValue_FieldNumber_Lsb,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(UUIDValue__storage_, lsb),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt64,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[UUIDValue class]
                                     rootClass:[DefinitionsRoot class]
                                          file:DefinitionsRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(UUIDValue__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - DialogOptions

@implementation DialogOptions

@dynamic log;
@dynamic required;

typedef struct DialogOptions__storage_ {
  uint32_t _has_storage_[1];
  NSString *log;
} DialogOptions__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "log",
        .dataTypeSpecific.clazz = Nil,
        .number = DialogOptions_FieldNumber_Log,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(DialogOptions__storage_, log),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeString,
      },
      {
        .name = "required",
        .dataTypeSpecific.clazz = Nil,
        .number = DialogOptions_FieldNumber_Required,
        .hasIndex = 1,
        .offset = 2,  // Stored in _has_storage_ to save space.
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeBool,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[DialogOptions class]
                                     rootClass:[DefinitionsRoot class]
                                          file:DefinitionsRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(DialogOptions__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - DataClock

@implementation DataClock

@dynamic clock;

typedef struct DataClock__storage_ {
  uint32_t _has_storage_[1];
  int64_t clock;
} DataClock__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "clock",
        .dataTypeSpecific.clazz = Nil,
        .number = DataClock_FieldNumber_Clock,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(DataClock__storage_, clock),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt64,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[DataClock class]
                                     rootClass:[DefinitionsRoot class]
                                          file:DefinitionsRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(DataClock__storage_)
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
