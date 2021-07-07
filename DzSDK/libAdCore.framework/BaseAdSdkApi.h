//
//  BaseAdSdkApi.h
//  libAdBase
//
//  Created by lizz on 2021/4/14.
//

#import "AdBaseSdkEnum.h"
#import "LoadAdResult.h"
#import "AdLoadModel.h"
#import "LoaderParam.h"
#import "AdBaseSdkDelegate.h"
#import "FeedAdLoadParam.h"
#import "RewardVideoAdLoadParam.h"
#import "SplashAdLoadParam.h"
#import "AdPlatformSource.h"
#import "DzBaseApiRequest.h"
#import "ProxySplashAdLoadParam.h"
#import "ProxyFeedAdLoadParam.h"
#import "ProxyRewardVideoAdLoadParam.h"
#import "DzAdLaunchView.h"
#import "DzAdCommonReqParam.h"
#import "NSObject+DzModelDicTransfrom.h"
#import "DzError.h"
#import "UIView+UIScreenDisPlaying.h"


@protocol AdSdkApiProtocol <NSObject>

///初始化SDK
- (void)initSdk:(LoaderParam *_Nullable)param;

///获取当前广告配置的参数
-(LoaderParam *_Nullable)getAdPlatformConfig;

///获取所属的广告平台
-(AdPlatform)getPlatform;

///加载开屏广告
-(void)loadSplashAd:(ProxySplashAdLoadParam *_Nonnull)param;

///加载激励视频广告
-(void)loadRewardVideoAd:(ProxyRewardVideoAdLoadParam *_Nonnull)param;

///加载信息流广告
-(void)loadFeedAd:(ProxyFeedAdLoadParam *_Nonnull)param;

@end

NS_ASSUME_NONNULL_BEGIN

@interface BaseAdSdkApi : NSObject<AdSdkApiProtocol>

/*！
 * 用来获得当前sdk的版本号
 * return 返回sdk版本号
 */
+(NSString *) sdkVersion;



/*！
 *  注册app
 *  需要在 application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions 中调用
 *  @param appKey       点众后台注册生成的appId
 *
 */

+ (void)registerAppId:(NSString *)appId;


/*!
 *  查询错误码对应错误内容
 *
 *  @result 错误内容
 */
+(NSString*)errorMsgWithCode:(NSInteger) errorCode;


@end

NS_ASSUME_NONNULL_END
