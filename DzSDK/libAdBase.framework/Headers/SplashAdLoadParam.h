//
//  SplashAdLoadParam.h
//  libAdBase
//
//  Created by lizz on 2021/4/15.
//

NS_ASSUME_NONNULL_BEGIN

@interface SplashAdLoadParam : LoaderParam

@property (nonatomic, weak) id <SplashAdProtocol> delegate;

/**
 *开屏加载状态
 */
@property (nonatomic, assign) AdPlatformSplashLoadStatus splashAdType;



@end

NS_ASSUME_NONNULL_END
