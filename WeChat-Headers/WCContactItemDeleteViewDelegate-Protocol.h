//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CContact, WCContactItemDeleteView;

@protocol WCContactItemDeleteViewDelegate <NSObject>

@optional
- (void)onClickDeleteButton:(WCContactItemDeleteView *)arg1 withContact:(CContact *)arg2;
- (void)onClickHeadImage:(WCContactItemDeleteView *)arg1 withContact:(CContact *)arg2;
@end

