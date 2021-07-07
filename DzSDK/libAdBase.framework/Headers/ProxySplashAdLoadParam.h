//
//  ProxySplashAdLoadParam.h
//  libAdBase
//
//  Created by lizz on 2021/4/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ProxySplashAdLoadParam : NSObject

@property (nonatomic, weak) id <ProxySplashAdProtocol> proxyDelegate;

@property(nonatomic,strong) SplashAdLoadParam *loadParam;

- (instancetype)initAdLoadParam:(SplashAdLoadParam *)loadParam proxy:(id<ProxySplashAdProtocol>) delegate;

@end

NS_ASSUME_NONNULL_END
