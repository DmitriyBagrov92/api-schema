// Code generated by gRPC proto compiler.  DO NOT EDIT!
// source: integrations.proto

#if !defined(GPB_GRPC_FORWARD_DECLARE_MESSAGE_PROTO) || !GPB_GRPC_FORWARD_DECLARE_MESSAGE_PROTO
#import "Integrations.pbobjc.h"
#endif

#if !defined(GPB_GRPC_PROTOCOL_ONLY) || !GPB_GRPC_PROTOCOL_ONLY
#import <ProtoRPC/ProtoService.h>
#import <ProtoRPC/ProtoRPCLegacy.h>
#import <RxLibrary/GRXWriteable.h>
#import <RxLibrary/GRXWriter.h>
#endif

@class RequestGetIntegrationToken;
@class RequestRevokeIntegrationToken;
@class ResponseIntegrationToken;

#if !defined(GPB_GRPC_FORWARD_DECLARE_MESSAGE_PROTO) || !GPB_GRPC_FORWARD_DECLARE_MESSAGE_PROTO
  #import "Annotations.pbobjc.h"
  #import "Definitions.pbobjc.h"
  #import "Peers.pbobjc.h"
  #import "Scalapb.pbobjc.h"
#endif

@class GRPCUnaryProtoCall;
@class GRPCStreamingProtoCall;
@class GRPCCallOptions;
@protocol GRPCProtoResponseHandler;
@class GRPCProtoCall;


NS_ASSUME_NONNULL_BEGIN

@protocol Integrations2 <NSObject>

#pragma mark GetIntegrationToken(RequestGetIntegrationToken) returns (ResponseIntegrationToken)

/**
 * / Get token for posting to group
 */
- (GRPCUnaryProtoCall *)getIntegrationTokenWithMessage:(RequestGetIntegrationToken *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark RevokeIntegrationToken(RequestRevokeIntegrationToken) returns (ResponseIntegrationToken)

/**
 * / Revoke token
 */
- (GRPCUnaryProtoCall *)revokeIntegrationTokenWithMessage:(RequestRevokeIntegrationToken *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

@end

/**
 * The methods in this protocol belong to a set of old APIs that have been deprecated. They do not
 * recognize call options provided in the initializer. Using the v2 protocol is recommended.
 */
@protocol Integrations <NSObject>

#pragma mark GetIntegrationToken(RequestGetIntegrationToken) returns (ResponseIntegrationToken)

/**
 * / Get token for posting to group
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)getIntegrationTokenWithRequest:(RequestGetIntegrationToken *)request handler:(void(^)(ResponseIntegrationToken *_Nullable response, NSError *_Nullable error))handler;

/**
 * / Get token for posting to group
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToGetIntegrationTokenWithRequest:(RequestGetIntegrationToken *)request handler:(void(^)(ResponseIntegrationToken *_Nullable response, NSError *_Nullable error))handler;


#pragma mark RevokeIntegrationToken(RequestRevokeIntegrationToken) returns (ResponseIntegrationToken)

/**
 * / Revoke token
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)revokeIntegrationTokenWithRequest:(RequestRevokeIntegrationToken *)request handler:(void(^)(ResponseIntegrationToken *_Nullable response, NSError *_Nullable error))handler;

/**
 * / Revoke token
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToRevokeIntegrationTokenWithRequest:(RequestRevokeIntegrationToken *)request handler:(void(^)(ResponseIntegrationToken *_Nullable response, NSError *_Nullable error))handler;


@end


#if !defined(GPB_GRPC_PROTOCOL_ONLY) || !GPB_GRPC_PROTOCOL_ONLY
/**
 * Basic service implementation, over gRPC, that only does
 * marshalling and parsing.
 */
@interface Integrations : GRPCProtoService<Integrations2, Integrations>
- (instancetype)initWithHost:(NSString *)host callOptions:(GRPCCallOptions *_Nullable)callOptions NS_DESIGNATED_INITIALIZER;
+ (instancetype)serviceWithHost:(NSString *)host callOptions:(GRPCCallOptions *_Nullable)callOptions;
// The following methods belong to a set of old APIs that have been deprecated.
- (instancetype)initWithHost:(NSString *)host;
+ (instancetype)serviceWithHost:(NSString *)host;
@end
#endif

NS_ASSUME_NONNULL_END

