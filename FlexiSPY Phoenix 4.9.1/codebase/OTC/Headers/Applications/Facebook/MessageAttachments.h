/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

@class AttachmentURLFormatter, ProjectGatingChecker;

@interface MessageAttachments : NSObject
{
    //id <FBMAppProperties> _appProperties;
    ProjectGatingChecker *_gatingChecker;
    AttachmentURLFormatter *_urlFormatter;
}

+ (id)attachmentsWithURLFormatter:(id)arg1 appProperties:(id)arg2 gatingChecker:(id)arg3;
@property(retain, nonatomic) AttachmentURLFormatter *urlFormatter; // @synthesize urlFormatter=_urlFormatter;
@property(retain, nonatomic) ProjectGatingChecker *gatingChecker; // @synthesize gatingChecker=_gatingChecker;
//@property(retain, nonatomic) id <FBMAppProperties> appProperties; // @synthesize appProperties=_appProperties;
- (BOOL)hasOutgoingPhotosForMessage:(id)arg1;
- (BOOL)isAudioPlayerEnabled;
- (id)photosFromLogMessage:(id)arg1 messageId:(id)arg2;
- (id)othersFromAttachmentMap:(id)arg1 messageId:(id)arg2;
- (id)audiosFromAttachmentMap:(id)arg1 messageId:(id)arg2;
- (id)photosFromAttachmentMap:(id)arg1 messageId:(id)arg2;
- (float)audioDurationForMessage:(id)arg1 ofType:(int)arg2;
- (id)audioClipAttachmentForMessage:(id)arg1 ofType:(int)arg2;
- (int)getAudioMessageType:(id)arg1;
- (id)otherAttachmentsForMessage:(id)arg1;
- (id)audioAttachmentsForMessage:(id)arg1;
- (id)photoAttachmentsForMessage:(id)arg1;
- (void)dealloc;

@end

