//
//  MQLoginManager.h
//  m4399QuickLogin
//
//  Created by 何聪 on 2019/9/25.
//

#import <Foundation/Foundation.h>
#import <EAccountHYSDK/EAccountOpenPageSDK.h>
#import "MQLoginPageConfig.h"

NS_ASSUME_NONNULL_BEGIN

@interface MQLoginManager : NSObject

@property (nonatomic, assign) BOOL debug;

+ (instancetype)shareManager;

- (void)initWithClientId: (NSString *)clientId;

- (void)openLoginPage:(nullable MQLoginPageConfig *)pageConfig
      timeoutInterval:(NSTimeInterval)timeoutInterval
         clickHandler:(clickEventHandler)clickHandler
           completion:(successHandler)completion
              failure:(failureHandler)fail;

- (void)openLoginPage:(NSTimeInterval)timeoutInterval
         clickHandler:(clickEventHandler)clickHandler
           completion:(successHandler)completion
              failure:(failureHandler)fail;

- (void)closeLoginPage;

@end

NS_ASSUME_NONNULL_END
