// Code generated by gRPC proto compiler.  DO NOT EDIT!
// source: event_bus.proto

#if !defined(GPB_GRPC_FORWARD_DECLARE_MESSAGE_PROTO) || !GPB_GRPC_FORWARD_DECLARE_MESSAGE_PROTO
#import "EventBus.pbobjc.h"
#endif

#if !defined(GPB_GRPC_PROTOCOL_ONLY) || !GPB_GRPC_PROTOCOL_ONLY
#import <ProtoRPC/ProtoService.h>
#import <ProtoRPC/ProtoRPCLegacy.h>
#import <RxLibrary/GRXWriteable.h>
#import <RxLibrary/GRXWriter.h>
#endif

@class RequestJoinEventBus;
@class RequestKeepAliveEventBus;
@class RequestPostToEventBus;
@class ResponseJoinEventBus;
@class ResponseVoid;

#if !defined(GPB_GRPC_FORWARD_DECLARE_MESSAGE_PROTO) || !GPB_GRPC_FORWARD_DECLARE_MESSAGE_PROTO
  #import "Annotations.pbobjc.h"
  #import "Peers.pbobjc.h"
  #import "Definitions.pbobjc.h"
  #import "Miscellaneous.pbobjc.h"
  #import "Scalapb.pbobjc.h"
#endif

@class GRPCUnaryProtoCall;
@class GRPCStreamingProtoCall;
@class GRPCCallOptions;
@protocol GRPCProtoResponseHandler;
@class GRPCProtoCall;


NS_ASSUME_NONNULL_BEGIN

@protocol EventBus2 <NSObject>

#pragma mark JoinEventBus(RequestJoinEventBus) returns (ResponseJoinEventBus)

- (GRPCUnaryProtoCall *)joinEventBusWithMessage:(RequestJoinEventBus *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark KeepAliveEventBus(RequestKeepAliveEventBus) returns (ResponseVoid)

- (GRPCUnaryProtoCall *)keepAliveEventBusWithMessage:(RequestKeepAliveEventBus *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark PostToEventBus(RequestPostToEventBus) returns (ResponseVoid)

- (GRPCUnaryProtoCall *)postToEventBusWithMessage:(RequestPostToEventBus *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

@end

/**
 * The methods in this protocol belong to a set of old APIs that have been deprecated. They do not
 * recognize call options provided in the initializer. Using the v2 protocol is recommended.
 */
@protocol EventBus <NSObject>

#pragma mark JoinEventBus(RequestJoinEventBus) returns (ResponseJoinEventBus)

- (void)joinEventBusWithRequest:(RequestJoinEventBus *)request handler:(void(^)(ResponseJoinEventBus *_Nullable response, NSError *_Nullable error))handler;

- (GRPCProtoCall *)RPCToJoinEventBusWithRequest:(RequestJoinEventBus *)request handler:(void(^)(ResponseJoinEventBus *_Nullable response, NSError *_Nullable error))handler;


#pragma mark KeepAliveEventBus(RequestKeepAliveEventBus) returns (ResponseVoid)

- (void)keepAliveEventBusWithRequest:(RequestKeepAliveEventBus *)request handler:(void(^)(ResponseVoid *_Nullable response, NSError *_Nullable error))handler;

- (GRPCProtoCall *)RPCToKeepAliveEventBusWithRequest:(RequestKeepAliveEventBus *)request handler:(void(^)(ResponseVoid *_Nullable response, NSError *_Nullable error))handler;


#pragma mark PostToEventBus(RequestPostToEventBus) returns (ResponseVoid)

- (void)postToEventBusWithRequest:(RequestPostToEventBus *)request handler:(void(^)(ResponseVoid *_Nullable response, NSError *_Nullable error))handler;

- (GRPCProtoCall *)RPCToPostToEventBusWithRequest:(RequestPostToEventBus *)request handler:(void(^)(ResponseVoid *_Nullable response, NSError *_Nullable error))handler;


@end


#if !defined(GPB_GRPC_PROTOCOL_ONLY) || !GPB_GRPC_PROTOCOL_ONLY
/**
 * Basic service implementation, over gRPC, that only does
 * marshalling and parsing.
 */
@interface EventBus : GRPCProtoService<EventBus2, EventBus>
- (instancetype)initWithHost:(NSString *)host callOptions:(GRPCCallOptions *_Nullable)callOptions NS_DESIGNATED_INITIALIZER;
+ (instancetype)serviceWithHost:(NSString *)host callOptions:(GRPCCallOptions *_Nullable)callOptions;
// The following methods belong to a set of old APIs that have been deprecated.
- (instancetype)initWithHost:(NSString *)host;
+ (instancetype)serviceWithHost:(NSString *)host;
@end
#endif

NS_ASSUME_NONNULL_END

