//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMessageViewModel.h"

@class CContact, NSArray;

@interface ReaderMessageViewModel : BaseMessageViewModel
{
    NSArray *m_arrBtnList;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
- (id)timeToStr:(id)arg1;
- (id)getTitleString:(id)arg1 bBig:(_Bool)arg2 bGray:(_Bool)arg3;
- (id)getBigVideoImage;
- (id)getSmallVideoImage;
@property(readonly, nonatomic) CContact *brandContact;
@property(readonly, nonatomic) _Bool isForbidForward;
@property(readonly, nonatomic) _Bool isShowHeadImageAndNickname;
@property(readonly, nonatomic) _Bool isShowReadAll;
@property(readonly, nonatomic) NSArray *nodeBtnList;
@property(readonly, nonatomic) NSArray *readerWraps;
- (id)accessibilityDescription;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (id)cellViewClassName;

@end
