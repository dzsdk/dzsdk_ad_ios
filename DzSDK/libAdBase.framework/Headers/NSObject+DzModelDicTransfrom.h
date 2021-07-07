//
//  NSObject+DzModelDicTransfrom.h
//  libAdCore
//
//  Created by DZ on 2021/4/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (DzModelDicTransfrom)


+ (nullable instancetype)dz_modelWithDictionary:(NSDictionary *)dictionary; //字典转model

- (BOOL)dz_modelSetWithDictionary:(NSDictionary *)dic;

- (nullable id)dz_modelToJSONObject;


@end

@protocol DZModelTransform <NSObject>


@optional


+ (nullable NSDictionary<NSString *, id> *)modelCustomPropertyMapper;

+ (nullable NSDictionary<NSString *, id> *)modelContainerPropertyGenericClass;


+ (nullable Class)modelCustomClassForDictionary:(NSDictionary *)dictionary;


+ (nullable NSArray<NSString *> *)modelPropertyBlacklist;


+ (nullable NSArray<NSString *> *)modelPropertyWhitelist;


- (NSDictionary *)modelCustomWillTransformFromDictionary:(NSDictionary *)dic;


- (BOOL)modelCustomTransformFromDictionary:(NSDictionary *)dic;


- (BOOL)modelCustomTransformToDictionary:(NSMutableDictionary *)dic;


@end

NS_ASSUME_NONNULL_END
