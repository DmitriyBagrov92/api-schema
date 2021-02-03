// Code generated by gRPC proto compiler.  DO NOT EDIT!
// source: presence.proto

#if !defined(GPB_GRPC_PROTOCOL_ONLY) || !GPB_GRPC_PROTOCOL_ONLY
#import "Presence.pbrpc.h"
#import "Presence.pbobjc.h"
#import <ProtoRPC/ProtoRPCLegacy.h>
#import <RxLibrary/GRXWriter+Immediate.h>

#import "Timestamp.pbobjc.h"
#import "Wrappers.pbobjc.h"
#import "Annotations.pbobjc.h"
#import "Definitions.pbobjc.h"
#import "Miscellaneous.pbobjc.h"
#import "Peers.pbobjc.h"
#import "Scalapb.pbobjc.h"

@implementation Presence

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

// Designated initializer
- (instancetype)initWithHost:(NSString *)host callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [super initWithHost:host
                 packageName:@"dialog"
                 serviceName:@"Presence"
                 callOptions:callOptions];
}

- (instancetype)initWithHost:(NSString *)host {
  return [super initWithHost:host
                 packageName:@"dialog"
                 serviceName:@"Presence"];
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

#pragma mark StartTyping(RequestStartTyping) returns (ResponseVoid)

- (void)startTypingWithRequest:(RequestStartTyping *)request handler:(void(^)(ResponseVoid *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToStartTypingWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
- (GRPCProtoCall *)RPCToStartTypingWithRequest:(RequestStartTyping *)request handler:(void(^)(ResponseVoid *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"StartTyping"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[ResponseVoid class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
- (GRPCUnaryProtoCall *)startTypingWithMessage:(RequestStartTyping *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"StartTyping"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[ResponseVoid class]];
}

#pragma mark StopTyping(RequestStopTyping) returns (ResponseVoid)

- (void)stopTypingWithRequest:(RequestStopTyping *)request handler:(void(^)(ResponseVoid *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToStopTypingWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
- (GRPCProtoCall *)RPCToStopTypingWithRequest:(RequestStopTyping *)request handler:(void(^)(ResponseVoid *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"StopTyping"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[ResponseVoid class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
- (GRPCUnaryProtoCall *)stopTypingWithMessage:(RequestStopTyping *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"StopTyping"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[ResponseVoid class]];
}

#pragma mark SetOnline(RequestSetOnline) returns (ResponseVoid)

- (void)setOnlineWithRequest:(RequestSetOnline *)request handler:(void(^)(ResponseVoid *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToSetOnlineWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
- (GRPCProtoCall *)RPCToSetOnlineWithRequest:(RequestSetOnline *)request handler:(void(^)(ResponseVoid *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"SetOnline"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[ResponseVoid class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
- (GRPCUnaryProtoCall *)setOnlineWithMessage:(RequestSetOnline *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"SetOnline"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[ResponseVoid class]];
}

#pragma mark GetUserLastPresence(RequestGetUserLastPresence) returns (ResponseUserLastPresence)

- (void)getUserLastPresenceWithRequest:(RequestGetUserLastPresence *)request handler:(void(^)(ResponseUserLastPresence *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToGetUserLastPresenceWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
- (GRPCProtoCall *)RPCToGetUserLastPresenceWithRequest:(RequestGetUserLastPresence *)request handler:(void(^)(ResponseUserLastPresence *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"GetUserLastPresence"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[ResponseUserLastPresence class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
- (GRPCUnaryProtoCall *)getUserLastPresenceWithMessage:(RequestGetUserLastPresence *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"GetUserLastPresence"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[ResponseUserLastPresence class]];
}

@end
#endif
