//
//  ProxyRewardVideoAdLoadParam.h
//  libAdBase
//
//  Created by lizz on 2021/4/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ProxyRewardVideoAdLoadParam : NSObject

@property (nonatomic, weak) id <ProxyRewardVideoProtocol> proxyDelegate;

@property (nonatomic, strong) RewardVideoAdLoadParam *loadParam;

- (instancetype)initAdLoadParam:(RewardVideoAdLoadParam *)loadParam proxy:(id<ProxyRewardVideoProtocol>) delegate;


@end

NS_ASSUME_NONNULL_END
