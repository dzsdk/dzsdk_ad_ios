//
//  FeedAdLoadParam.h
//  libAdBase
//
//  Created by lizz on 2021/4/15.
//

NS_ASSUME_NONNULL_BEGIN

@interface FeedAdLoadParam : LoaderParam

@property (nonatomic, weak) id <FeedAdProtocol> delegate;

@property (nonatomic,assign) NSInteger count; // 加载数量 max设置3张

/**
 *  信息流
 */
@property (nonatomic, assign) AdPlatformFeedLoadStatus feedAdType;



@end

NS_ASSUME_NONNULL_END
