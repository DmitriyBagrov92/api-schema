// Code generated by gRPC proto compiler.  DO NOT EDIT!
// source: sequence_and_updates.proto

#if !defined(GPB_GRPC_PROTOCOL_ONLY) || !GPB_GRPC_PROTOCOL_ONLY
#import "SequenceAndUpdates.pbrpc.h"
#import "SequenceAndUpdates.pbobjc.h"
#import <ProtoRPC/ProtoRPCLegacy.h>
#import <RxLibrary/GRXWriter+Immediate.h>

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
#import "Reactions.pbobjc.h"
#import "Permissions.pbobjc.h"
#import "Events.pbobjc.h"
#import "Scalapb.pbobjc.h"
#import "Miniappsregistry.pbobjc.h"
#import "Suggests.pbobjc.h"
#import "Drafts.pbobjc.h"

@implementation SequenceAndUpdates

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

// Designated initializer
- (instancetype)initWithHost:(NSString *)host callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [super initWithHost:host
                 packageName:@"dialog"
                 serviceName:@"SequenceAndUpdates"
                 callOptions:callOptions];
}

- (instancetype)initWithHost:(NSString *)host {
  return [super initWithHost:host
                 packageName:@"dialog"
                 serviceName:@"SequenceAndUpdates"];
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

#pragma mark GetState(RequestGetState) returns (ResponseGetState)

/**
 * / Get last sequence number
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)getStateWithRequest:(RequestGetState *)request handler:(void(^)(ResponseGetState *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToGetStateWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * / Get last sequence number
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToGetStateWithRequest:(RequestGetState *)request handler:(void(^)(ResponseGetState *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"GetState"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[ResponseGetState class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * / Get last sequence number
 */
- (GRPCUnaryProtoCall *)getStateWithMessage:(RequestGetState *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"GetState"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[ResponseGetState class]];
}

#pragma mark GetDifference(RequestGetDifference) returns (ResponseGetDifference)

/**
 * / Get all update that happens after given seq number
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)getDifferenceWithRequest:(RequestGetDifference *)request handler:(void(^)(ResponseGetDifference *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToGetDifferenceWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * / Get all update that happens after given seq number
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToGetDifferenceWithRequest:(RequestGetDifference *)request handler:(void(^)(ResponseGetDifference *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"GetDifference"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[ResponseGetDifference class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * / Get all update that happens after given seq number
 */
- (GRPCUnaryProtoCall *)getDifferenceWithMessage:(RequestGetDifference *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"GetDifference"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[ResponseGetDifference class]];
}

#pragma mark GetDialogsDifference(RequestGetDialogsDifference) returns (ResponseGetDialogsDifference)

/**
 * / Load all dialogs that changed after given date
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)getDialogsDifferenceWithRequest:(RequestGetDialogsDifference *)request handler:(void(^)(ResponseGetDialogsDifference *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToGetDialogsDifferenceWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * / Load all dialogs that changed after given date
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToGetDialogsDifferenceWithRequest:(RequestGetDialogsDifference *)request handler:(void(^)(ResponseGetDialogsDifference *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"GetDialogsDifference"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[ResponseGetDialogsDifference class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * / Load all dialogs that changed after given date
 */
- (GRPCUnaryProtoCall *)getDialogsDifferenceWithMessage:(RequestGetDialogsDifference *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"GetDialogsDifference"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[ResponseGetDialogsDifference class]];
}

#pragma mark GetReferencedEntities(RequestGetReferencedEntities) returns (ResponseGetReferencedEntities)

/**
 * / Load some required entities
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)getReferencedEntitiesWithRequest:(RequestGetReferencedEntities *)request handler:(void(^)(ResponseGetReferencedEntities *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToGetReferencedEntitiesWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * / Load some required entities
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToGetReferencedEntitiesWithRequest:(RequestGetReferencedEntities *)request handler:(void(^)(ResponseGetReferencedEntities *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"GetReferencedEntities"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[ResponseGetReferencedEntities class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * / Load some required entities
 */
- (GRPCUnaryProtoCall *)getReferencedEntitiesWithMessage:(RequestGetReferencedEntities *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"GetReferencedEntities"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[ResponseGetReferencedEntities class]];
}

#pragma mark GetPartialPeerInfo(RequestGetPartialPeerInfo) returns (ResponseGetPartialPeerInfo)

- (void)getPartialPeerInfoWithRequest:(RequestGetPartialPeerInfo *)request handler:(void(^)(ResponseGetPartialPeerInfo *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToGetPartialPeerInfoWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
- (GRPCProtoCall *)RPCToGetPartialPeerInfoWithRequest:(RequestGetPartialPeerInfo *)request handler:(void(^)(ResponseGetPartialPeerInfo *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"GetPartialPeerInfo"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[ResponseGetPartialPeerInfo class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
- (GRPCUnaryProtoCall *)getPartialPeerInfoWithMessage:(RequestGetPartialPeerInfo *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"GetPartialPeerInfo"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[ResponseGetPartialPeerInfo class]];
}

#pragma mark SeqUpdates(Empty) returns (stream SeqUpdate)

/**
 * / Get stream of the user's updates
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)seqUpdatesWithRequest:(GPBEmpty *)request eventHandler:(void(^)(BOOL done, SeqUpdate *_Nullable response, NSError *_Nullable error))eventHandler{
  [[self RPCToSeqUpdatesWithRequest:request eventHandler:eventHandler] start];
}
// Returns a not-yet-started RPC object.
/**
 * / Get stream of the user's updates
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToSeqUpdatesWithRequest:(GPBEmpty *)request eventHandler:(void(^)(BOOL done, SeqUpdate *_Nullable response, NSError *_Nullable error))eventHandler{
  return [self RPCToMethod:@"SeqUpdates"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[SeqUpdate class]
        responsesWriteable:[GRXWriteable writeableWithEventHandler:eventHandler]];
}
/**
 * / Get stream of the user's updates
 */
- (GRPCUnaryProtoCall *)seqUpdatesWithMessage:(GPBEmpty *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"SeqUpdates"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[SeqUpdate class]];
}

#pragma mark WeakUpdates(stream WeakUpdateCommand) returns (stream WeakUpdate)

- (void)weakUpdatesWithRequestsWriter:(GRXWriter *)requestWriter eventHandler:(void(^)(BOOL done, WeakUpdate *_Nullable response, NSError *_Nullable error))eventHandler{
  [[self RPCToWeakUpdatesWithRequestsWriter:requestWriter eventHandler:eventHandler] start];
}
// Returns a not-yet-started RPC object.
- (GRPCProtoCall *)RPCToWeakUpdatesWithRequestsWriter:(GRXWriter *)requestWriter eventHandler:(void(^)(BOOL done, WeakUpdate *_Nullable response, NSError *_Nullable error))eventHandler{
  return [self RPCToMethod:@"WeakUpdates"
            requestsWriter:requestWriter
             responseClass:[WeakUpdate class]
        responsesWriteable:[GRXWriteable writeableWithEventHandler:eventHandler]];
}
- (GRPCStreamingProtoCall *)weakUpdatesWithResponseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"WeakUpdates"
           responseHandler:handler
               callOptions:callOptions
             responseClass:[WeakUpdate class]];
}

@end
#endif
