/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICAttachmentPDFModel : ICAttachmentModel

+ (id)contentInfoTextWithAttachmentCount:(unsigned int)arg1;
+ (int)populateSearchStrings:(id)arg1 url:(id)arg2 maxStringLength:(unsigned int)arg3 isCancelledBlock:(id /* block */)arg4;

- (BOOL)canMarkup;
- (void)generatePreviewsInOperation:(id)arg1;
- (id)generateSearchIndexStringsOperation;
- (id /* block */)genericBrickThumbnailCreator;
- (id /* block */)genericListThumbnailCreator;
- (BOOL)hasPreviews;
- (int)populateSearchStrings:(id)arg1;

@end
