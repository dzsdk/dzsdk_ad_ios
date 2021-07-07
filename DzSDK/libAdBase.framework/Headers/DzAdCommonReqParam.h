//
//  DzAdCommonReqParam.h
//  libAdBase
//
//  Created by DZ on 2021/4/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DzAdCommonReqParam : NSObject

@property(nonatomic,copy) NSString *app_key;

@property(nonatomic,copy) NSString *sdk_version;

@property(nonatomic,copy) NSString *idfa;

@property(nonatomic,copy) NSString *idfv;

@property(nonatomic,copy) NSString *idfamd5;

@property(nonatomic,copy) NSString *app_package;

@property(nonatomic,copy) NSString *app_version;

@property(nonatomic,copy) NSString *app_version_code;

@property(nonatomic,copy) NSString *lat;

@property(nonatomic,copy) NSString *speed;

@property(nonatomic,copy) NSString *brand;

@property(nonatomic,copy) NSString *vendor;

@property(nonatomic,copy) NSString *model;

@property(nonatomic,assign) NSInteger screen_width;

@property(nonatomic,assign) NSInteger screen_height;

@property(nonatomic,copy) NSString *lang;

@property(nonatomic,copy) NSString *os_type;

@property(nonatomic,copy) NSString *os_version;

@property(nonatomic,copy) NSString *altitude;

@property(nonatomic,copy) NSString *accuracy;

@property(nonatomic,copy) NSString *carrier;

@property(nonatomic,copy) NSString *connection_type;

@property(nonatomic,copy) NSString *protocol_version;

@property(nonatomic,copy) NSString *time_zone;

@property(nonatomic,assign) double tms;



@end

NS_ASSUME_NONNULL_END
