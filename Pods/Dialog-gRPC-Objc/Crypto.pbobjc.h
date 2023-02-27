// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: crypto.proto

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

@class GPBBytesValue;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - CryptoRoot

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
GPB_FINAL @interface CryptoRoot : GPBRootObject
@end

#pragma mark - RequestKeyExchange

typedef GPB_ENUM(RequestKeyExchange_FieldNumber) {
  RequestKeyExchange_FieldNumber_ClientKey = 1,
};

/**
 * / Запрос на обмен публичными ключами
 **/
GPB_FINAL @interface RequestKeyExchange : GPBMessage

/** / Публичный ключ клиента */
@property(nonatomic, readwrite, strong, null_resettable) GPBBytesValue *clientKey;
/** Test to see if @c clientKey has been set. */
@property(nonatomic, readwrite) BOOL hasClientKey;

@end

#pragma mark - ResponseKeyExchange

typedef GPB_ENUM(ResponseKeyExchange_FieldNumber) {
  ResponseKeyExchange_FieldNumber_ServerKey = 1,
};

/**
 * / Ответ на запрос на обмен публичными ключами
 **/
GPB_FINAL @interface ResponseKeyExchange : GPBMessage

/** / Публичный ключ сервера */
@property(nonatomic, readwrite, strong, null_resettable) GPBBytesValue *serverKey;
/** Test to see if @c serverKey has been set. */
@property(nonatomic, readwrite) BOOL hasServerKey;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
