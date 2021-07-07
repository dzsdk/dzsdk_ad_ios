//
//  LoadAdResult.h
//  libAdBase
//
//  Created by lizz on 2021/4/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LoadAdResult : NSObject

@property(nonatomic,assign) AD_LOAD_STATUS status;

@property(nonatomic,copy) NSString *message;


- (instancetype)initWithStatus:(AD_LOAD_STATUS)status msg:(NSString *) msg;

+ (instancetype)loadResultWithStatus:(AD_LOAD_STATUS)status msg:(NSString *) msg;

+ (instancetype)loadResultWithStatus:(AD_LOAD_STATUS)status;


/**
 是否成功
 @return BOOL
 */
-(BOOL) isSuccess;

/**
 获取提示信息
 @return BOOL
 */
-(NSString *)getMsg;

@end

NS_ASSUME_NONNULL_END
