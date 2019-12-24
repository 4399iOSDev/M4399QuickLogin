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

typedef void (^DidOpenPage) (void);

typedef void(^FetchCompletionHandler)(void);

typedef void(^ClickHandler)(NSInteger tag);

typedef void(^FailureHandler)(NSError *);

@interface MQLoginManager : NSObject

@property (nonatomic, assign) BOOL debug;

+ (instancetype)shareManager;

/**
 初始化接口(含网络请求，需要一定时间来完成初始化

 @param clientId clientID
 @param completion 初始化完成的回调
 @param fail 初始化失败的回调
 */
- (void)initWithClientId:(NSString *)clientId
              completion: (nullable FetchCompletionHandler)completion
                 failure: (nullable FailureHandler)fail;

/**
 检测网络是否能够使用一键登录，建议登录前调用

 @param success 可以使用一键登录时的回调
 @param failure 不能使用一键登录时的回调
 */
- (void)checkNetwork: (successHandler)success failure: (failureHandler)failure;

/**
 登录接口

 @param pageConfig 登录页面的配置
 @param timeoutInterval 登录接口的超时时间，单位为秒
 @param clickHandler 自定义按钮点击事件回调
 @param didOpenPage 打开登录页面时的回调
 @param completion 登录完成的回调
 @param fail 登录失败的回调 （返回按钮的点击回调也在这里）
 */
- (void)openLoginPage:(nullable MQLoginPageConfig *)pageConfig
      timeoutInterval:(NSTimeInterval)timeoutInterval
         clickHandler:(clickEventHandler)clickHandler
          pageDidOpen:(DidOpenPage)didOpenPage
           completion:(successHandler)completion
              failure:(failureHandler)fail;

- (void)openLoginPage:(NSTimeInterval)timeoutInterval
         clickHandler:(clickEventHandler)clickHandler
          pageDidOpen:(DidOpenPage)didOpenPage
           completion:(successHandler)completion
              failure:(failureHandler)fail;

/**
 关闭登录页面
 返回按钮和登录成功后不会自动退出登录页面，需要手动调用此方法
 */
- (void)closeLoginPage: (void(^ __nullable)(void))completion;

@end

NS_ASSUME_NONNULL_END
