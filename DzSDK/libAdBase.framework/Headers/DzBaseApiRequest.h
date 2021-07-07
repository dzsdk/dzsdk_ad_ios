//
//  DzBaseApiRequest.h
//  libAdBase
//
//  Created by DZ on 2021/4/19.
//

#import <Foundation/Foundation.h>
#import "DzAdCommonReqParam.h"
#import "DzLogReqParam.h"

NS_ASSUME_NONNULL_BEGIN

@interface DzBaseApiRequest : NSObject

/*!
 *  请求广告API
 */
+ (void)requestAdWithAPI:(NSString *)api
                param:(DzAdCommonReqParam *)param
             success:(void(^)(id data))success
                  failed:(void(^)(NSError *error))failedBlock;

/*!
 * 曝光请求API
 */
+ (void)requestWithUrl:(NSString *)url success:(void(^)(id data))success failed:(void(^)(NSError *error))failedBlock;


/*!
 * 错误请求API
 */
+ (void)requestAdErrorWithAPI:(NSString *)api param:(DzLogReqParam *)LogParam success:(void (^)(BOOL isSuccess))success failed:(void(^)(NSError *error))failedBlock;


@end

NS_ASSUME_NONNULL_END
