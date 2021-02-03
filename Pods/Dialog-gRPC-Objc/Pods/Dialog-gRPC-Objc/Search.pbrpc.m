// Code generated by gRPC proto compiler.  DO NOT EDIT!
// source: search.proto

#if !defined(GPB_GRPC_PROTOCOL_ONLY) || !GPB_GRPC_PROTOCOL_ONLY
#import "Search.pbrpc.h"
#import "Search.pbobjc.h"
#import <ProtoRPC/ProtoRPCLegacy.h>
#import <RxLibrary/GRXWriter+Immediate.h>

#import "Wrappers.pbobjc.h"
#import "Annotations.pbobjc.h"
#import "Timestamp.pbobjc.h"
#import "Definitions.pbobjc.h"
#import "Groups.pbobjc.h"
#import "Peers.pbobjc.h"
#import "Messaging.pbobjc.h"
#import "Users.pbobjc.h"
#import "Miscellaneous.pbobjc.h"
#import "Scalapb.pbobjc.h"

@implementation Search

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

// Designated initializer
- (instancetype)initWithHost:(NSString *)host callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [super initWithHost:host
                 packageName:@"dialog"
                 serviceName:@"Search"
                 callOptions:callOptions];
}

- (instancetype)initWithHost:(NSString *)host {
  return [super initWithHost:host
                 packageName:@"dialog"
                 serviceName:@"Search"];
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

#pragma mark PeerSearch(RequestPeerSearch) returns (ResponsePeerSearch)

/**
 * / Search among groups/users/contacts
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)peerSearchWithRequest:(RequestPeerSearch *)request handler:(void(^)(ResponsePeerSearch *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToPeerSearchWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * / Search among groups/users/contacts
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToPeerSearchWithRequest:(RequestPeerSearch *)request handler:(void(^)(ResponsePeerSearch *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"PeerSearch"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[ResponsePeerSearch class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * / Search among groups/users/contacts
 */
- (GRPCUnaryProtoCall *)peerSearchWithMessage:(RequestPeerSearch *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"PeerSearch"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[ResponsePeerSearch class]];
}

#pragma mark ResolvePeer(RequestResolvePeer) returns (ResponseResolvePeer)

- (void)resolvePeerWithRequest:(RequestResolvePeer *)request handler:(void(^)(ResponseResolvePeer *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToResolvePeerWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
- (GRPCProtoCall *)RPCToResolvePeerWithRequest:(RequestResolvePeer *)request handler:(void(^)(ResponseResolvePeer *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"ResolvePeer"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[ResponseResolvePeer class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
- (GRPCUnaryProtoCall *)resolvePeerWithMessage:(RequestResolvePeer *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"ResolvePeer"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[ResponseResolvePeer class]];
}

#pragma mark MessageSearch(RequestMessageSearch) returns (ResponseMessageSearchResponse)

/**
 * / Search by messages
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)messageSearchWithRequest:(RequestMessageSearch *)request handler:(void(^)(ResponseMessageSearchResponse *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToMessageSearchWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * / Search by messages
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToMessageSearchWithRequest:(RequestMessageSearch *)request handler:(void(^)(ResponseMessageSearchResponse *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"MessageSearch"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[ResponseMessageSearchResponse class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * / Search by messages
 */
- (GRPCUnaryProtoCall *)messageSearchWithMessage:(RequestMessageSearch *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"MessageSearch"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[ResponseMessageSearchResponse class]];
}

#pragma mark MessageSearchMore(RequestMessageSearchMore) returns (ResponseMessageSearchResponse)

- (void)messageSearchMoreWithRequest:(RequestMessageSearchMore *)request handler:(void(^)(ResponseMessageSearchResponse *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToMessageSearchMoreWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
- (GRPCProtoCall *)RPCToMessageSearchMoreWithRequest:(RequestMessageSearchMore *)request handler:(void(^)(ResponseMessageSearchResponse *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"MessageSearchMore"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[ResponseMessageSearchResponse class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
- (GRPCUnaryProtoCall *)messageSearchMoreWithMessage:(RequestMessageSearchMore *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"MessageSearchMore"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[ResponseMessageSearchResponse class]];
}

#pragma mark SimpleSearch(RequestSimpleSearch) returns (ResponseMessageSearchResponse)

/**
 * / Custom search by conditions
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)simpleSearchWithRequest:(RequestSimpleSearch *)request handler:(void(^)(ResponseMessageSearchResponse *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToSimpleSearchWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * / Custom search by conditions
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToSimpleSearchWithRequest:(RequestSimpleSearch *)request handler:(void(^)(ResponseMessageSearchResponse *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"SimpleSearch"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[ResponseMessageSearchResponse class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * / Custom search by conditions
 */
- (GRPCUnaryProtoCall *)simpleSearchWithMessage:(RequestSimpleSearch *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"SimpleSearch"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[ResponseMessageSearchResponse class]];
}

#pragma mark SimpleSearchMore(RequestSimpleSearchMore) returns (ResponseMessageSearchResponse)

- (void)simpleSearchMoreWithRequest:(RequestSimpleSearchMore *)request handler:(void(^)(ResponseMessageSearchResponse *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToSimpleSearchMoreWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
- (GRPCProtoCall *)RPCToSimpleSearchMoreWithRequest:(RequestSimpleSearchMore *)request handler:(void(^)(ResponseMessageSearchResponse *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"SimpleSearchMore"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[ResponseMessageSearchResponse class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
- (GRPCUnaryProtoCall *)simpleSearchMoreWithMessage:(RequestSimpleSearchMore *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"SimpleSearchMore"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[ResponseMessageSearchResponse class]];
}

#pragma mark AutocompleteSuggestions(RequestFieldAutocomplete) returns (ResponseFieldAutocomplete)

/**
 * / Search for autocomplete suggestions among custom user profile
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)autocompleteSuggestionsWithRequest:(RequestFieldAutocomplete *)request handler:(void(^)(ResponseFieldAutocomplete *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToAutocompleteSuggestionsWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * / Search for autocomplete suggestions among custom user profile
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToAutocompleteSuggestionsWithRequest:(RequestFieldAutocomplete *)request handler:(void(^)(ResponseFieldAutocomplete *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"AutocompleteSuggestions"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[ResponseFieldAutocomplete class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * / Search for autocomplete suggestions among custom user profile
 */
- (GRPCUnaryProtoCall *)autocompleteSuggestionsWithMessage:(RequestFieldAutocomplete *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"AutocompleteSuggestions"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[ResponseFieldAutocomplete class]];
}

#pragma mark LoadUserSearchByPredicatesResults(RequestLoadUserSearchByPredicatesResults) returns (ResponseLoadUserSearchByPredicatesResults)

- (void)loadUserSearchByPredicatesResultsWithRequest:(RequestLoadUserSearchByPredicatesResults *)request handler:(void(^)(ResponseLoadUserSearchByPredicatesResults *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToLoadUserSearchByPredicatesResultsWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
- (GRPCProtoCall *)RPCToLoadUserSearchByPredicatesResultsWithRequest:(RequestLoadUserSearchByPredicatesResults *)request handler:(void(^)(ResponseLoadUserSearchByPredicatesResults *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"LoadUserSearchByPredicatesResults"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[ResponseLoadUserSearchByPredicatesResults class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
- (GRPCUnaryProtoCall *)loadUserSearchByPredicatesResultsWithMessage:(RequestLoadUserSearchByPredicatesResults *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"LoadUserSearchByPredicatesResults"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[ResponseLoadUserSearchByPredicatesResults class]];
}

#pragma mark LoadUserSearchByPredicatesCount(RequestLoadUserSearchByPredicatesCount) returns (ResponseLoadUserSearchByPredicatesCount)

- (void)loadUserSearchByPredicatesCountWithRequest:(RequestLoadUserSearchByPredicatesCount *)request handler:(void(^)(ResponseLoadUserSearchByPredicatesCount *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToLoadUserSearchByPredicatesCountWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
- (GRPCProtoCall *)RPCToLoadUserSearchByPredicatesCountWithRequest:(RequestLoadUserSearchByPredicatesCount *)request handler:(void(^)(ResponseLoadUserSearchByPredicatesCount *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"LoadUserSearchByPredicatesCount"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[ResponseLoadUserSearchByPredicatesCount class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
- (GRPCUnaryProtoCall *)loadUserSearchByPredicatesCountWithMessage:(RequestLoadUserSearchByPredicatesCount *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"LoadUserSearchByPredicatesCount"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[ResponseLoadUserSearchByPredicatesCount class]];
}

#pragma mark GetRecommendations(RequestGetRecommendations) returns (ResponseGetRecommendations)

- (void)getRecommendationsWithRequest:(RequestGetRecommendations *)request handler:(void(^)(ResponseGetRecommendations *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToGetRecommendationsWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
- (GRPCProtoCall *)RPCToGetRecommendationsWithRequest:(RequestGetRecommendations *)request handler:(void(^)(ResponseGetRecommendations *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"GetRecommendations"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[ResponseGetRecommendations class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
- (GRPCUnaryProtoCall *)getRecommendationsWithMessage:(RequestGetRecommendations *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"GetRecommendations"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[ResponseGetRecommendations class]];
}

@end
#endif
