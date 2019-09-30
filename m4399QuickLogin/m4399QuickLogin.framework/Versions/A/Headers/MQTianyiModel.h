//
//  MQTianyiModel.h
//  m4399QuickLogin
//
//  Created by 何聪 on 2019/9/27.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MQTianyiModel : NSObject <NSCoding>

@property (nonatomic, copy) NSString *appID;

@property (nonatomic, copy) NSString *appSecret;

@property (nonatomic, copy) NSString *api;

@property (nonatomic, assign, readonly) BOOL isInitSuccess;

- (instancetype)initWithJsonObject: (id)object;

@end

NS_ASSUME_NONNULL_END
