//
//  DzAdBaseManager.h
//  libAdCore
//
//  Created by lizz on 2021/4/16.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DzAdBaseManager : NSObject

-(NSArray<NSString *> *)getSupportAdPlatform;

/**
 获取支持的广告存放字典中
 */
-(NSDictionary *)adApiDic;

-(void)loadSplashAd:(AdLoadModel *)adModel with:(ProxySplashAdLoadParam *_Nonnull)params;

-(void)loadFeedAd:(AdLoadModel *)adModel with:(ProxyFeedAdLoadParam *_Nonnull)params;

-(void)loadRewardVidioAd:(AdLoadModel *)adModel with:(ProxyRewardVideoAdLoadParam *_Nonnull)params;

@end

NS_ASSUME_NONNULL_END
