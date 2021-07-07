//
//  AdBaseSdkDelegate.h
//  libAdBase
//
//  Created by lizz on 2021/4/15.
//
#ifndef AdBaseSdkDelegate_h
#define AdBaseSdkDelegate_h
#import <UIKit/UIKit.h>
@class SplashAdLoadParam;
@class RewardVideoAdLoadParam;
@class FeedAdLoadParam;
@class DzAdLaunchView;

@protocol SplashAdProtocol <NSObject>

-(void)onSplashAdLoad:(DzAdLaunchView *)adView;

-(void)onSplashAdDidClose:(DzAdLaunchView *)advew;

-(void)onSplashFail:(NSString *)message withCode:(NSInteger)errorCode;


@optional

-(void)onSplashStartLoad;

@end

@protocol FeedAdProtocol <NSObject>


-(void)onFeedAdLoadSuccessViews:(NSMutableArray *)views;

-(void)onFeedExpressFail:(NSString *)message withCode:(NSInteger)errorCode;


@optional

-(void)onFeedExpressAdViewRenderFail:(NSError *)error;

-(void)onFeedExpressRenderSuccess;

-(void)onFeedExpressAdViewdislike:(NSInteger)index;


@end

@protocol RewardVideoProtocol <NSObject>

-(void)onRewardVideoDidLoad; // 激励视频加载成功

-(void)onRewardVideoFail:(NSString *)message withCode:(NSInteger)errorCode;

@optional

-(void)onAdVideoBarClick;

-(void)onVideoStart;


@end


@protocol ProxySplashAdProtocol <NSObject>

///*开屏开始加载*/
//-(void)onSplashStartLoad:(SplashAdLoadParam *)loadParam;
//
///*开屏显示成功*/
//-(void)onSplashOnShow:(SplashAdLoadParam *)loadParam;
//
///*开屏点击*/
//-(void)onSplashAdClick:(SplashAdLoadParam *)loadParam;

@optional

-(void)onSplashLoadParam:(SplashAdLoadParam *)loadParam;

/*开屏加载成功*/
-(void)onSplashLoaded:(SplashAdLoadParam *)loadParam withView:(DzAdLaunchView *)adView;

/*开屏加载失败*/
-(void)onSplashFailToLoad:(SplashAdLoadParam *)loadParam withFailError:(NSError *)error;

-(void)onSplashFail:(NSString *)message withCode:(NSInteger)errorCode;


-(void)onSplashAdClose:(SplashAdLoadParam *)loadParam withView:(DzAdLaunchView *)adView;

@end


@protocol ProxyRewardVideoProtocol <NSObject>

///*开始加载*/
//-(void)onVideoAdStartLoad:(RewardVideoAdLoadParam *)loadParam;
//
///*加载成功*/
//-(void)onVideoAdVideoLoad:(RewardVideoAdLoadParam *)loadParam;
//
///*显示成功*/
//- (void)onVideoAdDidVisible:(RewardVideoAdLoadParam *)loadParam;
//
///*广告被点击*/
//- (void)rewardedVideoAdDidClick:(RewardVideoAdLoadParam *)loadParam;

@optional

/*视频加载回调*/
- (void)onVideoLoadParam:(RewardVideoAdLoadParam *)loadParam;

/*视频加载失败*/
- (void)onVideoAdFailToLoad:(RewardVideoAdLoadParam *)loadParam withError:(NSError *)error;

- (void)onVideoError;

- (void)onVideoAdFail;

@end


@protocol ProxyFeedAdProtocol <NSObject>


@optional

/*信息流加载回调*/

- (void)onFeedLoadParam:(FeedAdLoadParam *)loadParam;

/*信息流加载成功*/
- (void)onFeedAdSuccessLoadAd:(FeedAdLoadParam *)loadParam withViews:(NSMutableArray <__kindof UIView *>*)views;

/*信息流渲染成功*/
- (void)onFeedAdViewRenderSuccess:(UIView *)view;

/*信息流加载失败*/
- (void)onFeedAdFailToLoad:(FeedAdLoadParam *)loadParam withError:(NSError *)error;

/*信息流渲染失败*/
- (void)onFeedRenderFail:(FeedAdLoadParam *)loadParam withError:(NSError *)error;

/*信息流点击删除*/
- (void)onFeedExpressdislikeAdView:(NSInteger)index;


-(void)onDownloadStart;

-(void)onDownloadFinish;

-(void)onDownloadAdFail;

@end

#endif /* AdBaseSdkDelegate_h */
