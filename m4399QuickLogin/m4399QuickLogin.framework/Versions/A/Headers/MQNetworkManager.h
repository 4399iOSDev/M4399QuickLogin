//
//  MQNetworkManager.h
//  m4399QuickLogin
//
//  Created by 何聪 on 2019/9/26.
//

#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonCrypto.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^SuccessHandler)(NSDictionary *);

typedef void(^FailureHandler)(NSError *);

@interface MQNetworkManager : NSObject

+ (instancetype)shareManager;

- (void)fetchConfigWithClientId: (NSString *)clientId success: (SuccessHandler)successHandler failure: (FailureHandler)failureHandler;

- (NSURLSessionTask *)loginWithUrl: (NSString *)url clientId: (NSString *)clientId authCode: (NSString *)authCode accessCode: (NSString *)accessCode success: (SuccessHandler)successHandler failure: (FailureHandler)failureHandler;

@end

NS_ASSUME_NONNULL_END
