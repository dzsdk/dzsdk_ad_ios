//
//  AdLoadModel.h
//  DZAdSDK
//
//  Created by DZ on 2021/4/15.
//

#import <Foundation/Foundation.h>

@class DzImageModel;
@class DzAdCommonReqParam;

@interface AdLoadModel : NSObject

@property (nonatomic, copy) NSString *adslot_id; // 广告位id
@property (nonatomic, copy) NSString *chn_type; //广告来源

@property (nonatomic, copy) NSString *chn_app_id;
@property (nonatomic, copy) NSString *chn_slot_id;  //平台广告位id

@property (nonatomic, copy) NSString *tiltle;  // 标题
@property (nonatomic, copy) NSString *decription; // 描述
@property (nonatomic, copy) NSString *msg;
@property (nonatomic, assign)NSString *icon_url;


@property (nonatomic, strong)NSArray *req2_trackers;
@property (nonatomic, strong)NSArray *send2_trackers;
@property (nonatomic, strong)NSArray *win_trackers;
@property (nonatomic, strong)NSArray *load_trackers;
@property (nonatomic, strong)NSArray *imp_trackers;
@property (nonatomic, strong)NSArray *click_trackers;

@property (nonatomic, strong)NSArray *play_start_trackers;
@property (nonatomic, strong)NSArray *play_finish_trackers;


@property (nonatomic, strong)NSArray *download_start_trackers;
@property (nonatomic, strong)NSArray *download_finish_trackers;

@property (nonatomic, strong)NSArray *install_start_trackers;
@property (nonatomic, strong)NSArray *install_finish_trackers;

@property (nonatomic, assign) int expire;
@property (nonatomic, assign) int interaction_type;

@property (nonatomic, assign) int timeout;

@property (nonatomic, assign) NSInteger style_type;

@property (nonatomic, strong) NSArray <DzImageModel *>*images;


@end

@interface DzImageModel : NSObject

@property (nonatomic, copy) NSString *url;

@property (nonatomic, assign) int width;

@property (nonatomic, copy) NSString *height;


@end


