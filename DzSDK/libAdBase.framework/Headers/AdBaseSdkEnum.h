//
//  AdBaseEnum.h
//  libAdBase
//
//  Created by lizz on 2021/4/15.
//

#ifndef AdBaseEnum_h
#define AdBaseEnum_h

typedef NS_ENUM(NSInteger,Oritentation)
{
    OritentationHorizontal,
    OritentationVertical
};


typedef NS_ENUM(NSInteger,ResultAdType)
{
    ResultAdTypeTemplate,
    ResultAdTypeMaterial
};


typedef NS_ENUM(NSInteger,AdPlatformSplashLoadStatus)
{
    AdPlatformSplashDefault  = 0,
    AdPlatformSplashLoading  = 1,      // 开始加载
    AdPlatformSplashAdLoaded     = 2,  // 加载成功
    AdPlatformSplashAdOnShow = 3,   //显示成功
    AdPlatformSplashAdOnClick = 4,  // 点击
    AdPlatformSplashAddownloadStart = 5, // 开始下载
    AAdPlatformSplashAdddownloadFinish = 6 //下载完成
};



#pragma mark -- Sdk常量定义

/**
 *  sdk错误码
 * 当DzSDKErrorConstType时， content代表出错原因 及具体错误码查看下方错误码定义
 */
typedef NS_ENUM(NSInteger,DzErrorSDKConstType)
{
    DzError_UNKNOWN_ERROR                 = 1000000,          //未知错误
    DzError_NETWORK_ERROR                 = 1001000,          //网络错误
    DzError_PARSER_ERROR                  = 1002000,          //接口数据解析错误
    DzError_RESPONSE_CODE_ERROR           = 1003000,          //返回码错误
    DzError_SDK_INIT_ERROR                = 1004000,          //SDK初始化错误
    DzError_CACHE_ERROR                   = 1005000,          //缓存错误
    DzError_MANAGER_ERROR                 = 1006000,          //系统工具错误
    DzError_SKY_ERROR                     = 1007000,          //广告业务相关错误
    DzError_CHILD_SDK_ERROR               = 1008000,          //子包相关错误
    DzError_GAME_ERROR                    = 1009000,          //游戏错误
    DzError_DUMBO_ERROR                   = 1010000,           //飞象错误
};



typedef NS_ENUM(NSInteger,AdPlatformRewardLoadStatus)
{
    AdPlatformRewardDefault  = 0,
    AdPlatformRewardLoading  = 1,      // 开始加载
    AdPlatformRewardAdLoaded     = 2,  // 加载成功
    AdPlatformRewardAdOnShow = 3,   //显示成功
    AdPlatformRewardAdOnClick = 4,  // 点击
    AdPlatformRewardAdPlayStart = 5, // 开始播放
    AdPlatformRewardAdPlayFinish = 6 //播放完成
};


typedef NS_ENUM(NSInteger,AdPlatformFeedLoadStatus)
{
    AdPlatformFeedDefault  = 0,
    AdPlatformFeedLoading  = 1,      // 开始加载
    AdPlatformFeedAdLoaded     = 2,  // 加载成功
    AdPlatformFeedAdOnShow = 3,   //显示成功
    AdPlatformFeedAdOnClick = 4,  // 点击
    AdPlatformFeeddownloadStart = 5, // 开始下载
    AdPlatformFeedAdddownloadFinish = 6 //下载完成
};


typedef NS_ENUM(NSInteger,AdPlatform)
{
    AdPlatformSdk_SDK_TT,///头条
    AdPlatformSdk_SDK_BAIDU,///百度
    AdPlatformSdk_SDK_GDT,///广点通
    AdPlatformSdk_SDK_PPS,///华为
    AdPlatformSdk_SDK_OPPO,///OPPO
    AdPlatformSdk_SDK_VIVO,///VIVO
    AdPlatformSdk_OTHER,///其它
};

///广告加载状态 给外部使用  如果给外部的状态还有其它类型 则在此增加
typedef NS_ENUM(NSInteger, AD_LOAD_STATUS)
{
    AD_LOAD_STATUS_SUCCESS = 1,
    AD_LOAD_STATUS_ERROR,
};



#endif /* AdBaseEnum_h */


//错误信息info中 错误码code 及 content错误信息

/*
 
以下是sdk错误码及错误内容
1004003 | SDK初始化失败
1004004 | 静态变量被系统回收
1008001 | SDK子包实例化错误
1008002 | SDK子包相关的其他错误
1009001 | 穿山甲小游戏初始化错误
1009002 | 穿山甲小游戏登录错误
1006001 | 对称加密秘钥生成工具错误
1006002 | 数据加密解密过程时错误
1006003 | toast工具相关错误
 
以下是所有广告业务逻辑错误
 20001  | 没有合适的广告填充
 40004  | 检查设置的代码位位ID是否为空
1007001 | 加载广告错误
1007002 | 广告超时错误
1007003 | 广告事件监听器拦截时错误
1007004 | 广告播放失败
1007005 | 加载图片失败
1007006 | 信息流模板广告的动画相关错误
 
 
 
以下是网络错误信息
1001001 | HTTP请求错误
1002001 | 解析接口数据错误
1002002 | 解析接口数据其他错误
1005001 | 缓存错误
1005002 | 缓存错误
1005003 | 缓存错误
1005004 | 缓存错误
1005005 | 本地缓存失效
1004001 | 主配置失效
1004002 | 主配置接口数据错误
 
*/
