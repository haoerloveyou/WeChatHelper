//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EmoticonServerNotifyTask.h"

@interface EmoticonRestartBackupWhenDeleteTask : EmoticonServerNotifyTask
{
    id <EmoticonRestartBackupWhenDeleteTaskDelegate> m_delegate;
}

- (void).cxx_destruct;
- (id)initWithDelegate:(id)arg1;
@property(nonatomic) __weak id <EmoticonRestartBackupWhenDeleteTaskDelegate> m_delegate; // @synthesize m_delegate;
- (_Bool)resumeLogic;

@end

