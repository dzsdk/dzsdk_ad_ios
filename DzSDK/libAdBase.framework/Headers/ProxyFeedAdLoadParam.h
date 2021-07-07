//
//  ProxyFeedAdLoadParam.h
//  libAdBase
//
//  Created by lizz on 2021/4/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ProxyFeedAdLoadParam : NSObject

@property (nonatomic, weak) id <ProxyFeedAdProtocol> proxyDelegate;

@property(nonatomic,strong) FeedAdLoadParam *loadParam;

- (instancetype)initAdLoadParam:(FeedAdLoadParam *)loadParam proxy:(id<ProxyFeedAdProtocol>) delegate;


@end

NS_ASSUME_NONNULL_END
