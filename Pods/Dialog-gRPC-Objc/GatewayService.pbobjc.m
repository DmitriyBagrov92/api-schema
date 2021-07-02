// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gateway_service.proto

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

#import "GatewayService.pbobjc.h"
#import "Wrappers.pbobjc.h"
// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#pragma mark - Objective C Class declarations
// Forward declarations of Objective C classes that we can use as
// static values in struct initializers.
// We don't use [Foo class] because it is not a static value.
GPBObjCClassDeclaration(GPBInt32Value);

#pragma mark - APIGatewayServiceRoot

@implementation APIGatewayServiceRoot

// No extensions in the file and none of the imports (direct or indirect)
// defined extensions, so no need to generate +extensionRegistry.

@end

#pragma mark - APIGatewayServiceRoot_FileDescriptor

static GPBFileDescriptor *APIGatewayServiceRoot_FileDescriptor(void) {
  // This is called by +initialize so there is no need to worry
  // about thread safety of the singleton.
  static GPBFileDescriptor *descriptor = NULL;
  if (!descriptor) {
    GPB_DEBUG_CHECK_RUNTIME_VERSIONS();
    descriptor = [[GPBFileDescriptor alloc] initWithPackage:@"dialog"
                                                 objcPrefix:@"API"
                                                     syntax:GPBFileSyntaxProto3];
  }
  return descriptor;
}

#pragma mark - APIGetDifferenceCommand

@implementation APIGetDifferenceCommand

@dynamic hasSeq, seq;
@dynamic state;
@dynamic configHash;

typedef struct APIGetDifferenceCommand__storage_ {
  uint32_t _has_storage_[1];
  GPBInt32Value *seq;
  NSData *state;
  int64_t configHash;
} APIGetDifferenceCommand__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "seq",
        .dataTypeSpecific.clazz = GPBObjCClass(GPBInt32Value),
        .number = APIGetDifferenceCommand_FieldNumber_Seq,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(APIGetDifferenceCommand__storage_, seq),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "state",
        .dataTypeSpecific.clazz = Nil,
        .number = APIGetDifferenceCommand_FieldNumber_State,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(APIGetDifferenceCommand__storage_, state),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeBytes,
      },
      {
        .name = "configHash",
        .dataTypeSpecific.clazz = Nil,
        .number = APIGetDifferenceCommand_FieldNumber_ConfigHash,
        .hasIndex = 2,
        .offset = (uint32_t)offsetof(APIGetDifferenceCommand__storage_, configHash),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt64,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[APIGetDifferenceCommand class]
                                     rootClass:[APIGatewayServiceRoot class]
                                          file:APIGatewayServiceRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(APIGetDifferenceCommand__storage_)
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
