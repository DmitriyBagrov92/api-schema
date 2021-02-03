// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: stickers.proto

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
@class GPBStringValue;
@class ImageLocation;
@class StickerCollection;
@class StickerDescriptor;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - StickersRoot

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
GPB_FINAL @interface StickersRoot : GPBRootObject
@end

#pragma mark - StickerDescriptor

typedef GPB_ENUM(StickerDescriptor_FieldNumber) {
  StickerDescriptor_FieldNumber_Id_p = 1,
  StickerDescriptor_FieldNumber_Emoji = 2,
  StickerDescriptor_FieldNumber_Image128 = 3,
  StickerDescriptor_FieldNumber_Image512 = 4,
  StickerDescriptor_FieldNumber_Image256 = 5,
  StickerDescriptor_FieldNumber_AnimatedStickerJson = 6,
};

/**
 * Descriptor of a Sticker
 **/
GPB_FINAL @interface StickerDescriptor : GPBMessage

/** / Sticker unique id */
@property(nonatomic, readwrite) int32_t id_p;

/** / Emoji code for sticker */
@property(nonatomic, readwrite, strong, null_resettable) GPBStringValue *emoji;
/** Test to see if @c emoji has been set. */
@property(nonatomic, readwrite) BOOL hasEmoji;

/** / Image of sticker 128x128 in WebP format */
@property(nonatomic, readwrite, strong, null_resettable) ImageLocation *image128;
/** Test to see if @c image128 has been set. */
@property(nonatomic, readwrite) BOOL hasImage128;

/** / Image of sticker 512x512 in WebP format */
@property(nonatomic, readwrite, strong, null_resettable) ImageLocation *image512;
/** Test to see if @c image512 has been set. */
@property(nonatomic, readwrite) BOOL hasImage512;

/** / Image of sticker 256x256 in WebP format */
@property(nonatomic, readwrite, strong, null_resettable) ImageLocation *image256;
/** Test to see if @c image256 has been set. */
@property(nonatomic, readwrite) BOOL hasImage256;

/** / Animated sticker json payload */
@property(nonatomic, readwrite, strong, null_resettable) GPBStringValue *animatedStickerJson;
/** Test to see if @c animatedStickerJson has been set. */
@property(nonatomic, readwrite) BOOL hasAnimatedStickerJson;

@end

#pragma mark - StickerCollection

typedef GPB_ENUM(StickerCollection_FieldNumber) {
  StickerCollection_FieldNumber_Id_p = 1,
  StickerCollection_FieldNumber_Title = 2,
  StickerCollection_FieldNumber_StickersArray = 3,
  StickerCollection_FieldNumber_OwnedByMe = 4,
  StickerCollection_FieldNumber_Clock = 5,
};

/**
 * Sticker collection
 **/
GPB_FINAL @interface StickerCollection : GPBMessage

/** / Unique id of a collection */
@property(nonatomic, readwrite) int32_t id_p;

/** / Sticker pack title */
@property(nonatomic, readwrite, strong, null_resettable) GPBStringValue *title;
/** Test to see if @c title has been set. */
@property(nonatomic, readwrite) BOOL hasTitle;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<StickerDescriptor*> *stickersArray;
/** The number of items in @c stickersArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger stickersArray_Count;

/** / does this pack belongs to current user */
@property(nonatomic, readwrite, strong, null_resettable) GPBBoolValue *ownedByMe;
/** Test to see if @c ownedByMe has been set. */
@property(nonatomic, readwrite) BOOL hasOwnedByMe;

@property(nonatomic, readwrite) int64_t clock;

@end

#pragma mark - ResponseStickersResponse

typedef GPB_ENUM(ResponseStickersResponse_FieldNumber) {
  ResponseStickersResponse_FieldNumber_CollectionsArray = 1,
  ResponseStickersResponse_FieldNumber_Seq = 2,
  ResponseStickersResponse_FieldNumber_State = 3,
  ResponseStickersResponse_FieldNumber_RemovedCollectionsArray = 4,
  ResponseStickersResponse_FieldNumber_Clock = 5,
  ResponseStickersResponse_FieldNumber_PrevClock = 6,
};

/**
 * Stickers response
 **/
GPB_FINAL @interface ResponseStickersResponse : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<StickerCollection*> *collectionsArray;
/** The number of items in @c collectionsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger collectionsArray_Count;

/** / deprecated */
@property(nonatomic, readwrite) int32_t seq;

@property(nonatomic, readwrite, copy, null_resettable) NSData *state;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<StickerCollection*> *removedCollectionsArray;
/** The number of items in @c removedCollectionsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger removedCollectionsArray_Count;

@property(nonatomic, readwrite) int64_t clock;

@property(nonatomic, readwrite) int64_t prevClock;

@end

#pragma mark - RequestLoadOwnStickers

typedef GPB_ENUM(RequestLoadOwnStickers_FieldNumber) {
  RequestLoadOwnStickers_FieldNumber_FromClock = 1,
};

/**
 * Loading own stickers
 **/
GPB_FINAL @interface RequestLoadOwnStickers : GPBMessage

@property(nonatomic, readwrite) int64_t fromClock;

@end

#pragma mark - ResponseLoadOwnStickers

typedef GPB_ENUM(ResponseLoadOwnStickers_FieldNumber) {
  ResponseLoadOwnStickers_FieldNumber_OwnStickersArray = 1,
  ResponseLoadOwnStickers_FieldNumber_RemovedCollectionsArray = 2,
  ResponseLoadOwnStickers_FieldNumber_Clock = 3,
  ResponseLoadOwnStickers_FieldNumber_PrevClock = 4,
};

GPB_FINAL @interface ResponseLoadOwnStickers : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<StickerCollection*> *ownStickersArray;
/** The number of items in @c ownStickersArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger ownStickersArray_Count;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<StickerCollection*> *removedCollectionsArray;
/** The number of items in @c removedCollectionsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger removedCollectionsArray_Count;

@property(nonatomic, readwrite) int64_t clock;

@property(nonatomic, readwrite) int64_t prevClock;

@end

#pragma mark - RequestLoadAcesssibleStickers

typedef GPB_ENUM(RequestLoadAcesssibleStickers_FieldNumber) {
  RequestLoadAcesssibleStickers_FieldNumber_FromClock = 1,
};

/**
 * Load accessible stickers
 **/
GPB_FINAL @interface RequestLoadAcesssibleStickers : GPBMessage

@property(nonatomic, readwrite) int64_t fromClock;

@end

#pragma mark - ResponseLoadAcesssibleStickers

typedef GPB_ENUM(ResponseLoadAcesssibleStickers_FieldNumber) {
  ResponseLoadAcesssibleStickers_FieldNumber_AccessibleStickersArray = 1,
  ResponseLoadAcesssibleStickers_FieldNumber_RemovedCollectionsArray = 2,
  ResponseLoadAcesssibleStickers_FieldNumber_Clock = 3,
  ResponseLoadAcesssibleStickers_FieldNumber_PrevClock = 4,
};

GPB_FINAL @interface ResponseLoadAcesssibleStickers : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<StickerCollection*> *accessibleStickersArray;
/** The number of items in @c accessibleStickersArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger accessibleStickersArray_Count;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<StickerCollection*> *removedCollectionsArray;
/** The number of items in @c removedCollectionsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger removedCollectionsArray_Count;

@property(nonatomic, readwrite) int64_t clock;

@property(nonatomic, readwrite) int64_t prevClock;

@end

#pragma mark - RequestAddStickerPackReference

typedef GPB_ENUM(RequestAddStickerPackReference_FieldNumber) {
  RequestAddStickerPackReference_FieldNumber_SourceStickerPack = 1,
};

/**
 * Add a reference to other user's sticker pack
 **/
GPB_FINAL @interface RequestAddStickerPackReference : GPBMessage

@property(nonatomic, readwrite) int32_t sourceStickerPack;

@end

#pragma mark - RequestRemoveStickerPackReference

typedef GPB_ENUM(RequestRemoveStickerPackReference_FieldNumber) {
  RequestRemoveStickerPackReference_FieldNumber_SourceStickerPack = 1,
};

/**
 * Remove a reference to an other user's sticker pack
 **/
GPB_FINAL @interface RequestRemoveStickerPackReference : GPBMessage

@property(nonatomic, readwrite) int32_t sourceStickerPack;

@end

#pragma mark - UpdateStickerCollectionsChanged

typedef GPB_ENUM(UpdateStickerCollectionsChanged_FieldNumber) {
  UpdateStickerCollectionsChanged_FieldNumber_UpdatedCollectionsArray = 1,
};

/**
 * Sticker collection changed
 **/
GPB_FINAL @interface UpdateStickerCollectionsChanged : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<StickerCollection*> *updatedCollectionsArray;
/** The number of items in @c updatedCollectionsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger updatedCollectionsArray_Count;

@end

#pragma mark - UpdateStickerPackRemoved

typedef GPB_ENUM(UpdateStickerPackRemoved_FieldNumber) {
  UpdateStickerPackRemoved_FieldNumber_PackId = 1,
};

/**
 * Sticker pack removed
 **/
GPB_FINAL @interface UpdateStickerPackRemoved : GPBMessage

@property(nonatomic, readwrite) int32_t packId;

@end

#pragma mark - UpdateStickerPackAdded

typedef GPB_ENUM(UpdateStickerPackAdded_FieldNumber) {
  UpdateStickerPackAdded_FieldNumber_Pack = 1,
};

/**
 * Sticker pack was added
 **/
GPB_FINAL @interface UpdateStickerPackAdded : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) StickerCollection *pack;
/** Test to see if @c pack has been set. */
@property(nonatomic, readwrite) BOOL hasPack;

@end

#pragma mark - RequestAddStickerCollection

typedef GPB_ENUM(RequestAddStickerCollection_FieldNumber) {
  RequestAddStickerCollection_FieldNumber_Title = 1,
};

/**
 * Adding sticker collection
 **/
GPB_FINAL @interface RequestAddStickerCollection : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *title;

@end

#pragma mark - RequestRemoveStickerCollection

typedef GPB_ENUM(RequestRemoveStickerCollection_FieldNumber) {
  RequestRemoveStickerCollection_FieldNumber_Id_p = 1,
};

/**
 * Removing sticker collection
 **/
GPB_FINAL @interface RequestRemoveStickerCollection : GPBMessage

@property(nonatomic, readwrite) int32_t id_p;

@end

#pragma mark - RequestLoadStickerCollection

typedef GPB_ENUM(RequestLoadStickerCollection_FieldNumber) {
  RequestLoadStickerCollection_FieldNumber_Id_p = 1,
};

/**
 * Loading stickers
 **/
GPB_FINAL @interface RequestLoadStickerCollection : GPBMessage

@property(nonatomic, readwrite) int32_t id_p;

@end

#pragma mark - ResponseLoadStickerCollection

typedef GPB_ENUM(ResponseLoadStickerCollection_FieldNumber) {
  ResponseLoadStickerCollection_FieldNumber_Collection = 1,
};

GPB_FINAL @interface ResponseLoadStickerCollection : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) StickerCollection *collection;
/** Test to see if @c collection has been set. */
@property(nonatomic, readwrite) BOOL hasCollection;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
