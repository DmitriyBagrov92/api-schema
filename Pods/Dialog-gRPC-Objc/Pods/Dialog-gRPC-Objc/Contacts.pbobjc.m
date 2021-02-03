// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: contacts.proto

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

#import "Contacts.pbobjc.h"
#import "Wrappers.pbobjc.h"
#import "Annotations.pbobjc.h"
#import "Definitions.pbobjc.h"
#import "Miscellaneous.pbobjc.h"
#import "Peers.pbobjc.h"
#import "Users.pbobjc.h"
#import "Scalapb.pbobjc.h"
// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#pragma mark - Objective C Class declarations
// Forward declarations of Objective C classes that we can use as
// static values in struct initializers.
// We don't use [Foo class] because it is not a static value.
GPBObjCClassDeclaration(EmailToImport);
GPBObjCClassDeclaration(GPBStringValue);
GPBObjCClassDeclaration(PhoneToImport);
GPBObjCClassDeclaration(UUIDValue);
GPBObjCClassDeclaration(User);
GPBObjCClassDeclaration(UserOutPeer);

#pragma mark - ContactsRoot

@implementation ContactsRoot

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

#pragma mark - ContactsRoot_FileDescriptor

static GPBFileDescriptor *ContactsRoot_FileDescriptor(void) {
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

#pragma mark - PhoneToImport

@implementation PhoneToImport

@dynamic phoneNumber;
@dynamic hasName, name;

typedef struct PhoneToImport__storage_ {
  uint32_t _has_storage_[1];
  GPBStringValue *name;
  int64_t phoneNumber;
} PhoneToImport__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "phoneNumber",
        .dataTypeSpecific.clazz = Nil,
        .number = PhoneToImport_FieldNumber_PhoneNumber,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(PhoneToImport__storage_, phoneNumber),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt64,
      },
      {
        .name = "name",
        .dataTypeSpecific.clazz = GPBObjCClass(GPBStringValue),
        .number = PhoneToImport_FieldNumber_Name,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(PhoneToImport__storage_, name),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[PhoneToImport class]
                                     rootClass:[ContactsRoot class]
                                          file:ContactsRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(PhoneToImport__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - EmailToImport

@implementation EmailToImport

@dynamic email;
@dynamic hasName, name;

typedef struct EmailToImport__storage_ {
  uint32_t _has_storage_[1];
  NSString *email;
  GPBStringValue *name;
} EmailToImport__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "email",
        .dataTypeSpecific.clazz = Nil,
        .number = EmailToImport_FieldNumber_Email,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(EmailToImport__storage_, email),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeString,
      },
      {
        .name = "name",
        .dataTypeSpecific.clazz = GPBObjCClass(GPBStringValue),
        .number = EmailToImport_FieldNumber_Name,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(EmailToImport__storage_, name),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[EmailToImport class]
                                     rootClass:[ContactsRoot class]
                                          file:ContactsRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(EmailToImport__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - RequestImportContacts

@implementation RequestImportContacts

@dynamic phonesArray, phonesArray_Count;
@dynamic emailsArray, emailsArray_Count;
@dynamic optimizationsArray, optimizationsArray_Count;

typedef struct RequestImportContacts__storage_ {
  uint32_t _has_storage_[1];
  NSMutableArray *phonesArray;
  NSMutableArray *emailsArray;
  GPBEnumArray *optimizationsArray;
} RequestImportContacts__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "phonesArray",
        .dataTypeSpecific.clazz = GPBObjCClass(PhoneToImport),
        .number = RequestImportContacts_FieldNumber_PhonesArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(RequestImportContacts__storage_, phonesArray),
        .flags = GPBFieldRepeated,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "emailsArray",
        .dataTypeSpecific.clazz = GPBObjCClass(EmailToImport),
        .number = RequestImportContacts_FieldNumber_EmailsArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(RequestImportContacts__storage_, emailsArray),
        .flags = GPBFieldRepeated,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "optimizationsArray",
        .dataTypeSpecific.enumDescFunc = UpdateOptimization_EnumDescriptor,
        .number = RequestImportContacts_FieldNumber_OptimizationsArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(RequestImportContacts__storage_, optimizationsArray),
        .flags = (GPBFieldFlags)(GPBFieldRepeated | GPBFieldPacked | GPBFieldHasEnumDescriptor),
        .dataType = GPBDataTypeEnum,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[RequestImportContacts class]
                                     rootClass:[ContactsRoot class]
                                          file:ContactsRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(RequestImportContacts__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - ResponseImportContacts

@implementation ResponseImportContacts

@dynamic seq;
@dynamic state;
@dynamic userPeersArray, userPeersArray_Count;

typedef struct ResponseImportContacts__storage_ {
  uint32_t _has_storage_[1];
  int32_t seq;
  NSData *state;
  NSMutableArray *userPeersArray;
} ResponseImportContacts__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "seq",
        .dataTypeSpecific.clazz = Nil,
        .number = ResponseImportContacts_FieldNumber_Seq,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(ResponseImportContacts__storage_, seq),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt32,
      },
      {
        .name = "state",
        .dataTypeSpecific.clazz = Nil,
        .number = ResponseImportContacts_FieldNumber_State,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(ResponseImportContacts__storage_, state),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeBytes,
      },
      {
        .name = "userPeersArray",
        .dataTypeSpecific.clazz = GPBObjCClass(UserOutPeer),
        .number = ResponseImportContacts_FieldNumber_UserPeersArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(ResponseImportContacts__storage_, userPeersArray),
        .flags = GPBFieldRepeated,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[ResponseImportContacts class]
                                     rootClass:[ContactsRoot class]
                                          file:ContactsRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(ResponseImportContacts__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - RequestDeferredImportContacts

@implementation RequestDeferredImportContacts

@dynamic phonesArray, phonesArray_Count;
@dynamic emailsArray, emailsArray_Count;

typedef struct RequestDeferredImportContacts__storage_ {
  uint32_t _has_storage_[1];
  NSMutableArray *phonesArray;
  NSMutableArray *emailsArray;
} RequestDeferredImportContacts__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "phonesArray",
        .dataTypeSpecific.clazz = GPBObjCClass(PhoneToImport),
        .number = RequestDeferredImportContacts_FieldNumber_PhonesArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(RequestDeferredImportContacts__storage_, phonesArray),
        .flags = GPBFieldRepeated,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "emailsArray",
        .dataTypeSpecific.clazz = GPBObjCClass(EmailToImport),
        .number = RequestDeferredImportContacts_FieldNumber_EmailsArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(RequestDeferredImportContacts__storage_, emailsArray),
        .flags = GPBFieldRepeated,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[RequestDeferredImportContacts class]
                                     rootClass:[ContactsRoot class]
                                          file:ContactsRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(RequestDeferredImportContacts__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - ResponseDeferredImportContacts

@implementation ResponseDeferredImportContacts

@dynamic taskId;

typedef struct ResponseDeferredImportContacts__storage_ {
  uint32_t _has_storage_[1];
  NSString *taskId;
} ResponseDeferredImportContacts__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "taskId",
        .dataTypeSpecific.clazz = Nil,
        .number = ResponseDeferredImportContacts_FieldNumber_TaskId,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(ResponseDeferredImportContacts__storage_, taskId),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeString,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[ResponseDeferredImportContacts class]
                                     rootClass:[ContactsRoot class]
                                          file:ContactsRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(ResponseDeferredImportContacts__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - RequestGetContacts

@implementation RequestGetContacts

@dynamic contactsHash;
@dynamic optimizationsArray, optimizationsArray_Count;

typedef struct RequestGetContacts__storage_ {
  uint32_t _has_storage_[1];
  NSString *contactsHash;
  GPBEnumArray *optimizationsArray;
} RequestGetContacts__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "contactsHash",
        .dataTypeSpecific.clazz = Nil,
        .number = RequestGetContacts_FieldNumber_ContactsHash,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(RequestGetContacts__storage_, contactsHash),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeString,
      },
      {
        .name = "optimizationsArray",
        .dataTypeSpecific.enumDescFunc = UpdateOptimization_EnumDescriptor,
        .number = RequestGetContacts_FieldNumber_OptimizationsArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(RequestGetContacts__storage_, optimizationsArray),
        .flags = (GPBFieldFlags)(GPBFieldRepeated | GPBFieldPacked | GPBFieldHasEnumDescriptor),
        .dataType = GPBDataTypeEnum,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[RequestGetContacts class]
                                     rootClass:[ContactsRoot class]
                                          file:ContactsRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(RequestGetContacts__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - ResponseGetContacts

@implementation ResponseGetContacts

@dynamic isNotChanged;
@dynamic userPeersArray, userPeersArray_Count;

typedef struct ResponseGetContacts__storage_ {
  uint32_t _has_storage_[1];
  NSMutableArray *userPeersArray;
} ResponseGetContacts__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "isNotChanged",
        .dataTypeSpecific.clazz = Nil,
        .number = ResponseGetContacts_FieldNumber_IsNotChanged,
        .hasIndex = 0,
        .offset = 1,  // Stored in _has_storage_ to save space.
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeBool,
      },
      {
        .name = "userPeersArray",
        .dataTypeSpecific.clazz = GPBObjCClass(UserOutPeer),
        .number = ResponseGetContacts_FieldNumber_UserPeersArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(ResponseGetContacts__storage_, userPeersArray),
        .flags = GPBFieldRepeated,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[ResponseGetContacts class]
                                     rootClass:[ContactsRoot class]
                                          file:ContactsRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(ResponseGetContacts__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - RequestRemoveContact

@implementation RequestRemoveContact

@dynamic uid;
@dynamic accessHash;

typedef struct RequestRemoveContact__storage_ {
  uint32_t _has_storage_[1];
  int32_t uid;
  int64_t accessHash;
} RequestRemoveContact__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "uid",
        .dataTypeSpecific.clazz = Nil,
        .number = RequestRemoveContact_FieldNumber_Uid,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(RequestRemoveContact__storage_, uid),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt32,
      },
      {
        .name = "accessHash",
        .dataTypeSpecific.clazz = Nil,
        .number = RequestRemoveContact_FieldNumber_AccessHash,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(RequestRemoveContact__storage_, accessHash),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt64,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[RequestRemoveContact class]
                                     rootClass:[ContactsRoot class]
                                          file:ContactsRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(RequestRemoveContact__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - RequestAddContact

@implementation RequestAddContact

@dynamic uid;
@dynamic accessHash;

typedef struct RequestAddContact__storage_ {
  uint32_t _has_storage_[1];
  int32_t uid;
  int64_t accessHash;
} RequestAddContact__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "uid",
        .dataTypeSpecific.clazz = Nil,
        .number = RequestAddContact_FieldNumber_Uid,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(RequestAddContact__storage_, uid),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt32,
      },
      {
        .name = "accessHash",
        .dataTypeSpecific.clazz = Nil,
        .number = RequestAddContact_FieldNumber_AccessHash,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(RequestAddContact__storage_, accessHash),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt64,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[RequestAddContact class]
                                     rootClass:[ContactsRoot class]
                                          file:ContactsRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(RequestAddContact__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - RequestSearchContacts

@implementation RequestSearchContacts

@dynamic request;
@dynamic optimizationsArray, optimizationsArray_Count;

typedef struct RequestSearchContacts__storage_ {
  uint32_t _has_storage_[1];
  NSString *request;
  GPBEnumArray *optimizationsArray;
} RequestSearchContacts__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "request",
        .dataTypeSpecific.clazz = Nil,
        .number = RequestSearchContacts_FieldNumber_Request,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(RequestSearchContacts__storage_, request),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeString,
      },
      {
        .name = "optimizationsArray",
        .dataTypeSpecific.enumDescFunc = UpdateOptimization_EnumDescriptor,
        .number = RequestSearchContacts_FieldNumber_OptimizationsArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(RequestSearchContacts__storage_, optimizationsArray),
        .flags = (GPBFieldFlags)(GPBFieldRepeated | GPBFieldPacked | GPBFieldHasEnumDescriptor),
        .dataType = GPBDataTypeEnum,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[RequestSearchContacts class]
                                     rootClass:[ContactsRoot class]
                                          file:ContactsRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(RequestSearchContacts__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - ResponseSearchContacts

@implementation ResponseSearchContacts

@dynamic usersArray, usersArray_Count;
@dynamic userPeersArray, userPeersArray_Count;

typedef struct ResponseSearchContacts__storage_ {
  uint32_t _has_storage_[1];
  NSMutableArray *usersArray;
  NSMutableArray *userPeersArray;
} ResponseSearchContacts__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "usersArray",
        .dataTypeSpecific.clazz = GPBObjCClass(User),
        .number = ResponseSearchContacts_FieldNumber_UsersArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(ResponseSearchContacts__storage_, usersArray),
        .flags = GPBFieldRepeated,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "userPeersArray",
        .dataTypeSpecific.clazz = GPBObjCClass(UserOutPeer),
        .number = ResponseSearchContacts_FieldNumber_UserPeersArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(ResponseSearchContacts__storage_, userPeersArray),
        .flags = GPBFieldRepeated,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[ResponseSearchContacts class]
                                     rootClass:[ContactsRoot class]
                                          file:ContactsRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(ResponseSearchContacts__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - UpdateContactRegistered

@implementation UpdateContactRegistered

@dynamic uid;
@dynamic isSilent;
@dynamic date;
@dynamic hasMid, mid;

typedef struct UpdateContactRegistered__storage_ {
  uint32_t _has_storage_[1];
  int32_t uid;
  UUIDValue *mid;
  int64_t date;
} UpdateContactRegistered__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "uid",
        .dataTypeSpecific.clazz = Nil,
        .number = UpdateContactRegistered_FieldNumber_Uid,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(UpdateContactRegistered__storage_, uid),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt32,
      },
      {
        .name = "isSilent",
        .dataTypeSpecific.clazz = Nil,
        .number = UpdateContactRegistered_FieldNumber_IsSilent,
        .hasIndex = 1,
        .offset = 2,  // Stored in _has_storage_ to save space.
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeBool,
      },
      {
        .name = "date",
        .dataTypeSpecific.clazz = Nil,
        .number = UpdateContactRegistered_FieldNumber_Date,
        .hasIndex = 3,
        .offset = (uint32_t)offsetof(UpdateContactRegistered__storage_, date),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt64,
      },
      {
        .name = "mid",
        .dataTypeSpecific.clazz = GPBObjCClass(UUIDValue),
        .number = UpdateContactRegistered_FieldNumber_Mid,
        .hasIndex = 4,
        .offset = (uint32_t)offsetof(UpdateContactRegistered__storage_, mid),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[UpdateContactRegistered class]
                                     rootClass:[ContactsRoot class]
                                          file:ContactsRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(UpdateContactRegistered__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - UpdateContactsAdded

@implementation UpdateContactsAdded

@dynamic uidsArray, uidsArray_Count;
@dynamic hasTaskId, taskId;

typedef struct UpdateContactsAdded__storage_ {
  uint32_t _has_storage_[1];
  GPBInt32Array *uidsArray;
  GPBStringValue *taskId;
} UpdateContactsAdded__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "uidsArray",
        .dataTypeSpecific.clazz = Nil,
        .number = UpdateContactsAdded_FieldNumber_UidsArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(UpdateContactsAdded__storage_, uidsArray),
        .flags = (GPBFieldFlags)(GPBFieldRepeated | GPBFieldPacked),
        .dataType = GPBDataTypeInt32,
      },
      {
        .name = "taskId",
        .dataTypeSpecific.clazz = GPBObjCClass(GPBStringValue),
        .number = UpdateContactsAdded_FieldNumber_TaskId,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(UpdateContactsAdded__storage_, taskId),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[UpdateContactsAdded class]
                                     rootClass:[ContactsRoot class]
                                          file:ContactsRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(UpdateContactsAdded__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - UpdateContactsAddTaskSuspended

@implementation UpdateContactsAddTaskSuspended

@dynamic taskId;

typedef struct UpdateContactsAddTaskSuspended__storage_ {
  uint32_t _has_storage_[1];
  NSString *taskId;
} UpdateContactsAddTaskSuspended__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "taskId",
        .dataTypeSpecific.clazz = Nil,
        .number = UpdateContactsAddTaskSuspended_FieldNumber_TaskId,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(UpdateContactsAddTaskSuspended__storage_, taskId),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeString,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[UpdateContactsAddTaskSuspended class]
                                     rootClass:[ContactsRoot class]
                                          file:ContactsRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(UpdateContactsAddTaskSuspended__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - UpdateContactsRemoved

@implementation UpdateContactsRemoved

@dynamic uidsArray, uidsArray_Count;

typedef struct UpdateContactsRemoved__storage_ {
  uint32_t _has_storage_[1];
  GPBInt32Array *uidsArray;
} UpdateContactsRemoved__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "uidsArray",
        .dataTypeSpecific.clazz = Nil,
        .number = UpdateContactsRemoved_FieldNumber_UidsArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(UpdateContactsRemoved__storage_, uidsArray),
        .flags = (GPBFieldFlags)(GPBFieldRepeated | GPBFieldPacked),
        .dataType = GPBDataTypeInt32,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[UpdateContactsRemoved class]
                                     rootClass:[ContactsRoot class]
                                          file:ContactsRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(UpdateContactsRemoved__storage_)
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
