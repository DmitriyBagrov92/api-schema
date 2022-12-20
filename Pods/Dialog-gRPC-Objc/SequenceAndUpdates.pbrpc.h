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
@class RequestGetDifference;
@class RequestGetPartialPeerInfo;
@class RequestGetReferencedEntities;
@class RequestGetState;
@class ResponseGetDifference;
@class ResponseGetPartialPeerInfo;
@class ResponseGetReferencedEntities;
@class ResponseGetState;
@class SeqUpdate;
@class WeakUpdate;
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
  #import "ConfigSync.pbobjc.h"
  #import "Contacts.pbobjc.h"
  #import "Privacy.pbobjc.h"
  #import "Peers.pbobjc.h"
  #import "Messaging.pbobjc.h"
  #import "Users.pbobjc.h"
  #import "Threads.pbobjc.h"
  #import "Reactions.pbobjc.h"
  #import "Permissions.pbobjc.h"
  #import "Scalapb.pbobjc.h"
  #import "Miniappsregistry.pbobjc.h"
  #import "Suggests.pbobjc.h"
  #import "Drafts.pbobjc.h"
#endif

@class GRPCUnaryProtoCall;
@class GRPCStreamingProtoCall;
@class GRPCCallOptions;
@protocol GRPCProtoResponseHandler;
@class GRPCProtoCall;


NS_ASSUME_NONNULL_BEGIN

@protocol SequenceAndUpdates2 <NSObject>

#pragma mark GetState(RequestGetState) returns (ResponseGetState)

/**
 * / Get last sequence number
 */
- (GRPCUnaryProtoCall *)getStateWithMessage:(RequestGetState *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark GetDifference(RequestGetDifference) returns (ResponseGetDifference)

/**
 * / Get all update that happens after given seq number
 */
- (GRPCUnaryProtoCall *)getDifferenceWithMessage:(RequestGetDifference *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark GetReferencedEntities(RequestGetReferencedEntities) returns (ResponseGetReferencedEntities)

/**
 * / Load some required entities
 */
- (GRPCUnaryProtoCall *)getReferencedEntitiesWithMessage:(RequestGetReferencedEntities *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark GetPartialPeerInfo(RequestGetPartialPeerInfo) returns (ResponseGetPartialPeerInfo)

- (GRPCUnaryProtoCall *)getPartialPeerInfoWithMessage:(RequestGetPartialPeerInfo *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark SeqUpdates(Empty) returns (stream SeqUpdate)

/**
 * / Get stream of the user's updates
 */
- (GRPCUnaryProtoCall *)seqUpdatesWithMessage:(GPBEmpty *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark WeakUpdates(stream WeakUpdateCommand) returns (stream WeakUpdate)

- (GRPCStreamingProtoCall *)weakUpdatesWithResponseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

@end

/**
 * The methods in this protocol belong to a set of old APIs that have been deprecated. They do not
 * recognize call options provided in the initializer. Using the v2 protocol is recommended.
 */
@protocol SequenceAndUpdates <NSObject>

#pragma mark GetState(RequestGetState) returns (ResponseGetState)

/**
 * / Get last sequence number
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)getStateWithRequest:(RequestGetState *)request handler:(void(^)(ResponseGetState *_Nullable response, NSError *_Nullable error))handler;

/**
 * / Get last sequence number
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToGetStateWithRequest:(RequestGetState *)request handler:(void(^)(ResponseGetState *_Nullable response, NSError *_Nullable error))handler;


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


#pragma mark GetReferencedEntities(RequestGetReferencedEntities) returns (ResponseGetReferencedEntities)

/**
 * / Load some required entities
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)getReferencedEntitiesWithRequest:(RequestGetReferencedEntities *)request handler:(void(^)(ResponseGetReferencedEntities *_Nullable response, NSError *_Nullable error))handler;

/**
 * / Load some required entities
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToGetReferencedEntitiesWithRequest:(RequestGetReferencedEntities *)request handler:(void(^)(ResponseGetReferencedEntities *_Nullable response, NSError *_Nullable error))handler;


#pragma mark GetPartialPeerInfo(RequestGetPartialPeerInfo) returns (ResponseGetPartialPeerInfo)

- (void)getPartialPeerInfoWithRequest:(RequestGetPartialPeerInfo *)request handler:(void(^)(ResponseGetPartialPeerInfo *_Nullable response, NSError *_Nullable error))handler;

- (GRPCProtoCall *)RPCToGetPartialPeerInfoWithRequest:(RequestGetPartialPeerInfo *)request handler:(void(^)(ResponseGetPartialPeerInfo *_Nullable response, NSError *_Nullable error))handler;


#pragma mark SeqUpdates(Empty) returns (stream SeqUpdate)

/**
 * / Get stream of the user's updates
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)seqUpdatesWithRequest:(GPBEmpty *)request eventHandler:(void(^)(BOOL done, SeqUpdate *_Nullable response, NSError *_Nullable error))eventHandler;

/**
 * / Get stream of the user's updates
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToSeqUpdatesWithRequest:(GPBEmpty *)request eventHandler:(void(^)(BOOL done, SeqUpdate *_Nullable response, NSError *_Nullable error))eventHandler;


#pragma mark WeakUpdates(stream WeakUpdateCommand) returns (stream WeakUpdate)

- (void)weakUpdatesWithRequestsWriter:(GRXWriter *)requestWriter eventHandler:(void(^)(BOOL done, WeakUpdate *_Nullable response, NSError *_Nullable error))eventHandler;

- (GRPCProtoCall *)RPCToWeakUpdatesWithRequestsWriter:(GRXWriter *)requestWriter eventHandler:(void(^)(BOOL done, WeakUpdate *_Nullable response, NSError *_Nullable error))eventHandler;


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

