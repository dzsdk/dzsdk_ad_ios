//
//  CoreAdSdkApi.h
//  libAdCore
//
//  Created by lizz on 2021/4/14.
//

#import <Foundation/Foundation.h>
#import "DzAdBaseManager.h"

 
@protocol DzAdManagerDelegate <NSObject>

@optional


/**
 *   加载广告时错误的回调
 *
 *   @param adLoadErrorType 广告加载错误类型
 */

- (void)adLoadError:(DzErrorSDKConstType)adLoadErrorType info:(NSDictionary*_Nullable)info;

@end

NS_ASSUME_NONNULL_BEGIN

@interface DzAdManager : DzAdBaseManager

@property (nonatomic, assign) id<DzAdManagerDelegate>delegate;


+(DzAdManager *)sharedInstance;


/**
 *  初始化DzAdManager对象
 *
 *  /// delegate
 *
 *  @return   返回DzAdManager的一个实例
 */
- (instancetype)initWithDelegate:(id <DzAdManagerDelegate>)delegate;


-(void)initSdk:(NSString *)appKey;

/**
 获取SDK版本号
 */
-(NSString *)getSdkVersion;

/**
 加载广告
 */
-(void)loadAd:(LoaderParam *_Nonnull)param;

@end

NS_ASSUME_NONNULL_END
