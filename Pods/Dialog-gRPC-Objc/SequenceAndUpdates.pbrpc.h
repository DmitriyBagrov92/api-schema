// Code generated by gRPC proto compiler.  DO NOT EDIT!
// source: sequence_and_updates.proto

#if !defined(GPB_GRPC_FORWARD_DECLARE_MESSAGE_PROTO) || !GPB_GRPC_FORWARD_DECLARE_MESSAGE_PROTO
#import "SequenceAndUpdates.pbobjc.h"
#endif

#if !defined(GPB_GRPC_PROTOCOL_ONLY) || !GPB_GRPC_PROTOCOL_ONLY
#import <ProtoRPC/ProtoService.h>
#import <ProtoRPC/ProtoRPCLegacy.h>
#import <RxLibrary/GRXWriteable.h>
#import <RxLibrary/GRXWriter.h>
#endif

@class GPBEmpty;
@class RequestGetDialogsDifference;
@class RequestGetDifference;
@class RequestGetPartialPeerInfo;
@class RequestGetReferencedEntitites;
@class RequestGetState;
@class RequestSubscribeFromGroupOnline;
@class RequestSubscribeFromOnline;
@class RequestSubscribeToGroupOnline;
@class RequestSubscribeToOnline;
@class ResponseGetDialogsDifference;
@class ResponseGetDifference;
@class ResponseGetPartialPeerInfo;
@class ResponseGetReferencedEntitites;
@class ResponseSeq;
@class ResponseVoid;
@class SeqUpdateBox;
@class WeakUpdateBox;
@class WeakUpdateCommand;

#if !defined(GPB_GRPC_FORWARD_DECLARE_MESSAGE_PROTO) || !GPB_GRPC_FORWARD_DECLARE_MESSAGE_PROTO
  #import "Wrappers.pbobjc.h"
  #import "Empty.pbobjc.h"
  #import "Annotations.pbobjc.h"
  #import "Definitions.pbobjc.h"
  #import "Miscellaneous.pbobjc.h"
  #import "Authentication.pbobjc.h"
  #import "Groups.pbobjc.h"
  #import "Stickers.pbobjc.h"
  #import "Presence.pbobjc.h"
  #import "EventBus.pbobjc.h"
  #import "WebRtc.pbobjc.h"
  #import "ConfigSync.pbobjc.h"
  #import "Counters.pbobjc.h"
  #import "Contacts.pbobjc.h"
  #import "Privacy.pbobjc.h"
  #import "Peers.pbobjc.h"
  #import "Messaging.pbobjc.h"
  #import "Users.pbobjc.h"
  #import "Spaces.pbobjc.h"
  #import "Reactions.pbobjc.h"
  #import "Permissions.pbobjc.h"
  #import "Events.pbobjc.h"
  #import "Scalapb.pbobjc.h"
  #import "Miniappsregistry.pbobjc.h"
  #import "Suggests.pbobjc.h"
#endif

@class GRPCUnaryProtoCall;
@class GRPCStreamingProtoCall;
@class GRPCCallOptions;
@protocol GRPCProtoResponseHandler;
@class GRPCProtoCall;


NS_ASSUME_NONNULL_BEGIN

@protocol SequenceAndUpdates2 <NSObject>

#pragma mark GetState(RequestGetState) returns (ResponseSeq)

/**
 * / Get last seq number
 */
- (GRPCUnaryProtoCall *)getStateWithMessage:(RequestGetState *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark GetDifference(RequestGetDifference) returns (ResponseGetDifference)

/**
 * / Get all update that happens after given seq number
 */
- (GRPCUnaryProtoCall *)getDifferenceWithMessage:(RequestGetDifference *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark GetDialogsDifference(RequestGetDialogsDifference) returns (ResponseGetDialogsDifference)

/**
 * / Load all dialogs that changed after given date
 */
- (GRPCUnaryProtoCall *)getDialogsDifferenceWithMessage:(RequestGetDialogsDifference *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark GetReferencedEntitites(RequestGetReferencedEntitites) returns (ResponseGetReferencedEntitites)

/**
 * / Load some required entities
 */
- (GRPCUnaryProtoCall *)getReferencedEntititesWithMessage:(RequestGetReferencedEntitites *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark GetPartialPeerInfo(RequestGetPartialPeerInfo) returns (ResponseGetPartialPeerInfo)

- (GRPCUnaryProtoCall *)getPartialPeerInfoWithMessage:(RequestGetPartialPeerInfo *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark SubscribeToOnline(RequestSubscribeToOnline) returns (ResponseVoid)

- (GRPCUnaryProtoCall *)subscribeToOnlineWithMessage:(RequestSubscribeToOnline *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark SubscribeFromOnline(RequestSubscribeFromOnline) returns (ResponseVoid)

- (GRPCUnaryProtoCall *)subscribeFromOnlineWithMessage:(RequestSubscribeFromOnline *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark SubscribeToGroupOnline(RequestSubscribeToGroupOnline) returns (ResponseVoid)

- (GRPCUnaryProtoCall *)subscribeToGroupOnlineWithMessage:(RequestSubscribeToGroupOnline *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark SubscribeFromGroupOnline(RequestSubscribeFromGroupOnline) returns (ResponseVoid)

- (GRPCUnaryProtoCall *)subscribeFromGroupOnlineWithMessage:(RequestSubscribeFromGroupOnline *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark SeqUpdates(Empty) returns (stream SeqUpdateBox)

/**
 * / Get stream of the user's updates
 */
- (GRPCUnaryProtoCall *)seqUpdatesWithMessage:(GPBEmpty *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark WeakUpdates(stream WeakUpdateCommand) returns (stream WeakUpdateBox)

- (GRPCStreamingProtoCall *)weakUpdatesWithResponseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

@end

/**
 * The methods in this protocol belong to a set of old APIs that have been deprecated. They do not
 * recognize call options provided in the initializer. Using the v2 protocol is recommended.
 */
@protocol SequenceAndUpdates <NSObject>

#pragma mark GetState(RequestGetState) returns (ResponseSeq)

/**
 * / Get last seq number
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)getStateWithRequest:(RequestGetState *)request handler:(void(^)(ResponseSeq *_Nullable response, NSError *_Nullable error))handler;

/**
 * / Get last seq number
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToGetStateWithRequest:(RequestGetState *)request handler:(void(^)(ResponseSeq *_Nullable response, NSError *_Nullable error))handler;


#pragma mark GetDifference(RequestGetDifference) returns (ResponseGetDifference)

/**
 * / Get all update that happens after given seq number
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)getDifferenceWithRequest:(RequestGetDifference *)request handler:(void(^)(ResponseGetDifference *_Nullable response, NSError *_Nullable error))handler;

/**
 * / Get all update that happens after given seq number
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToGetDifferenceWithRequest:(RequestGetDifference *)request handler:(void(^)(ResponseGetDifference *_Nullable response, NSError *_Nullable error))handler;


#pragma mark GetDialogsDifference(RequestGetDialogsDifference) returns (ResponseGetDialogsDifference)

/**
 * / Load all dialogs that changed after given date
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)getDialogsDifferenceWithRequest:(RequestGetDialogsDifference *)request handler:(void(^)(ResponseGetDialogsDifference *_Nullable response, NSError *_Nullable error))handler;

/**
 * / Load all dialogs that changed after given date
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToGetDialogsDifferenceWithRequest:(RequestGetDialogsDifference *)request handler:(void(^)(ResponseGetDialogsDifference *_Nullable response, NSError *_Nullable error))handler;


#pragma mark GetReferencedEntitites(RequestGetReferencedEntitites) returns (ResponseGetReferencedEntitites)

/**
 * / Load some required entities
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)getReferencedEntititesWithRequest:(RequestGetReferencedEntitites *)request handler:(void(^)(ResponseGetReferencedEntitites *_Nullable response, NSError *_Nullable error))handler;

/**
 * / Load some required entities
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToGetReferencedEntititesWithRequest:(RequestGetReferencedEntitites *)request handler:(void(^)(ResponseGetReferencedEntitites *_Nullable response, NSError *_Nullable error))handler;


#pragma mark GetPartialPeerInfo(RequestGetPartialPeerInfo) returns (ResponseGetPartialPeerInfo)

- (void)getPartialPeerInfoWithRequest:(RequestGetPartialPeerInfo *)request handler:(void(^)(ResponseGetPartialPeerInfo *_Nullable response, NSError *_Nullable error))handler;

- (GRPCProtoCall *)RPCToGetPartialPeerInfoWithRequest:(RequestGetPartialPeerInfo *)request handler:(void(^)(ResponseGetPartialPeerInfo *_Nullable response, NSError *_Nullable error))handler;


#pragma mark SubscribeToOnline(RequestSubscribeToOnline) returns (ResponseVoid)

- (void)subscribeToOnlineWithRequest:(RequestSubscribeToOnline *)request handler:(void(^)(ResponseVoid *_Nullable response, NSError *_Nullable error))handler;

- (GRPCProtoCall *)RPCToSubscribeToOnlineWithRequest:(RequestSubscribeToOnline *)request handler:(void(^)(ResponseVoid *_Nullable response, NSError *_Nullable error))handler;


#pragma mark SubscribeFromOnline(RequestSubscribeFromOnline) returns (ResponseVoid)

- (void)subscribeFromOnlineWithRequest:(RequestSubscribeFromOnline *)request handler:(void(^)(ResponseVoid *_Nullable response, NSError *_Nullable error))handler;

- (GRPCProtoCall *)RPCToSubscribeFromOnlineWithRequest:(RequestSubscribeFromOnline *)request handler:(void(^)(ResponseVoid *_Nullable response, NSError *_Nullable error))handler;


#pragma mark SubscribeToGroupOnline(RequestSubscribeToGroupOnline) returns (ResponseVoid)

- (void)subscribeToGroupOnlineWithRequest:(RequestSubscribeToGroupOnline *)request handler:(void(^)(ResponseVoid *_Nullable response, NSError *_Nullable error))handler;

- (GRPCProtoCall *)RPCToSubscribeToGroupOnlineWithRequest:(RequestSubscribeToGroupOnline *)request handler:(void(^)(ResponseVoid *_Nullable response, NSError *_Nullable error))handler;


#pragma mark SubscribeFromGroupOnline(RequestSubscribeFromGroupOnline) returns (ResponseVoid)

- (void)subscribeFromGroupOnlineWithRequest:(RequestSubscribeFromGroupOnline *)request handler:(void(^)(ResponseVoid *_Nullable response, NSError *_Nullable error))handler;

- (GRPCProtoCall *)RPCToSubscribeFromGroupOnlineWithRequest:(RequestSubscribeFromGroupOnline *)request handler:(void(^)(ResponseVoid *_Nullable response, NSError *_Nullable error))handler;


#pragma mark SeqUpdates(Empty) returns (stream SeqUpdateBox)

/**
 * / Get stream of the user's updates
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)seqUpdatesWithRequest:(GPBEmpty *)request eventHandler:(void(^)(BOOL done, SeqUpdateBox *_Nullable response, NSError *_Nullable error))eventHandler;

/**
 * / Get stream of the user's updates
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToSeqUpdatesWithRequest:(GPBEmpty *)request eventHandler:(void(^)(BOOL done, SeqUpdateBox *_Nullable response, NSError *_Nullable error))eventHandler;


#pragma mark WeakUpdates(stream WeakUpdateCommand) returns (stream WeakUpdateBox)

- (void)weakUpdatesWithRequestsWriter:(GRXWriter *)requestWriter eventHandler:(void(^)(BOOL done, WeakUpdateBox *_Nullable response, NSError *_Nullable error))eventHandler;

- (GRPCProtoCall *)RPCToWeakUpdatesWithRequestsWriter:(GRXWriter *)requestWriter eventHandler:(void(^)(BOOL done, WeakUpdateBox *_Nullable response, NSError *_Nullable error))eventHandler;


@end


#if !defined(GPB_GRPC_PROTOCOL_ONLY) || !GPB_GRPC_PROTOCOL_ONLY
/**
 * Basic service implementation, over gRPC, that only does
 * marshalling and parsing.
 */
@interface SequenceAndUpdates : GRPCProtoService<SequenceAndUpdates2, SequenceAndUpdates>
- (instancetype)initWithHost:(NSString *)host callOptions:(GRPCCallOptions *_Nullable)callOptions NS_DESIGNATED_INITIALIZER;
+ (instancetype)serviceWithHost:(NSString *)host callOptions:(GRPCCallOptions *_Nullable)callOptions;
// The following methods belong to a set of old APIs that have been deprecated.
- (instancetype)initWithHost:(NSString *)host;
+ (instancetype)serviceWithHost:(NSString *)host;
@end
#endif

NS_ASSUME_NONNULL_END

