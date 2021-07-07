//
//  RewardVideoAdLoadParam.h
//  libAdBase
//
//  Created by lizz on 2021/4/15.
//

@class RewardVideoProtocol;
NS_ASSUME_NONNULL_BEGIN

@interface RewardVideoAdLoadParam : LoaderParam

@property (nonatomic, weak) id <RewardVideoProtocol> delegate;

@property (nonatomic, assign)  AdPlatformRewardLoadStatus rewardAdType;


@end

NS_ASSUME_NONNULL_END
