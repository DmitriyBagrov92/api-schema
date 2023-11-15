// Code generated by gRPC proto compiler.  DO NOT EDIT!
// source: messaging.proto

#if !defined(GPB_GRPC_PROTOCOL_ONLY) || !GPB_GRPC_PROTOCOL_ONLY
#import "Messaging.pbrpc.h"
#import "Messaging.pbobjc.h"
#import <ProtoRPC/ProtoRPCLegacy.h>
#import <RxLibrary/GRXWriter+Immediate.h>

#import "Wrappers.pbobjc.h"
#import "Empty.pbobjc.h"
#import "Duration.pbobjc.h"
#import "Annotations.pbobjc.h"
#import "Definitions.pbobjc.h"
#import "Miscellaneous.pbobjc.h"
#import "Peers.pbobjc.h"
#import "MediaAndFiles.pbobjc.h"
#import "Reactions.pbobjc.h"
#import "Scalapb.pbobjc.h"
#import "Groups.pbobjc.h"
#import "Threads.pbobjc.h"

@implementation Messaging

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

// Designated initializer
- (instancetype)initWithHost:(NSString *)host callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [super initWithHost:host
                 packageName:@"dialog"
                 serviceName:@"Messaging"
                 callOptions:callOptions];
}

- (instancetype)initWithHost:(NSString *)host {
  return [super initWithHost:host
                 packageName:@"dialog"
                 serviceName:@"Messaging"];
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

#pragma mark DoInteractiveMediaAction(RequestDoInteractiveMediaAction) returns (Empty)

/**
 * / Метод посылки действия с интерактивным виджетом 
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)doInteractiveMediaActionWithRequest:(RequestDoInteractiveMediaAction *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToDoInteractiveMediaActionWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * / Метод посылки действия с интерактивным виджетом 
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToDoInteractiveMediaActionWithRequest:(RequestDoInteractiveMediaAction *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"DoInteractiveMediaAction"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[GPBEmpty class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * / Метод посылки действия с интерактивным виджетом 
 */
- (GRPCUnaryProtoCall *)doInteractiveMediaActionWithMessage:(RequestDoInteractiveMediaAction *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"DoInteractiveMediaAction"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[GPBEmpty class]];
}

#pragma mark SendMessage(RequestSendMessage) returns (ResponseSendMessage)

/**
 * / Метод посылки сообщения
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)sendMessageWithRequest:(RequestSendMessage *)request handler:(void(^)(ResponseSendMessage *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToSendMessageWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * / Метод посылки сообщения
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToSendMessageWithRequest:(RequestSendMessage *)request handler:(void(^)(ResponseSendMessage *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"SendMessage"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[ResponseSendMessage class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * / Метод посылки сообщения
 */
- (GRPCUnaryProtoCall *)sendMessageWithMessage:(RequestSendMessage *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"SendMessage"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[ResponseSendMessage class]];
}

#pragma mark SendMessageAsync(RequestSendMessageAsync) returns (Empty)

/**
 * / Метод асинхронной посылки сообщения
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)sendMessageAsyncWithRequest:(RequestSendMessageAsync *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToSendMessageAsyncWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * / Метод асинхронной посылки сообщения
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToSendMessageAsyncWithRequest:(RequestSendMessageAsync *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"SendMessageAsync"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[GPBEmpty class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * / Метод асинхронной посылки сообщения
 */
- (GRPCUnaryProtoCall *)sendMessageAsyncWithMessage:(RequestSendMessageAsync *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"SendMessageAsync"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[GPBEmpty class]];
}

#pragma mark UpdateMessage(RequestUpdateMessage) returns (Empty)

/**
 * / Метод изменения сообщения
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)updateMessageWithRequest:(RequestUpdateMessage *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToUpdateMessageWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * / Метод изменения сообщения
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToUpdateMessageWithRequest:(RequestUpdateMessage *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"UpdateMessage"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[GPBEmpty class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * / Метод изменения сообщения
 */
- (GRPCUnaryProtoCall *)updateMessageWithMessage:(RequestUpdateMessage *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"UpdateMessage"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[GPBEmpty class]];
}

#pragma mark MessageReceived(RequestMessageReceived) returns (Empty)

/**
 * / Метод уведомления о получении сообщений
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)messageReceivedWithRequest:(RequestMessageReceived *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToMessageReceivedWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * / Метод уведомления о получении сообщений
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToMessageReceivedWithRequest:(RequestMessageReceived *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"MessageReceived"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[GPBEmpty class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * / Метод уведомления о получении сообщений
 */
- (GRPCUnaryProtoCall *)messageReceivedWithMessage:(RequestMessageReceived *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"MessageReceived"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[GPBEmpty class]];
}

#pragma mark MessageRead(RequestMessageRead) returns (Empty)

/**
 * / Метод уведомления о прочитке сообщений
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)messageReadWithRequest:(RequestMessageRead *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToMessageReadWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * / Метод уведомления о прочитке сообщений
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToMessageReadWithRequest:(RequestMessageRead *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"MessageRead"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[GPBEmpty class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * / Метод уведомления о прочитке сообщений
 */
- (GRPCUnaryProtoCall *)messageReadWithMessage:(RequestMessageRead *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"MessageRead"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[GPBEmpty class]];
}

#pragma mark DeleteMessage(RequestDeleteMessage) returns (Empty)

/**
 * / Метод удаления сообщения
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)deleteMessageWithRequest:(RequestDeleteMessage *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToDeleteMessageWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * / Метод удаления сообщения
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToDeleteMessageWithRequest:(RequestDeleteMessage *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"DeleteMessage"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[GPBEmpty class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * / Метод удаления сообщения
 */
- (GRPCUnaryProtoCall *)deleteMessageWithMessage:(RequestDeleteMessage *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"DeleteMessage"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[GPBEmpty class]];
}

#pragma mark ClearChat(RequestClearChat) returns (Empty)

/**
 * / Метод очистки чата
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)clearChatWithRequest:(RequestClearChat *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToClearChatWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * / Метод очистки чата
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToClearChatWithRequest:(RequestClearChat *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"ClearChat"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[GPBEmpty class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * / Метод очистки чата
 */
- (GRPCUnaryProtoCall *)clearChatWithMessage:(RequestClearChat *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"ClearChat"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[GPBEmpty class]];
}

#pragma mark DeleteChat(RequestDeleteChat) returns (Empty)

/**
 * / Метод удаления чата
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)deleteChatWithRequest:(RequestDeleteChat *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToDeleteChatWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * / Метод удаления чата
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToDeleteChatWithRequest:(RequestDeleteChat *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"DeleteChat"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[GPBEmpty class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * / Метод удаления чата
 */
- (GRPCUnaryProtoCall *)deleteChatWithMessage:(RequestDeleteChat *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"DeleteChat"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[GPBEmpty class]];
}

#pragma mark LoadMessageHistory(RequestLoadMessageHistory) returns (ResponseLoadHistory)

/**
 * / Метод загрузки ленты чата
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)loadMessageHistoryWithRequest:(RequestLoadMessageHistory *)request handler:(void(^)(ResponseLoadHistory *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToLoadMessageHistoryWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * / Метод загрузки ленты чата
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToLoadMessageHistoryWithRequest:(RequestLoadMessageHistory *)request handler:(void(^)(ResponseLoadHistory *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"LoadMessageHistory"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[ResponseLoadHistory class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * / Метод загрузки ленты чата
 */
- (GRPCUnaryProtoCall *)loadMessageHistoryWithMessage:(RequestLoadMessageHistory *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"LoadMessageHistory"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[ResponseLoadHistory class]];
}

#pragma mark LoadMentions(RequestLoadMentions) returns (ResponseLoadMentions)

/**
 * / Метод загрузки упоминаний
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)loadMentionsWithRequest:(RequestLoadMentions *)request handler:(void(^)(ResponseLoadMentions *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToLoadMentionsWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * / Метод загрузки упоминаний
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToLoadMentionsWithRequest:(RequestLoadMentions *)request handler:(void(^)(ResponseLoadMentions *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"LoadMentions"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[ResponseLoadMentions class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * / Метод загрузки упоминаний
 */
- (GRPCUnaryProtoCall *)loadMentionsWithMessage:(RequestLoadMentions *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"LoadMentions"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[ResponseLoadMentions class]];
}

#pragma mark LoadDialogs(RequestLoadDialogs) returns (ResponseLoadDialogs)

/**
 * / Метод загрузки списка диалогов
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)loadDialogsWithRequest:(RequestLoadDialogs *)request handler:(void(^)(ResponseLoadDialogs *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToLoadDialogsWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * / Метод загрузки списка диалогов
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToLoadDialogsWithRequest:(RequestLoadDialogs *)request handler:(void(^)(ResponseLoadDialogs *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"LoadDialogs"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[ResponseLoadDialogs class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * / Метод загрузки списка диалогов
 */
- (GRPCUnaryProtoCall *)loadDialogsWithMessage:(RequestLoadDialogs *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"LoadDialogs"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[ResponseLoadDialogs class]];
}

#pragma mark FavouriteDialog(RequestFavouriteDialog) returns (Empty)

/**
 * / Метод добавления чата в избранное
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)favouriteDialogWithRequest:(RequestFavouriteDialog *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToFavouriteDialogWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * / Метод добавления чата в избранное
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToFavouriteDialogWithRequest:(RequestFavouriteDialog *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"FavouriteDialog"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[GPBEmpty class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * / Метод добавления чата в избранное
 */
- (GRPCUnaryProtoCall *)favouriteDialogWithMessage:(RequestFavouriteDialog *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"FavouriteDialog"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[GPBEmpty class]];
}

#pragma mark UnfavouriteDialog(RequestUnfavouriteDialog) returns (Empty)

/**
 * / Метод удаления чата из избранного
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)unfavouriteDialogWithRequest:(RequestUnfavouriteDialog *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToUnfavouriteDialogWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * / Метод удаления чата из избранного
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToUnfavouriteDialogWithRequest:(RequestUnfavouriteDialog *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"UnfavouriteDialog"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[GPBEmpty class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * / Метод удаления чата из избранного
 */
- (GRPCUnaryProtoCall *)unfavouriteDialogWithMessage:(RequestUnfavouriteDialog *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"UnfavouriteDialog"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[GPBEmpty class]];
}

#pragma mark PinMessage(RequestPinMessage) returns (Empty)

/**
 * / Метод закрепления сообщения в чате
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)pinMessageWithRequest:(RequestPinMessage *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToPinMessageWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * / Метод закрепления сообщения в чате
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToPinMessageWithRequest:(RequestPinMessage *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"PinMessage"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[GPBEmpty class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * / Метод закрепления сообщения в чате
 */
- (GRPCUnaryProtoCall *)pinMessageWithMessage:(RequestPinMessage *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"PinMessage"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[GPBEmpty class]];
}

#pragma mark UnpinMessage(RequestUnpinMessage) returns (Empty)

/**
 * / Метод удаления закрепленного сообщения в чате
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)unpinMessageWithRequest:(RequestUnpinMessage *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToUnpinMessageWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * / Метод удаления закрепленного сообщения в чате
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToUnpinMessageWithRequest:(RequestUnpinMessage *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"UnpinMessage"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[GPBEmpty class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * / Метод удаления закрепленного сообщения в чате
 */
- (GRPCUnaryProtoCall *)unpinMessageWithMessage:(RequestUnpinMessage *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"UnpinMessage"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[GPBEmpty class]];
}

#pragma mark MuteChat(RequestMuteChat) returns (Empty)

/**
 * / Метод включения глушения уведомлений в чате
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)muteChatWithRequest:(RequestMuteChat *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToMuteChatWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * / Метод включения глушения уведомлений в чате
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToMuteChatWithRequest:(RequestMuteChat *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"MuteChat"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[GPBEmpty class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * / Метод включения глушения уведомлений в чате
 */
- (GRPCUnaryProtoCall *)muteChatWithMessage:(RequestMuteChat *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"MuteChat"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[GPBEmpty class]];
}

#pragma mark UnmuteChat(RequestUnmuteChat) returns (Empty)

/**
 * / Метод выключения глушения уведомлений в чате
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)unmuteChatWithRequest:(RequestUnmuteChat *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToUnmuteChatWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * / Метод выключения глушения уведомлений в чате
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToUnmuteChatWithRequest:(RequestUnmuteChat *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"UnmuteChat"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[GPBEmpty class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * / Метод выключения глушения уведомлений в чате
 */
- (GRPCUnaryProtoCall *)unmuteChatWithMessage:(RequestUnmuteChat *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"UnmuteChat"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[GPBEmpty class]];
}

#pragma mark GetMessageReads(RequestGetMessageReads) returns (ResponseGetMessageReads)

/**
 * / Метод загрузки списка прочиток сообщения
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)getMessageReadsWithRequest:(RequestGetMessageReads *)request handler:(void(^)(ResponseGetMessageReads *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToGetMessageReadsWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * / Метод загрузки списка прочиток сообщения
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToGetMessageReadsWithRequest:(RequestGetMessageReads *)request handler:(void(^)(ResponseGetMessageReads *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"GetMessageReads"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[ResponseGetMessageReads class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * / Метод загрузки списка прочиток сообщения
 */
- (GRPCUnaryProtoCall *)getMessageReadsWithMessage:(RequestGetMessageReads *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"GetMessageReads"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[ResponseGetMessageReads class]];
}

#pragma mark GetMessageReceives(RequestGetMessageReceives) returns (ResponseGetMessageReceives)

/**
 * / Мтод загрузки списка получивших сообщение
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)getMessageReceivesWithRequest:(RequestGetMessageReceives *)request handler:(void(^)(ResponseGetMessageReceives *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToGetMessageReceivesWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * / Мтод загрузки списка получивших сообщение
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToGetMessageReceivesWithRequest:(RequestGetMessageReceives *)request handler:(void(^)(ResponseGetMessageReceives *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"GetMessageReceives"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[ResponseGetMessageReceives class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * / Мтод загрузки списка получивших сообщение
 */
- (GRPCUnaryProtoCall *)getMessageReceivesWithMessage:(RequestGetMessageReceives *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"GetMessageReceives"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[ResponseGetMessageReceives class]];
}

#pragma mark ReadDialogLater(RequestReadDialogLater) returns (Empty)

/**
 * / Метод изменения флага отложенности прочитки
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)readDialogLaterWithRequest:(RequestReadDialogLater *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToReadDialogLaterWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
/**
 * / Метод изменения флага отложенности прочитки
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToReadDialogLaterWithRequest:(RequestReadDialogLater *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"ReadDialogLater"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[GPBEmpty class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
/**
 * / Метод изменения флага отложенности прочитки
 */
- (GRPCUnaryProtoCall *)readDialogLaterWithMessage:(RequestReadDialogLater *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"ReadDialogLater"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[GPBEmpty class]];
}

@end
#endif
