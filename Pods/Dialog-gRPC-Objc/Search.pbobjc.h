// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: search.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30004
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30004 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

@class GPBBoolValue;
@class GPBBytesValue;
@class GPBInt32Value;
@class GPBInt64Value;
@class GPBStringValue;
@class GroupOutPeer;
@class MessageContent;
@class MessageSearchItem;
@class MessageSearchResult;
@class OutPeer;
@class Peer;
@class PeerSearchResult;
@class SearchAndCondition;
@class SearchCondition;
@class SearchOrCondition;
@class SearchPeerCondition;
@class SearchPeerContentType;
@class SearchPeerTypeCondition;
@class SearchPieceText;
@class SearchPredicate;
@class SearchSenderIdConfition;
@class SimpleContactSearchCondition;
@class SimpleGroupSearchCondition;
@class SimpleMessageSearchCondition;
@class SimplePeerSearchCondition;
@class SimpleSearchCondition;
@class SimpleUserProfileSearchCondition;
@class UUIDValue;
@class UserMatch;
@class UserOutPeer;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Enum SearchPeerType

typedef GPB_ENUM(SearchPeerType) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  SearchPeerType_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  SearchPeerType_SearchPeerTypeUnknown = 0,
  SearchPeerType_SearchPeerTypeGroups = 1,
  SearchPeerType_SearchPeerTypeContacts = 2,
  SearchPeerType_SearchPeerTypePublic = 3,
};

GPBEnumDescriptor *SearchPeerType_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL SearchPeerType_IsValidValue(int32_t value);

#pragma mark - Enum SearchContentType

typedef GPB_ENUM(SearchContentType) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  SearchContentType_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  SearchContentType_SearchContentTypeUnknown = 0,
  SearchContentType_SearchContentTypeAny = 1,
  SearchContentType_SearchContentTypeText = 2,
  SearchContentType_SearchContentTypeLinks = 3,
  SearchContentType_SearchContentTypeDocuments = 4,

  /** photo and video */
  SearchContentType_SearchContentTypeMedia = 5,

  /** voice */
  SearchContentType_SearchContentTypeAudio = 6,
};

GPBEnumDescriptor *SearchContentType_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL SearchContentType_IsValidValue(int32_t value);

#pragma mark - Enum SearchDirection

typedef GPB_ENUM(SearchDirection) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  SearchDirection_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  SearchDirection_SearchDirectionUnknown = 0,

  /** gt */
  SearchDirection_SearchDirectionForward = 1,

  /** lt */
  SearchDirection_SearchDirectionBackward = 2,
};

GPBEnumDescriptor *SearchDirection_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL SearchDirection_IsValidValue(int32_t value);

#pragma mark - SearchRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
GPB_FINAL @interface SearchRoot : GPBRootObject
@end

#pragma mark - SimpleContactSearchCondition

typedef GPB_ENUM(SimpleContactSearchCondition_FieldNumber) {
  SimpleContactSearchCondition_FieldNumber_Text = 1,
};

GPB_FINAL @interface SimpleContactSearchCondition : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *text;

@end

#pragma mark - SimpleMessageSearchCondition

typedef GPB_ENUM(SimpleMessageSearchCondition_FieldNumber) {
  SimpleMessageSearchCondition_FieldNumber_Peer = 1,
  SimpleMessageSearchCondition_FieldNumber_Text = 2,
  SimpleMessageSearchCondition_FieldNumber_Type = 3,
  SimpleMessageSearchCondition_FieldNumber_SearchDirection = 4,
  SimpleMessageSearchCondition_FieldNumber_DateFrom = 5,
  SimpleMessageSearchCondition_FieldNumber_Sender = 6,
};

GPB_FINAL @interface SimpleMessageSearchCondition : GPBMessage

/** where to search */
@property(nonatomic, readwrite, strong, null_resettable) Peer *peer;
/** Test to see if @c peer has been set. */
@property(nonatomic, readwrite) BOOL hasPeer;

/** search term */
@property(nonatomic, readwrite, copy, null_resettable) NSString *text;

/** content message type to search */
@property(nonatomic, readwrite) SearchContentType type;

/** search direction gt/lt */
@property(nonatomic, readwrite) SearchDirection searchDirection;

/** search message from */
@property(nonatomic, readwrite, strong, null_resettable) GPBInt64Value *dateFrom;
/** Test to see if @c dateFrom has been set. */
@property(nonatomic, readwrite) BOOL hasDateFrom;

/** only search messages from specific sender */
@property(nonatomic, readwrite, strong, null_resettable) Peer *sender;
/** Test to see if @c sender has been set. */
@property(nonatomic, readwrite) BOOL hasSender;

@end

/**
 * Fetches the raw value of a @c SimpleMessageSearchCondition's @c type property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t SimpleMessageSearchCondition_Type_RawValue(SimpleMessageSearchCondition *message);
/**
 * Sets the raw value of an @c SimpleMessageSearchCondition's @c type property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetSimpleMessageSearchCondition_Type_RawValue(SimpleMessageSearchCondition *message, int32_t value);

/**
 * Fetches the raw value of a @c SimpleMessageSearchCondition's @c searchDirection property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t SimpleMessageSearchCondition_SearchDirection_RawValue(SimpleMessageSearchCondition *message);
/**
 * Sets the raw value of an @c SimpleMessageSearchCondition's @c searchDirection property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetSimpleMessageSearchCondition_SearchDirection_RawValue(SimpleMessageSearchCondition *message, int32_t value);

#pragma mark - SimplePeerSearchCondition

typedef GPB_ENUM(SimplePeerSearchCondition_FieldNumber) {
  SimplePeerSearchCondition_FieldNumber_PeerType = 1,
  SimplePeerSearchCondition_FieldNumber_Text = 2,
};

/**
 * / Search among contacts/groups/users
 **/
GPB_FINAL @interface SimplePeerSearchCondition : GPBMessage

@property(nonatomic, readwrite) SearchPeerType peerType;

@property(nonatomic, readwrite, strong, null_resettable) GPBStringValue *text;
/** Test to see if @c text has been set. */
@property(nonatomic, readwrite) BOOL hasText;

@end

/**
 * Fetches the raw value of a @c SimplePeerSearchCondition's @c peerType property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t SimplePeerSearchCondition_PeerType_RawValue(SimplePeerSearchCondition *message);
/**
 * Sets the raw value of an @c SimplePeerSearchCondition's @c peerType property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetSimplePeerSearchCondition_PeerType_RawValue(SimplePeerSearchCondition *message, int32_t value);

#pragma mark - SimpleUserProfileSearchCondition

typedef GPB_ENUM(SimpleUserProfileSearchCondition_FieldNumber) {
  SimpleUserProfileSearchCondition_FieldNumber_QueryString = 1,
};

GPB_FINAL @interface SimpleUserProfileSearchCondition : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *queryString;

@end

#pragma mark - SimpleGroupSearchCondition

typedef GPB_ENUM(SimpleGroupSearchCondition_FieldNumber) {
  SimpleGroupSearchCondition_FieldNumber_QueryString = 1,
};

GPB_FINAL @interface SimpleGroupSearchCondition : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *queryString;

@end

#pragma mark - criterion

GPB_FINAL @interface criterion : GPBMessage

@end

#pragma mark - SimpleSearchCondition

typedef GPB_ENUM(SimpleSearchCondition_FieldNumber) {
  SimpleSearchCondition_FieldNumber_Contact = 1,
  SimpleSearchCondition_FieldNumber_Message = 2,
  SimpleSearchCondition_FieldNumber_Peer = 3,
  SimpleSearchCondition_FieldNumber_UserProfile = 4,
  SimpleSearchCondition_FieldNumber_Group = 5,
};

typedef GPB_ENUM(SimpleSearchCondition_Criterion_OneOfCase) {
  SimpleSearchCondition_Criterion_OneOfCase_GPBUnsetOneOfCase = 0,
  SimpleSearchCondition_Criterion_OneOfCase_Contact = 1,
  SimpleSearchCondition_Criterion_OneOfCase_Message = 2,
  SimpleSearchCondition_Criterion_OneOfCase_Peer = 3,
  SimpleSearchCondition_Criterion_OneOfCase_UserProfile = 4,
  SimpleSearchCondition_Criterion_OneOfCase_Group = 5,
};

GPB_FINAL @interface SimpleSearchCondition : GPBMessage

@property(nonatomic, readonly) SimpleSearchCondition_Criterion_OneOfCase criterionOneOfCase;

@property(nonatomic, readwrite, strong, null_resettable) SimpleContactSearchCondition *contact;

@property(nonatomic, readwrite, strong, null_resettable) SimpleMessageSearchCondition *message;

@property(nonatomic, readwrite, strong, null_resettable) SimplePeerSearchCondition *peer;

@property(nonatomic, readwrite, strong, null_resettable) SimpleUserProfileSearchCondition *userProfile;

@property(nonatomic, readwrite, strong, null_resettable) SimpleGroupSearchCondition *group;

@end

/**
 * Clears whatever value was set for the oneof 'criterion'.
 **/
void SimpleSearchCondition_ClearCriterionOneOfCase(SimpleSearchCondition *message);

#pragma mark - SearchCondition

typedef GPB_ENUM(SearchCondition_FieldNumber) {
  SearchCondition_FieldNumber_SearchPeerTypeCondition = 1,
  SearchCondition_FieldNumber_SearchPieceText = 2,
  SearchCondition_FieldNumber_SearchAndCondition = 3,
  SearchCondition_FieldNumber_SearchOrCondition = 4,
  SearchCondition_FieldNumber_SearchPeerCondition = 5,
  SearchCondition_FieldNumber_SearchPeerContentType = 6,
  SearchCondition_FieldNumber_SearchSenderIdConfition = 7,
};

typedef GPB_ENUM(SearchCondition_Body_OneOfCase) {
  SearchCondition_Body_OneOfCase_GPBUnsetOneOfCase = 0,
  SearchCondition_Body_OneOfCase_SearchPeerTypeCondition = 1,
  SearchCondition_Body_OneOfCase_SearchPieceText = 2,
  SearchCondition_Body_OneOfCase_SearchAndCondition = 3,
  SearchCondition_Body_OneOfCase_SearchOrCondition = 4,
  SearchCondition_Body_OneOfCase_SearchPeerCondition = 5,
  SearchCondition_Body_OneOfCase_SearchPeerContentType = 6,
  SearchCondition_Body_OneOfCase_SearchSenderIdConfition = 7,
};

GPB_FINAL @interface SearchCondition : GPBMessage

@property(nonatomic, readonly) SearchCondition_Body_OneOfCase bodyOneOfCase;

@property(nonatomic, readwrite, strong, null_resettable) SearchPeerTypeCondition *searchPeerTypeCondition;

@property(nonatomic, readwrite, strong, null_resettable) SearchPieceText *searchPieceText;

@property(nonatomic, readwrite, strong, null_resettable) SearchAndCondition *searchAndCondition;

@property(nonatomic, readwrite, strong, null_resettable) SearchOrCondition *searchOrCondition;

@property(nonatomic, readwrite, strong, null_resettable) SearchPeerCondition *searchPeerCondition;

@property(nonatomic, readwrite, strong, null_resettable) SearchPeerContentType *searchPeerContentType;

@property(nonatomic, readwrite, strong, null_resettable) SearchSenderIdConfition *searchSenderIdConfition;

@end

/**
 * Clears whatever value was set for the oneof 'body'.
 **/
void SearchCondition_ClearBodyOneOfCase(SearchCondition *message);

#pragma mark - SearchPeerTypeCondition

typedef GPB_ENUM(SearchPeerTypeCondition_FieldNumber) {
  SearchPeerTypeCondition_FieldNumber_PeerType = 1,
};

/**
 * Search peer type condition
 **/
GPB_FINAL @interface SearchPeerTypeCondition : GPBMessage

@property(nonatomic, readwrite) SearchPeerType peerType;

@end

/**
 * Fetches the raw value of a @c SearchPeerTypeCondition's @c peerType property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t SearchPeerTypeCondition_PeerType_RawValue(SearchPeerTypeCondition *message);
/**
 * Sets the raw value of an @c SearchPeerTypeCondition's @c peerType property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetSearchPeerTypeCondition_PeerType_RawValue(SearchPeerTypeCondition *message, int32_t value);

#pragma mark - SearchPieceText

typedef GPB_ENUM(SearchPieceText_FieldNumber) {
  SearchPieceText_FieldNumber_Query = 1,
};

/**
 * Search peer name condition
 **/
GPB_FINAL @interface SearchPieceText : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *query;

@end

#pragma mark - SearchAndCondition

typedef GPB_ENUM(SearchAndCondition_FieldNumber) {
  SearchAndCondition_FieldNumber_AndQueryArray = 1,
};

/**
 * Search AND condion
 **/
GPB_FINAL @interface SearchAndCondition : GPBMessage

/** / "And" query */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<SearchCondition*> *andQueryArray;
/** The number of items in @c andQueryArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger andQueryArray_Count;

@end

#pragma mark - SearchOrCondition

typedef GPB_ENUM(SearchOrCondition_FieldNumber) {
  SearchOrCondition_FieldNumber_OrQueryArray = 1,
};

/**
 * Search OR condition
 **/
GPB_FINAL @interface SearchOrCondition : GPBMessage

/** / "Or" query */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<SearchCondition*> *orQueryArray;
/** The number of items in @c orQueryArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger orQueryArray_Count;

@end

#pragma mark - SearchPeerCondition

typedef GPB_ENUM(SearchPeerCondition_FieldNumber) {
  SearchPeerCondition_FieldNumber_Peer = 1,
};

/**
 * Serch Peer condition
 **/
GPB_FINAL @interface SearchPeerCondition : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) OutPeer *peer;
/** Test to see if @c peer has been set. */
@property(nonatomic, readwrite) BOOL hasPeer;

@end

#pragma mark - SearchPeerContentType

typedef GPB_ENUM(SearchPeerContentType_FieldNumber) {
  SearchPeerContentType_FieldNumber_ContentType = 1,
};

/**
 * Search content type condition
 **/
GPB_FINAL @interface SearchPeerContentType : GPBMessage

@property(nonatomic, readwrite) SearchContentType contentType;

@end

/**
 * Fetches the raw value of a @c SearchPeerContentType's @c contentType property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t SearchPeerContentType_ContentType_RawValue(SearchPeerContentType *message);
/**
 * Sets the raw value of an @c SearchPeerContentType's @c contentType property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetSearchPeerContentType_ContentType_RawValue(SearchPeerContentType *message, int32_t value);

#pragma mark - SearchSenderIdConfition

typedef GPB_ENUM(SearchSenderIdConfition_FieldNumber) {
  SearchSenderIdConfition_FieldNumber_SenderId = 1,
};

/**
 * Searching sender uid condition
 **/
GPB_FINAL @interface SearchSenderIdConfition : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *senderId;

@end

#pragma mark - PeerSearchResult

typedef GPB_ENUM(PeerSearchResult_FieldNumber) {
  PeerSearchResult_FieldNumber_Peer = 1,
  PeerSearchResult_FieldNumber_Title = 2,
  PeerSearchResult_FieldNumber_Shortname = 3,
  PeerSearchResult_FieldNumber_Description_p = 4,
  PeerSearchResult_FieldNumber_MembersCount = 5,
  PeerSearchResult_FieldNumber_DateCreated = 6,
  PeerSearchResult_FieldNumber_Creator = 7,
  PeerSearchResult_FieldNumber_IsPublic = 8,
  PeerSearchResult_FieldNumber_IsJoined = 9,
};

/**
 * Peer search result
 **/
GPB_FINAL @interface PeerSearchResult : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) Peer *peer;
/** Test to see if @c peer has been set. */
@property(nonatomic, readwrite) BOOL hasPeer;

@property(nonatomic, readwrite, copy, null_resettable) NSString *title;

@property(nonatomic, readwrite, strong, null_resettable) GPBStringValue *shortname;
/** Test to see if @c shortname has been set. */
@property(nonatomic, readwrite) BOOL hasShortname;

@property(nonatomic, readwrite, strong, null_resettable) GPBStringValue *description_p;
/** Test to see if @c description_p has been set. */
@property(nonatomic, readwrite) BOOL hasDescription_p;

@property(nonatomic, readwrite, strong, null_resettable) GPBInt32Value *membersCount;
/** Test to see if @c membersCount has been set. */
@property(nonatomic, readwrite) BOOL hasMembersCount;

/** / Group Creation Date */
@property(nonatomic, readwrite) int64_t dateCreated;

@property(nonatomic, readwrite, strong, null_resettable) GPBStringValue *creator;
/** Test to see if @c creator has been set. */
@property(nonatomic, readwrite) BOOL hasCreator;

@property(nonatomic, readwrite, strong, null_resettable) GPBBoolValue *isPublic;
/** Test to see if @c isPublic has been set. */
@property(nonatomic, readwrite) BOOL hasIsPublic;

/** / Are you joined? */
@property(nonatomic, readwrite, strong, null_resettable) GPBBoolValue *isJoined;
/** Test to see if @c isJoined has been set. */
@property(nonatomic, readwrite) BOOL hasIsJoined;

@end

#pragma mark - RequestPeerSearch

typedef GPB_ENUM(RequestPeerSearch_FieldNumber) {
  RequestPeerSearch_FieldNumber_QueryArray = 1,
};

/**
 * Performing peer search
 **/
GPB_FINAL @interface RequestPeerSearch : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<SearchCondition*> *queryArray;
/** The number of items in @c queryArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger queryArray_Count;

@end

#pragma mark - ResponsePeerSearch

typedef GPB_ENUM(ResponsePeerSearch_FieldNumber) {
  ResponsePeerSearch_FieldNumber_SearchResultsArray = 1,
  ResponsePeerSearch_FieldNumber_UserPeersArray = 2,
  ResponsePeerSearch_FieldNumber_GroupPeersArray = 3,
};

/**
 * / Response with related peers and entities
 **/
GPB_FINAL @interface ResponsePeerSearch : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<PeerSearchResult*> *searchResultsArray;
/** The number of items in @c searchResultsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger searchResultsArray_Count;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<UserOutPeer*> *userPeersArray;
/** The number of items in @c userPeersArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger userPeersArray_Count;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<GroupOutPeer*> *groupPeersArray;
/** The number of items in @c groupPeersArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger groupPeersArray_Count;

@end

#pragma mark - RequestResolvePeer

typedef GPB_ENUM(RequestResolvePeer_FieldNumber) {
  RequestResolvePeer_FieldNumber_Shortname = 1,
};

/**
 * Resolve peer by shortname
 **/
GPB_FINAL @interface RequestResolvePeer : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *shortname;

@end

#pragma mark - ResponseResolvePeer

typedef GPB_ENUM(ResponseResolvePeer_FieldNumber) {
  ResponseResolvePeer_FieldNumber_Peer = 1,
};

GPB_FINAL @interface ResponseResolvePeer : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) OutPeer *peer;
/** Test to see if @c peer has been set. */
@property(nonatomic, readwrite) BOOL hasPeer;

@end

#pragma mark - MessageSearchResult

typedef GPB_ENUM(MessageSearchResult_FieldNumber) {
  MessageSearchResult_FieldNumber_Peer = 1,
  MessageSearchResult_FieldNumber_Rid = 2,
  MessageSearchResult_FieldNumber_Date = 3,
  MessageSearchResult_FieldNumber_SenderId = 4,
  MessageSearchResult_FieldNumber_Content = 5,
  MessageSearchResult_FieldNumber_Mid = 6,
  MessageSearchResult_FieldNumber_HighlightTokensArray = 7,
};

/**
 * Message container
 **/
GPB_FINAL @interface MessageSearchResult : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) Peer *peer;
/** Test to see if @c peer has been set. */
@property(nonatomic, readwrite) BOOL hasPeer;

/** / deprecated */
@property(nonatomic, readwrite) int64_t rid;

@property(nonatomic, readwrite) int64_t date;

@property(nonatomic, readwrite, copy, null_resettable) NSString *senderId;

@property(nonatomic, readwrite, strong, null_resettable) MessageContent *content;
/** Test to see if @c content has been set. */
@property(nonatomic, readwrite) BOOL hasContent;

@property(nonatomic, readwrite, strong, null_resettable) UUIDValue *mid;
/** Test to see if @c mid has been set. */
@property(nonatomic, readwrite) BOOL hasMid;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSString*> *highlightTokensArray;
/** The number of items in @c highlightTokensArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger highlightTokensArray_Count;

@end

#pragma mark - MessageSearchItem

typedef GPB_ENUM(MessageSearchItem_FieldNumber) {
  MessageSearchItem_FieldNumber_Result = 1,
};

/**
 * Message Search result container
 **/
GPB_FINAL @interface MessageSearchItem : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) MessageSearchResult *result;
/** Test to see if @c result has been set. */
@property(nonatomic, readwrite) BOOL hasResult;

@end

#pragma mark - ResponseMessageSearchResponse

typedef GPB_ENUM(ResponseMessageSearchResponse_FieldNumber) {
  ResponseMessageSearchResponse_FieldNumber_SearchResultsArray = 1,
  ResponseMessageSearchResponse_FieldNumber_LoadMoreState = 2,
  ResponseMessageSearchResponse_FieldNumber_UserOutPeersArray = 3,
  ResponseMessageSearchResponse_FieldNumber_GroupOutPeersArray = 4,
  ResponseMessageSearchResponse_FieldNumber_TotalCount = 5,
};

/**
 * Search Result with related peers and entities
 **/
GPB_FINAL @interface ResponseMessageSearchResponse : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<MessageSearchItem*> *searchResultsArray;
/** The number of items in @c searchResultsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger searchResultsArray_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBBytesValue *loadMoreState;
/** Test to see if @c loadMoreState has been set. */
@property(nonatomic, readwrite) BOOL hasLoadMoreState;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<UserOutPeer*> *userOutPeersArray;
/** The number of items in @c userOutPeersArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger userOutPeersArray_Count;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<GroupOutPeer*> *groupOutPeersArray;
/** The number of items in @c groupOutPeersArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger groupOutPeersArray_Count;

@property(nonatomic, readwrite) int64_t totalCount;

@end

#pragma mark - RequestMessageSearch

typedef GPB_ENUM(RequestMessageSearch_FieldNumber) {
  RequestMessageSearch_FieldNumber_Query = 1,
};

/**
 * Performing message search
 **/
GPB_FINAL @interface RequestMessageSearch : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) SearchCondition *query;
/** Test to see if @c query has been set. */
@property(nonatomic, readwrite) BOOL hasQuery;

@end

#pragma mark - RequestMessageSearchMore

typedef GPB_ENUM(RequestMessageSearchMore_FieldNumber) {
  RequestMessageSearchMore_FieldNumber_LoadMoreState = 1,
};

/**
 * Performing message search paging
 **/
GPB_FINAL @interface RequestMessageSearchMore : GPBMessage

/** / Cursor */
@property(nonatomic, readwrite, copy, null_resettable) NSData *loadMoreState;

@end

#pragma mark - RequestSimpleSearch

typedef GPB_ENUM(RequestSimpleSearch_FieldNumber) {
  RequestSimpleSearch_FieldNumber_CriteriaArray = 1,
};

GPB_FINAL @interface RequestSimpleSearch : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<SimpleSearchCondition*> *criteriaArray;
/** The number of items in @c criteriaArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger criteriaArray_Count;

@end

#pragma mark - RequestSimpleSearchMore

typedef GPB_ENUM(RequestSimpleSearchMore_FieldNumber) {
  RequestSimpleSearchMore_FieldNumber_LoadMoreState = 1,
};

GPB_FINAL @interface RequestSimpleSearchMore : GPBMessage

/** / Cursor */
@property(nonatomic, readwrite, copy, null_resettable) NSData *loadMoreState;

@end

#pragma mark - RequestFieldAutocomplete

typedef GPB_ENUM(RequestFieldAutocomplete_FieldNumber) {
  RequestFieldAutocomplete_FieldNumber_FieldName = 1,
  RequestFieldAutocomplete_FieldNumber_FieldValue = 2,
};

GPB_FINAL @interface RequestFieldAutocomplete : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *fieldName;

@property(nonatomic, readwrite, copy, null_resettable) NSString *fieldValue;

@end

#pragma mark - ResponseFieldAutocomplete

typedef GPB_ENUM(ResponseFieldAutocomplete_FieldNumber) {
  ResponseFieldAutocomplete_FieldNumber_FieldName = 1,
  ResponseFieldAutocomplete_FieldNumber_FieldValueArray = 2,
};

GPB_FINAL @interface ResponseFieldAutocomplete : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *fieldName;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSString*> *fieldValueArray;
/** The number of items in @c fieldValueArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger fieldValueArray_Count;

@end

#pragma mark - RequestLoadUserSearchByPredicatesResults

typedef GPB_ENUM(RequestLoadUserSearchByPredicatesResults_FieldNumber) {
  RequestLoadUserSearchByPredicatesResults_FieldNumber_PredicatesArray = 1,
  RequestLoadUserSearchByPredicatesResults_FieldNumber_GroupId = 2,
  RequestLoadUserSearchByPredicatesResults_FieldNumber_Query = 3,
  RequestLoadUserSearchByPredicatesResults_FieldNumber_Limit = 4,
  RequestLoadUserSearchByPredicatesResults_FieldNumber_RequiredFieldsArray = 5,
};

GPB_FINAL @interface RequestLoadUserSearchByPredicatesResults : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<SearchPredicate*> *predicatesArray;
/** The number of items in @c predicatesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger predicatesArray_Count;

@property(nonatomic, readwrite, copy, null_resettable) NSString *groupId;

@property(nonatomic, readwrite, strong, null_resettable) GPBStringValue *query;
/** Test to see if @c query has been set. */
@property(nonatomic, readwrite) BOOL hasQuery;

@property(nonatomic, readwrite) int32_t limit;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSString*> *requiredFieldsArray;
/** The number of items in @c requiredFieldsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger requiredFieldsArray_Count;

@end

#pragma mark - UserMatch

typedef GPB_ENUM(UserMatch_FieldNumber) {
  UserMatch_FieldNumber_UserId = 1,
  UserMatch_FieldNumber_MatchPredicates = 2,
};

GPB_FINAL @interface UserMatch : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *userId;

@property(nonatomic, readwrite) BOOL matchPredicates;

@end

#pragma mark - ResponseLoadUserSearchByPredicatesResults

typedef GPB_ENUM(ResponseLoadUserSearchByPredicatesResults_FieldNumber) {
  ResponseLoadUserSearchByPredicatesResults_FieldNumber_UsersArray = 1,
  ResponseLoadUserSearchByPredicatesResults_FieldNumber_ResultCount = 2,
};

GPB_FINAL @interface ResponseLoadUserSearchByPredicatesResults : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<UserMatch*> *usersArray;
/** The number of items in @c usersArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger usersArray_Count;

@property(nonatomic, readwrite) int32_t resultCount;

@end

#pragma mark - RequestLoadUserSearchByPredicatesCount

typedef GPB_ENUM(RequestLoadUserSearchByPredicatesCount_FieldNumber) {
  RequestLoadUserSearchByPredicatesCount_FieldNumber_PredicatesArray = 1,
  RequestLoadUserSearchByPredicatesCount_FieldNumber_GroupId = 2,
};

GPB_FINAL @interface RequestLoadUserSearchByPredicatesCount : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<SearchPredicate*> *predicatesArray;
/** The number of items in @c predicatesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger predicatesArray_Count;

@property(nonatomic, readwrite, copy, null_resettable) NSString *groupId;

@end

#pragma mark - ResponseLoadUserSearchByPredicatesCount

typedef GPB_ENUM(ResponseLoadUserSearchByPredicatesCount_FieldNumber) {
  ResponseLoadUserSearchByPredicatesCount_FieldNumber_ResultCount = 1,
};

GPB_FINAL @interface ResponseLoadUserSearchByPredicatesCount : GPBMessage

@property(nonatomic, readwrite) int32_t resultCount;

@end

#pragma mark - RequestGetRecommendations

GPB_FINAL @interface RequestGetRecommendations : GPBMessage

@end

#pragma mark - ResponseGetRecommendations

typedef GPB_ENUM(ResponseGetRecommendations_FieldNumber) {
  ResponseGetRecommendations_FieldNumber_PeersArray = 1,
};

GPB_FINAL @interface ResponseGetRecommendations : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<OutPeer*> *peersArray;
/** The number of items in @c peersArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger peersArray_Count;

@end

#pragma mark - RequestGetPromotedPeers

GPB_FINAL @interface RequestGetPromotedPeers : GPBMessage

@end

#pragma mark - ResponseGetPromotedPeers

typedef GPB_ENUM(ResponseGetPromotedPeers_FieldNumber) {
  ResponseGetPromotedPeers_FieldNumber_UserPeersArray = 1,
  ResponseGetPromotedPeers_FieldNumber_GroupPeersArray = 2,
};

GPB_FINAL @interface ResponseGetPromotedPeers : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<UserOutPeer*> *userPeersArray;
/** The number of items in @c userPeersArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger userPeersArray_Count;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<GroupOutPeer*> *groupPeersArray;
/** The number of items in @c groupPeersArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger groupPeersArray_Count;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
