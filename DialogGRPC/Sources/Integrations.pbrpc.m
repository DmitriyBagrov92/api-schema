// Code generated by gRPC proto compiler.  DO NOT EDIT!
// source: integrations.proto

#if !defined(GPB_GRPC_PROTOCOL_ONLY) || !GPB_GRPC_PROTOCOL_ONLY
#import "Integrations.pbrpc.h"
#import "Integrations.pbobjc.h"
#import <ProtoRPC/ProtoRPCLegacy.h>
#import <RxLibrary/GRXWriter+Immediate.h>

#import "Annotations.pbobjc.h"
#import "Definitions.pbobjc.h"
#import "Peers.pbobjc.h"
#import "Scalapb.pbobjc.h"

@implementation Integrations

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

// Designated initializer
- (instancetype)initWithHost:(NSString *)host callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [super initWithHost:host
                 packageName:@"dialog"
                 serviceName:@"Integrations"
                 callOptions:callOptions];
}

- (instancetype)initWithHost:(NSString *)host {
  return [super initWithHost:host
                 packageName:@"dialog"
                 serviceName:@"Integrations"];
}

#pragma clang diagnostic pop

// Override superclass initializer to disallow different package and service names.
- (instancetype)initWithHost:(NSString *)host
                 packageName:(NSString *)packageName
                 serviceName:(NSString *)serviceName {
  return [self initWithHost:host];
}

- (instancetype)initWithHost:(NSString *)host
                 packageName:(NSString *)packageName
                 serviceName:(NSString *)serviceName
                 callOptions:(GRPCCallOptions *)callOptions {
  return [self initWithHost:host callOptions:callOptions];
}

#pragma mark - Class Methods

+ (instancetype)serviceWithHost:(NSString *)host {
  return [[self alloc] initWithHost:host];
}

+ (instancetype)serviceWithHost:(NSString *)host callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [[self alloc] initWithHost:host callOptions:callOptions];
}

#pragma mark - Method Implementations

#pragma mark GetIntegrationToken(RequestGetIntegrationToken) returns (ResponseIntegrationToken)

/**
 * / Get token for posting to group
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)getIntegrationTokenWithRequest:(RequestGetIntegrationToken *)request handler:(void(^)(ResponseIntegrationToken *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToGetIntegrationTokenWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * / Get token for posting to group
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToGetIntegrationTokenWithRequest:(RequestGetIntegrationToken *)request handler:(void(^)(ResponseIntegrationToken *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"GetIntegrationToken"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[ResponseIntegrationToken class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * / Get token for posting to group
 */
- (GRPCUnaryProtoCall *)getIntegrationTokenWithMessage:(RequestGetIntegrationToken *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"GetIntegrationToken"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[ResponseIntegrationToken class]];
}

#pragma mark RevokeIntegrationToken(RequestRevokeIntegrationToken) returns (ResponseIntegrationToken)

/**
 * / Revoke token
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)revokeIntegrationTokenWithRequest:(RequestRevokeIntegrationToken *)request handler:(void(^)(ResponseIntegrationToken *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToRevokeIntegrationTokenWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * / Revoke token
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToRevokeIntegrationTokenWithRequest:(RequestRevokeIntegrationToken *)request handler:(void(^)(ResponseIntegrationToken *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"RevokeIntegrationToken"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[ResponseIntegrationToken class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * / Revoke token
 */
- (GRPCUnaryProtoCall *)revokeIntegrationTokenWithMessage:(RequestRevokeIntegrationToken *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"RevokeIntegrationToken"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[ResponseIntegrationToken class]];
}

@end
#endif
