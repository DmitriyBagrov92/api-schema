// Code generated by gRPC proto compiler.  DO NOT EDIT!
// source: messaging.proto

#if !defined(GPB_GRPC_FORWARD_DECLARE_MESSAGE_PROTO) || !GPB_GRPC_FORWARD_DECLARE_MESSAGE_PROTO
#import "Messaging.pbobjc.h"
#endif

#if !defined(GPB_GRPC_PROTOCOL_ONLY) || !GPB_GRPC_PROTOCOL_ONLY
#import <ProtoRPC/ProtoService.h>
#import <ProtoRPC/ProtoRPCLegacy.h>
#import <RxLibrary/GRXWriteable.h>
#import <RxLibrary/GRXWriter.h>
#endif

@class GPBEmpty;
@class RequestClearChat;
@class RequestCountForeignMessages;
@class RequestDeleteChat;
@class RequestDeleteMessage;
@class RequestDialogListDifference;
@class RequestDoInteractiveMediaAction;
@class RequestFavouriteDialog;
@class RequestFetchDialogIndex;
@class RequestGetLastConversationMessages;
@class RequestGetUpdatedMessages;
@class RequestHistoryDifference;
@class RequestLoadDialogs;
@class RequestLoadHistory;
@class RequestLoadHistoryLight;
@class RequestMessageRead;
@class RequestMessageReads;
@class RequestMessageReceived;
@class RequestMessageReceives;
@class RequestMuteChat;
@class RequestNotifyDialogOpened;
@class RequestPinMessage;
@class RequestReadDialogLater;
@class RequestSendMessage;
@class RequestSendMessageAsync;
@class RequestUnfavouriteDialog;
@class RequestUnmuteChat;
@class RequestUnpinMessage;
@class RequestUpdateMessage;
@class ResponseCountForeignMessages;
@class ResponseDialogListDifference;
@class ResponseFetchDialogIndex;
@class ResponseGetLastConversationMessages;
@class ResponseGetUpdatedMessages;
@class ResponseHistoryDifference;
@class ResponseLoadDialogs;
@class ResponseLoadHistory;
@class ResponseLoadHistoryLight;
@class ResponseMessageReads;
@class ResponseMessageReceives;
@class ResponseSendMessage;

#if !defined(GPB_GRPC_FORWARD_DECLARE_MESSAGE_PROTO) || !GPB_GRPC_FORWARD_DECLARE_MESSAGE_PROTO
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
#endif

@class GRPCUnaryProtoCall;
@class GRPCStreamingProtoCall;
@class GRPCCallOptions;
@protocol GRPCProtoResponseHandler;
@class GRPCProtoCall;


NS_ASSUME_NONNULL_BEGIN

@protocol Messaging2 <NSObject>

#pragma mark DoInteractiveMediaAction(RequestDoInteractiveMediaAction) returns (Empty)

/**
 * / Interact with a message media (click on button for example)
 */
- (GRPCUnaryProtoCall *)doInteractiveMediaActionWithMessage:(RequestDoInteractiveMediaAction *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark SendMessage(RequestSendMessage) returns (ResponseSendMessage)

- (GRPCUnaryProtoCall *)sendMessageWithMessage:(RequestSendMessage *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark SendMessageAsync(RequestSendMessageAsync) returns (Empty)

- (GRPCUnaryProtoCall *)sendMessageAsyncWithMessage:(RequestSendMessageAsync *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark UpdateMessage(RequestUpdateMessage) returns (Empty)

- (GRPCUnaryProtoCall *)updateMessageWithMessage:(RequestUpdateMessage *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark MessageReceived(RequestMessageReceived) returns (Empty)

/**
 * / Mark message as received by self
 */
- (GRPCUnaryProtoCall *)messageReceivedWithMessage:(RequestMessageReceived *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark MessageRead(RequestMessageRead) returns (Empty)

/**
 * / Mark message as read by self
 */
- (GRPCUnaryProtoCall *)messageReadWithMessage:(RequestMessageRead *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark DeleteMessage(RequestDeleteMessage) returns (Empty)

- (GRPCUnaryProtoCall *)deleteMessageWithMessage:(RequestDeleteMessage *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark ClearChat(RequestClearChat) returns (Empty)

/**
 * / Clear chat history
 */
- (GRPCUnaryProtoCall *)clearChatWithMessage:(RequestClearChat *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark DeleteChat(RequestDeleteChat) returns (Empty)

- (GRPCUnaryProtoCall *)deleteChatWithMessage:(RequestDeleteChat *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark LoadHistory(RequestLoadHistory) returns (ResponseLoadHistory)

/**
 * / Load conversation history
 */
- (GRPCUnaryProtoCall *)loadHistoryWithMessage:(RequestLoadHistory *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark LoadHistoryLight(RequestLoadHistoryLight) returns (ResponseLoadHistoryLight)

/**
 * / Load conversation history
 */
- (GRPCUnaryProtoCall *)loadHistoryLightWithMessage:(RequestLoadHistoryLight *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark CountForeignMessages(RequestCountForeignMessages) returns (ResponseCountForeignMessages)

- (GRPCUnaryProtoCall *)countForeignMessagesWithMessage:(RequestCountForeignMessages *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark HistoryDifference(RequestHistoryDifference) returns (ResponseHistoryDifference)

/**
 * / Load total history difference for all user's conversations
 */
- (GRPCUnaryProtoCall *)historyDifferenceWithMessage:(RequestHistoryDifference *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark LoadDialogs(RequestLoadDialogs) returns (ResponseLoadDialogs)

/**
 * / Load user's dialogs
 */
- (GRPCUnaryProtoCall *)loadDialogsWithMessage:(RequestLoadDialogs *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark FetchDialogIndex(RequestFetchDialogIndex) returns (ResponseFetchDialogIndex)

/**
 * / Load short info about all user's dialogs
 */
- (GRPCUnaryProtoCall *)fetchDialogIndexWithMessage:(RequestFetchDialogIndex *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark DialogListDifference(RequestDialogListDifference) returns (ResponseDialogListDifference)

/**
 * / Load dialogs by peers
 */
- (GRPCUnaryProtoCall *)dialogListDifferenceWithMessage:(RequestDialogListDifference *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark GetLastConversationMessages(RequestGetLastConversationMessages) returns (ResponseGetLastConversationMessages)

/**
 * / Load last messages of the given conversations
 */
- (GRPCUnaryProtoCall *)getLastConversationMessagesWithMessage:(RequestGetLastConversationMessages *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark FavouriteDialog(RequestFavouriteDialog) returns (Empty)

- (GRPCUnaryProtoCall *)favouriteDialogWithMessage:(RequestFavouriteDialog *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark UnfavouriteDialog(RequestUnfavouriteDialog) returns (Empty)

- (GRPCUnaryProtoCall *)unfavouriteDialogWithMessage:(RequestUnfavouriteDialog *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark NotifyDialogOpened(RequestNotifyDialogOpened) returns (Empty)

- (GRPCUnaryProtoCall *)notifyDialogOpenedWithMessage:(RequestNotifyDialogOpened *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark PinMessage(RequestPinMessage) returns (Empty)

- (GRPCUnaryProtoCall *)pinMessageWithMessage:(RequestPinMessage *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark UnpinMessage(RequestUnpinMessage) returns (Empty)

- (GRPCUnaryProtoCall *)unpinMessageWithMessage:(RequestUnpinMessage *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark MuteChat(RequestMuteChat) returns (Empty)

- (GRPCUnaryProtoCall *)muteChatWithMessage:(RequestMuteChat *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark UnmuteChat(RequestUnmuteChat) returns (Empty)

- (GRPCUnaryProtoCall *)unmuteChatWithMessage:(RequestUnmuteChat *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark GetUpdatedMessages(RequestGetUpdatedMessages) returns (ResponseGetUpdatedMessages)

- (GRPCUnaryProtoCall *)getUpdatedMessagesWithMessage:(RequestGetUpdatedMessages *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark GetMessageReads(RequestMessageReads) returns (ResponseMessageReads)

/**
 * Returns read status of the message per user
 */
- (GRPCUnaryProtoCall *)getMessageReadsWithMessage:(RequestMessageReads *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark GetMessageReceives(RequestMessageReceives) returns (ResponseMessageReceives)

/**
 * Returns receive status of the message per user
 */
- (GRPCUnaryProtoCall *)getMessageReceivesWithMessage:(RequestMessageReceives *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

#pragma mark ReadDialogLater(RequestReadDialogLater) returns (Empty)

- (GRPCUnaryProtoCall *)readDialogLaterWithMessage:(RequestReadDialogLater *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions;

@end

/**
 * The methods in this protocol belong to a set of old APIs that have been deprecated. They do not
 * recognize call options provided in the initializer. Using the v2 protocol is recommended.
 */
@protocol Messaging <NSObject>

#pragma mark DoInteractiveMediaAction(RequestDoInteractiveMediaAction) returns (Empty)

/**
 * / Interact with a message media (click on button for example)
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)doInteractiveMediaActionWithRequest:(RequestDoInteractiveMediaAction *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler;

/**
 * / Interact with a message media (click on button for example)
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToDoInteractiveMediaActionWithRequest:(RequestDoInteractiveMediaAction *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler;


#pragma mark SendMessage(RequestSendMessage) returns (ResponseSendMessage)

- (void)sendMessageWithRequest:(RequestSendMessage *)request handler:(void(^)(ResponseSendMessage *_Nullable response, NSError *_Nullable error))handler;

- (GRPCProtoCall *)RPCToSendMessageWithRequest:(RequestSendMessage *)request handler:(void(^)(ResponseSendMessage *_Nullable response, NSError *_Nullable error))handler;


#pragma mark SendMessageAsync(RequestSendMessageAsync) returns (Empty)

- (void)sendMessageAsyncWithRequest:(RequestSendMessageAsync *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler;

- (GRPCProtoCall *)RPCToSendMessageAsyncWithRequest:(RequestSendMessageAsync *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler;


#pragma mark UpdateMessage(RequestUpdateMessage) returns (Empty)

- (void)updateMessageWithRequest:(RequestUpdateMessage *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler;

- (GRPCProtoCall *)RPCToUpdateMessageWithRequest:(RequestUpdateMessage *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler;


#pragma mark MessageReceived(RequestMessageReceived) returns (Empty)

/**
 * / Mark message as received by self
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)messageReceivedWithRequest:(RequestMessageReceived *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler;

/**
 * / Mark message as received by self
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToMessageReceivedWithRequest:(RequestMessageReceived *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler;


#pragma mark MessageRead(RequestMessageRead) returns (Empty)

/**
 * / Mark message as read by self
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)messageReadWithRequest:(RequestMessageRead *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler;

/**
 * / Mark message as read by self
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToMessageReadWithRequest:(RequestMessageRead *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler;


#pragma mark DeleteMessage(RequestDeleteMessage) returns (Empty)

- (void)deleteMessageWithRequest:(RequestDeleteMessage *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler;

- (GRPCProtoCall *)RPCToDeleteMessageWithRequest:(RequestDeleteMessage *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler;


#pragma mark ClearChat(RequestClearChat) returns (Empty)

/**
 * / Clear chat history
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)clearChatWithRequest:(RequestClearChat *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler;

/**
 * / Clear chat history
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToClearChatWithRequest:(RequestClearChat *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler;


#pragma mark DeleteChat(RequestDeleteChat) returns (Empty)

- (void)deleteChatWithRequest:(RequestDeleteChat *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler;

- (GRPCProtoCall *)RPCToDeleteChatWithRequest:(RequestDeleteChat *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler;


#pragma mark LoadHistory(RequestLoadHistory) returns (ResponseLoadHistory)

/**
 * / Load conversation history
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)loadHistoryWithRequest:(RequestLoadHistory *)request handler:(void(^)(ResponseLoadHistory *_Nullable response, NSError *_Nullable error))handler;

/**
 * / Load conversation history
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToLoadHistoryWithRequest:(RequestLoadHistory *)request handler:(void(^)(ResponseLoadHistory *_Nullable response, NSError *_Nullable error))handler;


#pragma mark LoadHistoryLight(RequestLoadHistoryLight) returns (ResponseLoadHistoryLight)

/**
 * / Load conversation history
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)loadHistoryLightWithRequest:(RequestLoadHistoryLight *)request handler:(void(^)(ResponseLoadHistoryLight *_Nullable response, NSError *_Nullable error))handler;

/**
 * / Load conversation history
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToLoadHistoryLightWithRequest:(RequestLoadHistoryLight *)request handler:(void(^)(ResponseLoadHistoryLight *_Nullable response, NSError *_Nullable error))handler;


#pragma mark CountForeignMessages(RequestCountForeignMessages) returns (ResponseCountForeignMessages)

- (void)countForeignMessagesWithRequest:(RequestCountForeignMessages *)request handler:(void(^)(ResponseCountForeignMessages *_Nullable response, NSError *_Nullable error))handler;

- (GRPCProtoCall *)RPCToCountForeignMessagesWithRequest:(RequestCountForeignMessages *)request handler:(void(^)(ResponseCountForeignMessages *_Nullable response, NSError *_Nullable error))handler;


#pragma mark HistoryDifference(RequestHistoryDifference) returns (ResponseHistoryDifference)

/**
 * / Load total history difference for all user's conversations
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)historyDifferenceWithRequest:(RequestHistoryDifference *)request handler:(void(^)(ResponseHistoryDifference *_Nullable response, NSError *_Nullable error))handler;

/**
 * / Load total history difference for all user's conversations
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToHistoryDifferenceWithRequest:(RequestHistoryDifference *)request handler:(void(^)(ResponseHistoryDifference *_Nullable response, NSError *_Nullable error))handler;


#pragma mark LoadDialogs(RequestLoadDialogs) returns (ResponseLoadDialogs)

/**
 * / Load user's dialogs
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)loadDialogsWithRequest:(RequestLoadDialogs *)request handler:(void(^)(ResponseLoadDialogs *_Nullable response, NSError *_Nullable error))handler;

/**
 * / Load user's dialogs
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToLoadDialogsWithRequest:(RequestLoadDialogs *)request handler:(void(^)(ResponseLoadDialogs *_Nullable response, NSError *_Nullable error))handler;


#pragma mark FetchDialogIndex(RequestFetchDialogIndex) returns (ResponseFetchDialogIndex)

/**
 * / Load short info about all user's dialogs
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)fetchDialogIndexWithRequest:(RequestFetchDialogIndex *)request handler:(void(^)(ResponseFetchDialogIndex *_Nullable response, NSError *_Nullable error))handler;

/**
 * / Load short info about all user's dialogs
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToFetchDialogIndexWithRequest:(RequestFetchDialogIndex *)request handler:(void(^)(ResponseFetchDialogIndex *_Nullable response, NSError *_Nullable error))handler;


#pragma mark DialogListDifference(RequestDialogListDifference) returns (ResponseDialogListDifference)

/**
 * / Load dialogs by peers
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)dialogListDifferenceWithRequest:(RequestDialogListDifference *)request handler:(void(^)(ResponseDialogListDifference *_Nullable response, NSError *_Nullable error))handler;

/**
 * / Load dialogs by peers
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToDialogListDifferenceWithRequest:(RequestDialogListDifference *)request handler:(void(^)(ResponseDialogListDifference *_Nullable response, NSError *_Nullable error))handler;


#pragma mark GetLastConversationMessages(RequestGetLastConversationMessages) returns (ResponseGetLastConversationMessages)

/**
 * / Load last messages of the given conversations
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)getLastConversationMessagesWithRequest:(RequestGetLastConversationMessages *)request handler:(void(^)(ResponseGetLastConversationMessages *_Nullable response, NSError *_Nullable error))handler;

/**
 * / Load last messages of the given conversations
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToGetLastConversationMessagesWithRequest:(RequestGetLastConversationMessages *)request handler:(void(^)(ResponseGetLastConversationMessages *_Nullable response, NSError *_Nullable error))handler;


#pragma mark FavouriteDialog(RequestFavouriteDialog) returns (Empty)

- (void)favouriteDialogWithRequest:(RequestFavouriteDialog *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler;

- (GRPCProtoCall *)RPCToFavouriteDialogWithRequest:(RequestFavouriteDialog *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler;


#pragma mark UnfavouriteDialog(RequestUnfavouriteDialog) returns (Empty)

- (void)unfavouriteDialogWithRequest:(RequestUnfavouriteDialog *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler;

- (GRPCProtoCall *)RPCToUnfavouriteDialogWithRequest:(RequestUnfavouriteDialog *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler;


#pragma mark NotifyDialogOpened(RequestNotifyDialogOpened) returns (Empty)

- (void)notifyDialogOpenedWithRequest:(RequestNotifyDialogOpened *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler;

- (GRPCProtoCall *)RPCToNotifyDialogOpenedWithRequest:(RequestNotifyDialogOpened *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler;


#pragma mark PinMessage(RequestPinMessage) returns (Empty)

- (void)pinMessageWithRequest:(RequestPinMessage *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler;

- (GRPCProtoCall *)RPCToPinMessageWithRequest:(RequestPinMessage *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler;


#pragma mark UnpinMessage(RequestUnpinMessage) returns (Empty)

- (void)unpinMessageWithRequest:(RequestUnpinMessage *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler;

- (GRPCProtoCall *)RPCToUnpinMessageWithRequest:(RequestUnpinMessage *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler;


#pragma mark MuteChat(RequestMuteChat) returns (Empty)

- (void)muteChatWithRequest:(RequestMuteChat *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler;

- (GRPCProtoCall *)RPCToMuteChatWithRequest:(RequestMuteChat *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler;


#pragma mark UnmuteChat(RequestUnmuteChat) returns (Empty)

- (void)unmuteChatWithRequest:(RequestUnmuteChat *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler;

- (GRPCProtoCall *)RPCToUnmuteChatWithRequest:(RequestUnmuteChat *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler;


#pragma mark GetUpdatedMessages(RequestGetUpdatedMessages) returns (ResponseGetUpdatedMessages)

- (void)getUpdatedMessagesWithRequest:(RequestGetUpdatedMessages *)request handler:(void(^)(ResponseGetUpdatedMessages *_Nullable response, NSError *_Nullable error))handler;

- (GRPCProtoCall *)RPCToGetUpdatedMessagesWithRequest:(RequestGetUpdatedMessages *)request handler:(void(^)(ResponseGetUpdatedMessages *_Nullable response, NSError *_Nullable error))handler;


#pragma mark GetMessageReads(RequestMessageReads) returns (ResponseMessageReads)

/**
 * Returns read status of the message per user
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)getMessageReadsWithRequest:(RequestMessageReads *)request handler:(void(^)(ResponseMessageReads *_Nullable response, NSError *_Nullable error))handler;

/**
 * Returns read status of the message per user
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToGetMessageReadsWithRequest:(RequestMessageReads *)request handler:(void(^)(ResponseMessageReads *_Nullable response, NSError *_Nullable error))handler;


#pragma mark GetMessageReceives(RequestMessageReceives) returns (ResponseMessageReceives)

/**
 * Returns receive status of the message per user
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (void)getMessageReceivesWithRequest:(RequestMessageReceives *)request handler:(void(^)(ResponseMessageReceives *_Nullable response, NSError *_Nullable error))handler;

/**
 * Returns receive status of the message per user
 *
 * This method belongs to a set of APIs that have been deprecated. Using the v2 API is recommended.
 */
- (GRPCProtoCall *)RPCToGetMessageReceivesWithRequest:(RequestMessageReceives *)request handler:(void(^)(ResponseMessageReceives *_Nullable response, NSError *_Nullable error))handler;


#pragma mark ReadDialogLater(RequestReadDialogLater) returns (Empty)

- (void)readDialogLaterWithRequest:(RequestReadDialogLater *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler;

- (GRPCProtoCall *)RPCToReadDialogLaterWithRequest:(RequestReadDialogLater *)request handler:(void(^)(GPBEmpty *_Nullable response, NSError *_Nullable error))handler;


@end


#if !defined(GPB_GRPC_PROTOCOL_ONLY) || !GPB_GRPC_PROTOCOL_ONLY
/**
 * Basic service implementation, over gRPC, that only does
 * marshalling and parsing.
 */
@interface Messaging : GRPCProtoService<Messaging2, Messaging>
- (instancetype)initWithHost:(NSString *)host callOptions:(GRPCCallOptions *_Nullable)callOptions NS_DESIGNATED_INITIALIZER;
+ (instancetype)serviceWithHost:(NSString *)host callOptions:(GRPCCallOptions *_Nullable)callOptions;
// The following methods belong to a set of old APIs that have been deprecated.
- (instancetype)initWithHost:(NSString *)host;
+ (instancetype)serviceWithHost:(NSString *)host;
@end
#endif

NS_ASSUME_NONNULL_END

