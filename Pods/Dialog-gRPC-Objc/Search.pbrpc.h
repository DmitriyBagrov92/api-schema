// Code generated by gRPC proto compiler.  DO NOT EDIT!
// source: search.proto

#if !defined(GPB_GRPC_FORWARD_DECLARE_MESSAGE_PROTO) || !GPB_GRPC_FORWARD_DECLARE_MESSAGE_PROTO
#import "Search.pbobjc.h"
#endif

#if !defined(GPB_GRPC_PROTOCOL_ONLY) || !GPB_GRPC_PROTOCOL_ONLY
#import <ProtoRPC/ProtoService.h>
#import <ProtoRPC/ProtoRPCLegacy.h>
#import <RxLibrary/GRXWriteable.h>
#import <RxLibrary/GRXWriter.h>
#endif

@class RequestFieldAutocomplete;
@class RequestGetPromotedPeers;
@class RequestGetRecommendations;
@class RequestLoadUserSearchByPredicatesCount;
@class RequestLoadUserSearchByPredicatesResults;
@class RequestMessageSearch;
@class RequestMessageSearchMore;
@class RequestPeerSearch;
@class RequestResolvePeer;
@class RequestSimpleSearch;
@class RequestSimpleSearchMore;
@class ResponseFieldAutocomplete;
@class ResponseGetPromotedPeers;
@class ResponseGetRecommendations;
@class ResponseLoadUserSearchByPredicatesCount;
@class ResponseLoadUserSearchByPredicatesResults;
@class ResponseMessageSearchResponse;
@class ResponsePeerSearch;
@class ResponseResolvePeer;

#if !defined(GPB_GRPC_FORWARD_DECLARE_MESSAGE_PROTO) || !GPB_GRPC_FORWARD_DECLARE_MESSAGE_PROTO
  #import "Wrappers.pbobjc.h"
  #import "Annotations.pbobjc.h"
  #import "Definitions.pbobjc.h"
  #import "Peers.pbobjc.h"
  #import "Messaging.pbobjc.h"
  #import "Scalapb.pbobjc.h"
#endif

@class GRPCUnaryProtoCall;
@class GRPCStreamingProtoCall;
@class GRPCCallOptions;
@protocol GRPCProtoResponseHandler;
@class GRPCProtoCall;


NS_ASSUME_NONNULL_BEGIN

@protocol Search2 <NSObject>

#pragma mark PeerSearch(RequestPeerSearch) returns (ResponsePeerSearch)

/**
 * / Search among groups/users/contacts
 */
- (GRPCUnaryProtoCall *)peerSearchWithMessage:(RequestPeerSearch *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark ResolvePeer(RequestResolvePeer) returns (ResponseResolvePeer)

- (GRPCUnaryProtoCall *)resolvePeerWithMessage:(RequestResolvePeer *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark MessageSearch(RequestMessageSearch) returns (ResponseMessageSearchResponse)

/**
 * / Search by messages
 */
- (GRPCUnaryProtoCall *)messageSearchWithMessage:(RequestMessageSearch *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark MessageSearchMore(RequestMessageSearchMore) returns (ResponseMessageSearchResponse)

- (GRPCUnaryProtoCall *)messageSearchMoreWithMessage:(RequestMessageSearchMore *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark SimpleSearch(RequestSimpleSearch) returns (ResponseMessageSearchResponse)

/**
 * / Custom search by conditions
 */
- (GRPCUnaryProtoCall *)simpleSearchWithMessage:(RequestSimpleSearch *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark SimpleSearchMore(RequestSimpleSearchMore) returns (ResponseMessageSearchResponse)

- (GRPCUnaryProtoCall *)simpleSearchMoreWithMessage:(RequestSimpleSearchMore *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark AutocompleteSuggestions(RequestFieldAutocomplete) returns (ResponseFieldAutocomplete)

/**
 * / Search for autocomplete suggestions among custom user profile
 */
- (GRPCUnaryProtoCall *)autocompleteSuggestionsWithMessage:(RequestFieldAutocomplete *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark LoadUserSearchByPredicatesResults(RequestLoadUserSearchByPredicatesResults) returns (ResponseLoadUserSearchByPredicatesResults)

- (GRPCUnaryProtoCall *)loadUserSearchByPredicatesResultsWithMessage:(RequestLoadUserSearchByPredicatesResults *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark LoadUserSearchByPredicatesCount(RequestLoadUserSearchByPredicatesCount) returns (ResponseLoadUserSearchByPredicatesCount)

- (GRPCUnaryProtoCall *)loadUserSearchByPredicatesCountWithMessage:(RequestLoadUserSearchByPredicatesCount *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark GetRecommendations(RequestGetRecommendations) returns (ResponseGetRecommendations)

- (GRPCUnaryProtoCall *)getRecommendationsWithMessage:(RequestGetRecommendations *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark GetPromotedPeers(RequestGetPromotedPeers) returns (ResponseGetPromotedPeers)

- (GRPCUnaryProtoCall *)getPromotedPeersWithMessage:(RequestGetPromotedPeers *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

@end

/**
 * The methods in this protocol belong to a set of old APIs that have been deprecated. They do not
 * recognize call options provided in the initializer. Using the v2 protocol is recommended.
 */
@protocol Search <NSObject>

#pragma mark PeerSearch(RequestPeerSearch) returns (ResponsePeerSearch)

/**
 * / Search among groups/users/contacts
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)peerSearchWithRequest:(RequestPeerSearch *)request handler:(void(^)(ResponsePeerSearch *_Nullable response, NSError *_Nullable error))handler;

/**
 * / Search among groups/users/contacts
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToPeerSearchWithRequest:(RequestPeerSearch *)request handler:(void(^)(ResponsePeerSearch *_Nullable response, NSError *_Nullable error))handler;


#pragma mark ResolvePeer(RequestResolvePeer) returns (ResponseResolvePeer)

- (void)resolvePeerWithRequest:(RequestResolvePeer *)request handler:(void(^)(ResponseResolvePeer *_Nullable response, NSError *_Nullable error))handler;

- (GRPCProtoCall *)RPCToResolvePeerWithRequest:(RequestResolvePeer *)request handler:(void(^)(ResponseResolvePeer *_Nullable response, NSError *_Nullable error))handler;


#pragma mark MessageSearch(RequestMessageSearch) returns (ResponseMessageSearchResponse)

/**
 * / Search by messages
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)messageSearchWithRequest:(RequestMessageSearch *)request handler:(void(^)(ResponseMessageSearchResponse *_Nullable response, NSError *_Nullable error))handler;

/**
 * / Search by messages
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToMessageSearchWithRequest:(RequestMessageSearch *)request handler:(void(^)(ResponseMessageSearchResponse *_Nullable response, NSError *_Nullable error))handler;


#pragma mark MessageSearchMore(RequestMessageSearchMore) returns (ResponseMessageSearchResponse)

- (void)messageSearchMoreWithRequest:(RequestMessageSearchMore *)request handler:(void(^)(ResponseMessageSearchResponse *_Nullable response, NSError *_Nullable error))handler;

- (GRPCProtoCall *)RPCToMessageSearchMoreWithRequest:(RequestMessageSearchMore *)request handler:(void(^)(ResponseMessageSearchResponse *_Nullable response, NSError *_Nullable error))handler;


#pragma mark SimpleSearch(RequestSimpleSearch) returns (ResponseMessageSearchResponse)

/**
 * / Custom search by conditions
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)simpleSearchWithRequest:(RequestSimpleSearch *)request handler:(void(^)(ResponseMessageSearchResponse *_Nullable response, NSError *_Nullable error))handler;

/**
 * / Custom search by conditions
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToSimpleSearchWithRequest:(RequestSimpleSearch *)request handler:(void(^)(ResponseMessageSearchResponse *_Nullable response, NSError *_Nullable error))handler;


#pragma mark SimpleSearchMore(RequestSimpleSearchMore) returns (ResponseMessageSearchResponse)

- (void)simpleSearchMoreWithRequest:(RequestSimpleSearchMore *)request handler:(void(^)(ResponseMessageSearchResponse *_Nullable response, NSError *_Nullable error))handler;

- (GRPCProtoCall *)RPCToSimpleSearchMoreWithRequest:(RequestSimpleSearchMore *)request handler:(void(^)(ResponseMessageSearchResponse *_Nullable response, NSError *_Nullable error))handler;


#pragma mark AutocompleteSuggestions(RequestFieldAutocomplete) returns (ResponseFieldAutocomplete)

/**
 * / Search for autocomplete suggestions among custom user profile
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)autocompleteSuggestionsWithRequest:(RequestFieldAutocomplete *)request handler:(void(^)(ResponseFieldAutocomplete *_Nullable response, NSError *_Nullable error))handler;

/**
 * / Search for autocomplete suggestions among custom user profile
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToAutocompleteSuggestionsWithRequest:(RequestFieldAutocomplete *)request handler:(void(^)(ResponseFieldAutocomplete *_Nullable response, NSError *_Nullable error))handler;


#pragma mark LoadUserSearchByPredicatesResults(RequestLoadUserSearchByPredicatesResults) returns (ResponseLoadUserSearchByPredicatesResults)

- (void)loadUserSearchByPredicatesResultsWithRequest:(RequestLoadUserSearchByPredicatesResults *)request handler:(void(^)(ResponseLoadUserSearchByPredicatesResults *_Nullable response, NSError *_Nullable error))handler;

- (GRPCProtoCall *)RPCToLoadUserSearchByPredicatesResultsWithRequest:(RequestLoadUserSearchByPredicatesResults *)request handler:(void(^)(ResponseLoadUserSearchByPredicatesResults *_Nullable response, NSError *_Nullable error))handler;


#pragma mark LoadUserSearchByPredicatesCount(RequestLoadUserSearchByPredicatesCount) returns (ResponseLoadUserSearchByPredicatesCount)

- (void)loadUserSearchByPredicatesCountWithRequest:(RequestLoadUserSearchByPredicatesCount *)request handler:(void(^)(ResponseLoadUserSearchByPredicatesCount *_Nullable response, NSError *_Nullable error))handler;

- (GRPCProtoCall *)RPCToLoadUserSearchByPredicatesCountWithRequest:(RequestLoadUserSearchByPredicatesCount *)request handler:(void(^)(ResponseLoadUserSearchByPredicatesCount *_Nullable response, NSError *_Nullable error))handler;


#pragma mark GetRecommendations(RequestGetRecommendations) returns (ResponseGetRecommendations)

- (void)getRecommendationsWithRequest:(RequestGetRecommendations *)request handler:(void(^)(ResponseGetRecommendations *_Nullable response, NSError *_Nullable error))handler;

- (GRPCProtoCall *)RPCToGetRecommendationsWithRequest:(RequestGetRecommendations *)request handler:(void(^)(ResponseGetRecommendations *_Nullable response, NSError *_Nullable error))handler;


#pragma mark GetPromotedPeers(RequestGetPromotedPeers) returns (ResponseGetPromotedPeers)

- (void)getPromotedPeersWithRequest:(RequestGetPromotedPeers *)request handler:(void(^)(ResponseGetPromotedPeers *_Nullable response, NSError *_Nullable error))handler;

- (GRPCProtoCall *)RPCToGetPromotedPeersWithRequest:(RequestGetPromotedPeers *)request handler:(void(^)(ResponseGetPromotedPeers *_Nullable response, NSError *_Nullable error))handler;


@end


#if !defined(GPB_GRPC_PROTOCOL_ONLY) || !GPB_GRPC_PROTOCOL_ONLY
/**
 * Basic service implementation, over gRPC, that only does
 * marshalling and parsing.
 */
@interface Search : GRPCProtoService<Search2, Search>
- (instancetype)initWithHost:(NSString *)host callOptions:(GRPCCallOptions *_Nullable)callOptions NS_DESIGNATED_INITIALIZER;
+ (instancetype)serviceWithHost:(NSString *)host callOptions:(GRPCCallOptions *_Nullable)callOptions;
// The following methods belong to a set of old APIs that have been deprecated.
- (instancetype)initWithHost:(NSString *)host;
+ (instancetype)serviceWithHost:(NSString *)host;
@end
#endif

NS_ASSUME_NONNULL_END

