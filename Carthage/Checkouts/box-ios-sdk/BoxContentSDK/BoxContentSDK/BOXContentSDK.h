//
//  BOXContentSDK.h
//  BoxContentSDK
//
//  Created on 2/19/13.
//  Copyright (c) 2013 Box. All rights reserved.
//

#import <Foundation/Foundation.h>

// constants and logging
#import "BOXContentSDKConstants.h"
#import "BOXLog.h"
#import "BOXContentSDKErrors.h"

// Client
#import "BOXContentClient.h"
#import "BOXContentClient+Authentication.h"
#import "BOXContentClient+Search.h"
#import "BOXContentClient+User.h"
#import "BOXContentClient+Comment.h"
#import "BOXContentClient+Collection.h"
#import "BOXContentClient+Event.h"
#import "BOXContentClient+Collaboration.h"
#import "BOXContentClient+FileVersion.h"
#import "BOXContentClient+SharedLink.h"
#import "BOXContentClient+File.h"
#import "BOXContentClient+Folder.h"
#import "BOXContentClient+Bookmark.h"
#import "BOXContentClient+Metadata.h"
#import "BOXContentClient+RecentItems.h"

// Session
#import "BOXAuthorizationViewController.h"
#import "BOXAbstractSession.h"
#import "BOXAbstractSession_Private.h"
#import "BOXOAuth2Session.h"
#import "BOXParallelOAuth2Session.h"
#import "BOXAppUserSession.h"
#import "BOXURLSessionManager.h"

// Protocols
#import "BOXSharedLinkStorageProtocol.h"
#import "BOXSharedLinkItemSource.h"

// AppToApp
#import "BOXAppToAppAnnotationBuilder.h"
#import "BOXAppToAppAnnotationKeys.h"
#import "BOXAppToAppApplication.h"
#import "BOXAppToAppFileMetadata.h"
#import "BOXAppToAppMessage.h"

// Requests
#import "BOXRequest.h"
#import "BOXRequest+Metadata.h"
#import "BOXUserRequest.h"
#import "BOXUserAvatarRequest.h"
#import "BOXSharedItemRequest.h"
#import "BOXFileRequest.h"
#import "BOXBookmarkRequest.h"
#import "BOXBookmarkCreateRequest.h"
#import "BOXBookmarkDeleteRequest.h"
#import "BOXBookmarkCopyRequest.h"
#import "BOXBookmarkShareRequest.h"
#import "BOXBookmarkUnshareRequest.h"
#import "BOXBookmarkUpdateRequest.h"
#import "BOXBookmarkCommentsRequest.h"
#import "BOXFolderRequest.h"
#import "BOXFileCommentsRequest.h"
#import "BOXFileCollaborationsRequest.h"
#import "BOXFileCopyRequest.h"
#import "BOXFileDeleteRequest.h"
#import "BOXFileDownloadRequest.h"
#import "BOXFileThumbnailRequest.h"
#import "BOXFileUpdateRequest.h"
#import "BOXFileShareRequest.h"
#import "BOXFileUnshareRequest.h"
#import "BOXFileVersionsRequest.h"
#import "BOXFileVersionRequest.h"
#import "BOXFileVersionPromoteRequest.h"
#import "BOXFolderCreateRequest.h"
#import "BOXFolderCopyRequest.h"
#import "BOXFolderDeleteRequest.h"
#import "BOXFolderUpdateRequest.h"
#import "BOXFolderUnshareRequest.h"
#import "BOXFolderShareRequest.h"
#import "BOXFolderCollaborationsRequest.h"
#import "BOXFileUploadRequest.h"
#import "BOXFileUploadNewVersionRequest.h"
#import "BOXPreflightCheckRequest.h"
#import "BOXFolderItemsRequest.h"
#import "BOXFolderPaginatedItemsRequest.h"
#import "BOXFolderPaginatedItemsRequest_Private.h"
#import "BOXCommentRequest.h"
#import "BOXCommentAddRequest.h"
#import "BOXCommentDeleteRequest.h"
#import "BOXCommentUpdateRequest.h"
#import "BOXCollectionItemsRequest.h"
#import "BOXCollectionListRequest.h"
#import "BOXCollectionFavoritesRequest.h"
#import "BOXItemSetCollectionsRequest.h"
#import "BOXEventsRequest.h"
#import "BOXEventsAdminLogsRequest.h"
#import "BOXCollaborationRequest.h"
#import "BOXCollaborationCreateRequest.h"
#import "BOXCollaborationRemoveRequest.h"
#import "BOXCollaborationUpdateRequest.h"
#import "BOXCollaborationPendingRequest.h"
#import "BOXSearchRequest.h"
#import "BOXTrashedItemArrayRequest.h"
#import "BOXTrashedFolderRestoreRequest.h"
#import "BOXTrashedFileRestoreRequest.h"
#import "BOXItemShareRequest.h"
#import "BOXMetadataRequest.h"
#import "BOXMetadataDeleteRequest.h"
#import "BOXMetadataCreateRequest.h"
#import "BOXMetadataUpdateRequest.h"
#import "BOXMetadataTemplateRequest.h"
#import "BOXStreamOperation.h"
#import "BOXRecentItemsRequest.h"
#import "BOXRecentItemsRequest.h"
#import "BOXFileRepresentationDownloadRequest.h"
#import "BOXRepresentationInfoRequest.h"

// API Operation queues
#import "BOXAPIQueueManager.h"
#import "BOXSerialAPIQueueManager.h"
#import "BOXParallelAPIQueueManager.h"
#import "BOXAPIAccessTokenDelegate.h"

// API Operations
#import "BOXAPIOperation.h"
#import "BOXAPIOperation_Private.h"
#import "BOXAPIOAuth2ToJSONOperation.h"
#import "BOXAPIAuthenticatedOperation.h"
#import "BOXAPIJSONOperation.h"
#import "BOXAPIMultipartToJSONOperation.h"
#import "BOXAPIDataOperation.h"
#import "BOXAPIJSONPatchOperation.h"
#import "BOXAPIAppUsersAuthOperation.h"

// API models
#import "BOXItem.h"
#import "BOXFile.h"
#import "BOXFolder.h"
#import "BOXFileLock.h"
#import "BOXSharedLink.h"
#import "BOXUser.h"
#import "BOXUser_Private.h"
#import "BOXBookmark.h"
#import "BOXComment.h"
#import "BOXRecentItem.h"

#import "BOXCollection.h"
#import "BOXEvent.h"
#import "BOXCollaboration.h"
#import "BOXGroup.h"
#import "BOXFileVersion.h"
#import "BOXMetadata.h"
#import "BOXMetadataKeyValue.h"
#import "BOXMetadataUpdateTask.h"
#import "BOXMetadataTemplate.h"
#import "BOXMetadataTemplateField.h"
#import "BOXRepresentation.h"

// Catagories
#import "NSString+BOXContentSDKAdditions.h"
#import "NSError+BOXContentSDKAdditions.h"
#import "UIApplication+ExtensionSafeAdditions.h"
#import "UIDevice+BOXContentSDKAdditions.h"
#import "NSString+BOXContentSDKAdditions.h"
#import "NSURL+BOXURLHelper.h"
#import "NSJSONSerialization+BOXContentSDKAdditions.h"
#import "NSDate+BOXContentSDKAdditions.h"

// External
#import "BOXHashHelper.h"
#import "BOXKeychainItemWrapper.h"
#import "BOXISO8601DateFormatter.h"

// Others
#import "BOXSharedLinkHeadersDefaultManager.h"
#import "BOXDispatchHelper.h"
#import "BOXUserAvatarImageView.h"
