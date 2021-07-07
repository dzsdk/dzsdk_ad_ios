//
//  LoaderParam.h
//  libAdBase
//
//  Created by lizz on 2021/4/15.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LoaderParam : NSObject

/*!
 *  AppKey
 */
@property (nonatomic, strong, readonly) NSString *appKey;


@property (nonatomic,copy) NSString *union_sdk_version;


@property (nonatomic,copy) NSString *user_id; // 用户id 非必传


@property(nonatomic, strong) UIViewController *rootViewController;



@property(nonatomic,strong) AdLoadModel *adLoadModel;
/**
 广告位置ID
 */
@property (nonatomic, copy) NSString *adslot_id __attribute__ ((deprecated));

/**
 * 广告位置Ids  支持多个广告位
 */
@property (nonatomic, copy) NSArray *adslot_ids;


/**
 广告显示宽度
 */
@property (nonatomic, assign)  NSInteger adWidth;
/**
 广告显示高度
 */
@property (nonatomic, assign)  NSInteger adHeight; //高度设置为0
/**
 展示的书籍ID
 */
@property (nonatomic, copy) NSString *bookId;
/**
 展示的章节ID
 */
@property (nonatomic, copy) NSString *chapterId;

/**
 横屏 竖屏
 */
@property (nonatomic, assign) Oritentation orientation;

/**
 横屏 竖屏
 */
@property (nonatomic, assign) ResultAdType resultAdType;





@end

NS_ASSUME_NONNULL_END
