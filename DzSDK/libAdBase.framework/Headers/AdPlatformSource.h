//
//  AdPlatformSource.h
//  libAdBase
//
//  Created by lizz on 2021/4/16.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AdPlatformSource : NSObject


+(NSString *)strAdPlatformByEnum:(AdPlatform)adPlatformEnum;

+(AdPlatform)enumAdPlatformByName:(NSString *)platformName;

@end

NS_ASSUME_NONNULL_END
