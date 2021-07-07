//
//  DzLogReqParam.h
//  libAdBase
//
//  Created by DZ on 2021/5/10.
//

#import <Foundation/Foundation.h>

@interface DzLogReqParam : NSObject

@property(nonatomic,copy) NSString *pkg_name; //包名

@property(nonatomic,copy) NSString *sdk_version; // sdk版本号

@property(nonatomic,assign) double ts; //时间戳

@property(nonatomic,copy)NSString *sys;

@property(nonatomic,copy) NSString *model; //机型

@property(nonatomic,copy) NSString *app_key;
 
@property(nonatomic,copy) NSString *sys_version; // 系统版本号

@property(nonatomic,copy) NSString *sid; //用户追踪

@property(nonatomic,copy) NSString *uid; //用户id



@end

