// Code generated by gRPC proto compiler.  DO NOT EDIT!
// source: reactions.proto

#if !defined(GPB_GRPC_FORWARD_DECLARE_MESSAGE_PROTO) || !GPB_GRPC_FORWARD_DECLARE_MESSAGE_PROTO
#import "Reactions.pbobjc.h"
#endif

#if !defined(GPB_GRPC_PROTOCOL_ONLY) || !GPB_GRPC_PROTOCOL_ONLY
#import <ProtoRPC/ProtoService.h>
#import <ProtoRPC/ProtoRPCLegacy.h>
#import <RxLibrary/GRXWriteable.h>
#import <RxLibrary/GRXWriter.h>
#endif

@class GPBEmpty;
@class GetMessageReactionsRequest;
@class GetMessageReactionsResponse;
@class GetReactionsRequest;
@class GetReactionsResponse;
@class RequestRemoveMessageReaction;
@class RequestSetMessageReaction;

#if !defined(GPB_GRPC_FORWARD_DECLARE_MESSAGE_PROTO) || !GPB_GRPC_FORWARD_DECLARE_MESSAGE_PROTO
  #import "Empty.pbobjc.h"
  #import "Annotations.pbobjc.h"
  #import "Peers.pbobjc.h"
  #import "Definitions.pbobjc.h"
#endif

@class GRPCUnaryProtoCall;
@class GRPCStreamingProtoCall;
@class GRPCCallOptions;
@protocol GRPCProtoResponseHandler;
@class GRPCProtoCall;


NS_ASSUME_NONNULL_BEGIN

@protocol Reactions2 <NSObject>

#pragma mark GetReactions(GetReactionsRequest) returns (GetReactionsResponse)

- (GRPCUnaryProtoCall *)getReactionsWithMessage:(GetReactionsRequest *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark GetMessageReactions(GetMessageReactionsRequest) returns (GetMessageReactionsResponse)

- (GRPCUnaryProtoCall *)getMessageReactionsWithMessage:(GetMessageReactionsRequest *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark MessageSetReaction(RequestSetMessageReaction) returns (Empty)

- (GRPCUnaryProtoCall *)messageSetReactionWithMessage:(RequestSetMessageReaction *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark MessageRemoveReaction(RequestRemoveMessageReaction) returns (Empty)

- (GRPCUnaryProtoCall *)messageRemoveReactionWithMessage:(RequestRemoveMessageReaction *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

@end

/**
 * The methods in this protocol belong to a set of old APIs that have been deprecated. They do not
 * recognize call options provided in the initializer. Using the v2 protocol is recommended.
 */
@protocol Reactions <NSObject>

#pragma mark GetReactions(GetReactionsRequest) returns (GetReactionsResponse)

- (void)getReactionsWithRequest:(GetReactionsRequest *)request handler:(void(^)(GetReactionsResponse *_Nullable response, NSError *_Nullable error))handler;

- (GRPCProtoCall *)RPCToGetReactionsWithRequest:(GetReactionsRequest *)request handler:(void(^)(GetReactionsResponse *_Nullable response, NSError *_Nullable error))handler;


#pragma mark GetMessageReactions(GetMessageReactionsRequest) returns (GetMessageReactionsResponse)

- (void)getMessageReactionsWithRequest:(GetMessageReactionsRequest *)request handler:(void(^)(GetMessageReactionsResponse *_Nullable response, NSError *_Nullable error))handler;

- (GRPCProtoCall *)RPCToGetMessageReactionsWithRequest:(GetMessageReactionsRequest *)request handler:(void(^)(GetMessageReactionsResponse *_Nullable response, NSError *_Nullable error))handler;


#pragma mark MessageSetReaction(RequestSetMessageReaction) returns (Empty)

- (void)messageSetReactionWithRequest:(RequestSetMessageReaction *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler;

- (GRPCProtoCall *)RPCToMessageSetReactionWithRequest:(RequestSetMessageReaction *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler;


#pragma mark MessageRemoveReaction(RequestRemoveMessageReaction) returns (Empty)

- (void)messageRemoveReactionWithRequest:(RequestRemoveMessageReaction *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler;

- (GRPCProtoCall *)RPCToMessageRemoveReactionWithRequest:(RequestRemoveMessageReaction *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler;


@end


#if !defined(GPB_GRPC_PROTOCOL_ONLY) || !GPB_GRPC_PROTOCOL_ONLY
/**
 * Basic service implementation, over gRPC, that only does
 * marshalling and parsing.
 */
@interface Reactions : GRPCProtoService<Reactions2, Reactions>
- (instancetype)initWithHost:(NSString *)host callOptions:(GRPCCallOptions *_Nullable)callOptions NS_DESIGNATED_INITIALIZER;
+ (instancetype)serviceWithHost:(NSString *)host callOptions:(GRPCCallOptions *_Nullable)callOptions;
// The following methods belong to a set of old APIs that have been deprecated.
- (instancetype)initWithHost:(NSString *)host;
+ (instancetype)serviceWithHost:(NSString *)host;
@end
#endif

NS_ASSUME_NONNULL_END

