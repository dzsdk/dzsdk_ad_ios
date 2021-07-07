//
//  DzError.h
//  libAdBase
//
//  Created by DZ on 2021/4/22.
//

#import <Foundation/Foundation.h>


#define DzError_adError            20000   //业务层错误

//#define DzError_UNKNOWN_ERROR                 1000000   //未知错误
//#define DzError_NETWORK_ERROR                 1001000   //网络错误
//#define DzError_PARSER_ERROR                  1002000   //接口数据解析错误
//
//#define DzError_RESPONSE_CODE_ERROR           1003000   //返回码错误
//#define DzError_SDK_INIT_ERROR                1004000   //SDK初始化错误
//
//#define DzError_CACHE_ERROR                   1005000   //缓存错误
//#define DzError_MANAGER_ERROR                 1006000   //系统工具错误
//#define DzError_SKY_ERROR                     1007000   //广告业务相关错误
//
//#define DzError_CHILD_SDK_ERROR               1008000   //子包相关错误
//
//
//#define DzError_GAME_ERROR                    1009000   //游戏错误
//#define DzError_DUMBO_ERROR                   1010000   //飞象错误


////////////////////////////////////////////////////////////DzError_business

#define DzError_CACHE_PARSE_JSON_ERROR           DzError_CACHE_ERROR+1  //缓存错误
#define DzError_CACHE_INIT_ERROR                 DzError_CACHE_ERROR+2  //缓存错误
#define DzError_CACHE_OTHER_ERROR                DzError_CACHE_ERROR+3  //缓存错误
#define DzError_CACHE_NEW_DATA_INSTANCE_ERROR    DzError_CACHE_ERROR+4  //缓存错误
#define DzError_CACHE_NO_AVAILABLE               DzError_CACHE_ERROR+5  //本地缓存失败
#define DzError_CONFIG_NO_AVAILABLE_ERROR        DzError_SDK_INIT_ERROR+1  //主配置失效
#define DzError_CONFIG_OTHER_ERROR               DzError_SDK_INIT_ERROR+2  //主配置接口数据错误
#define DzError_INIT_SKY_API_ERROR               DzError_SDK_INIT_ERROR+3  //SDK初始化失败
#define DzError_STATIC_FIELD_HAVE_BEEN_RECLAIM   DzError_SDK_INIT_ERROR+9  //静态变量被系统回收
#define DzError_NEW_API_PROXY_INSTANCE_ERROR     DzError_CHILD_SDK_ERROR+1 //SDK子包实例化错误
#define DzError_GET_API_ERROR                    DzError_CHILD_SDK_ERROR+2 //SDK子包相关的其他错误
#define DzError_TT_GAME_INIT_ERROR               DzError_GAME_ERROR+1 //穿山甲小游戏初始化错误
#define DzError_TT_GAME_LOGIN_ERROR              DzError_GAME_ERROR+2 //穿山甲小游戏登录错误



#define DzError_GET_KEY_ERROR              DzError_MANAGER_ERROR+1 //对称加密秘钥生成工具错误
#define DzError_SECURITY_ERROR             DzError_MANAGER_ERROR+2 //数据加密解密过程时错误



#define DzError_LOAD_SKY_ERROR              DzError_SKY_ERROR+1    //加载广告错误
#define DzError_SKY_TIME_OUT_ERROR          DzError_SKY_ERROR+2    //广告超时错误

#define DzError_SKY_CALL_BACK_ERROR         DzError_SKY_ERROR+3    //广告事件监听器拦截时错误
#define DzError_SKY_ON_FAIL_ERROR           DzError_SKY_ERROR+4    //广告播放失败

#define DzError_LOAD_IMAGE_ERROR            DzError_SKY_ERROR+5    //加载图片失败
#define DzError_FEED_MODEL_SKY_ANIMATION_ERROR       DzError_SKY_ERROR+6   //信息流模板广告的动画相关错误


#define DzError_GET_TASK_CONFIG_ERROR            DzError_DUMBO_ERROR+1    //飞象，获取飞象配置失败
#define DzError_DUMBO_LOGIN_ERROR                DzError_DUMBO_ERROR+2   //信息流模板广告的动画相关错误
#define DzError_TASK_CENTER_REPORT_EVENT_ERROR   DzError_DUMBO_ERROR+3   //飞象，任务事件上报错误


#define DzError_NO_SKY_FILLING_ERROR          DzError_SKY_ERROR+1 //no ad filling 错误
#define DzError_CHILD_SDK_DATA_ERROR          DzError_SKY_ERROR+2 //三方SDK缺少参数
#define DzError_CHILD_SDK_OTHER_ERROR         DzError_SKY_ERROR+3 //三方SDK缺少参数
#define DzError_DATA_ERROR                    DzError_SKY_ERROR+5 //广告接口返回数据不可用
 


////////////////////////////////////////////////////////////DzError_businesss_network

#define DzError_NETWORK_OTHER_ERROR   DzError_NETWORK_ERROR+1 // HTTP请求错误
#define DzError_PARSE_RESPONSE_ERROR  DzError_PARSER_ERROR+1 // 解析接口数据错误
#define DzError_PARSE_OTHER_ERROR     DzError_PARSER_ERROR+2 // 解析数据接口其他错误



#define DzError_SPLASH_SHOW_ERROR           DzError_RESPONSE_CODE_ERROR+1 //  开屏广告展示失败
#define DzError_REWORD_SHOW_ERROR           DzError_RESPONSE_CODE_ERROR+2 //  激励视频展现失败
#define DzError_FEED_SHOW_ERROR             DzError_RESPONSE_CODE_ERROR+3 // 信息流加载失败
#define DzError_Exposure_SHOW_ERROR         DzError_RESPONSE_CODE_ERROR+4 // 信息流曝光失败

#define DzRESPONSE_CODE_ERROR           1003000   //返回码错误

#define DzError_AppKey              DzError_adError+1  //AppKey 或 SecretKey 未设置
#define DzError_Data_nil            DzError_adError+2  //后台接口api错误

@interface DzError : NSObject

+ (NSDictionary *)errorDic;


@end

#define DzErrorDic   [DzError errorDic]



