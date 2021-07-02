// Code generated by gRPC proto compiler.  DO NOT EDIT!
// source: events.proto

#if !defined(GPB_GRPC_PROTOCOL_ONLY) || !GPB_GRPC_PROTOCOL_ONLY
#import "Events.pbrpc.h"
#import "Events.pbobjc.h"
#import <ProtoRPC/ProtoRPCLegacy.h>
#import <RxLibrary/GRXWriter+Immediate.h>

#import "Annotations.pbobjc.h"
#import "Peers.pbobjc.h"
#import "Definitions.pbobjc.h"
#import "Messaging.pbobjc.h"
#import "Scalapb.pbobjc.h"

@implementation Events

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

// Designated initializer
- (instancetype)initWithHost:(NSString *)host callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [super initWithHost:host
                 packageName:@"dialog"
                 serviceName:@"Events"
                 callOptions:callOptions];
}

- (instancetype)initWithHost:(NSString *)host {
  return [super initWithHost:host
                 packageName:@"dialog"
                 serviceName:@"Events"];
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

#pragma mark LoadEvents(LoadEventsRequest) returns (LoadEventsResponse)

- (void)loadEventsWithRequest:(LoadEventsRequest *)request handler:(void(^)(LoadEventsResponse *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToLoadEventsWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
- (GRPCProtoCall *)RPCToLoadEventsWithRequest:(LoadEventsRequest *)request handler:(void(^)(LoadEventsResponse *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"LoadEvents"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[LoadEventsResponse class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
- (GRPCUnaryProtoCall *)loadEventsWithMessage:(LoadEventsRequest *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"LoadEvents"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[LoadEventsResponse class]];
}

@end
#endif
