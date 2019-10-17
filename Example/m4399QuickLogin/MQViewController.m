//
//  MQViewController.m
//  m4399QuickLogin
//
//  Created by hecong@4399inc.com on 09/30/2019.
//  Copyright (c) 2019 hecong@4399inc.com. All rights reserved.
//

#import "MQViewController.h"
#import <m4399QuickLogin/m4399QuickLogin.h>

@interface MQViewController ()

@end

@implementation MQViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    [MQLoginManager shareManager].debug = YES;
    [[MQLoginManager shareManager] initWithClientId:@"test"]; //请联系开发者获取clientId
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
- (IBAction)test:(id)sender {
    [[MQLoginManager shareManager] openLoginPage:6 clickHandler:^(NSString * _Nonnull senderTag) {
        
    } completion:^(NSDictionary * _Nonnull resultDic) {
        [[MQLoginManager shareManager] closeLoginPage];
        [self showAlerView:[NSString stringWithFormat:@"%@", resultDic] title:@"登录成功"];
    } failure:^(NSError * _Nonnull error) {
        [[MQLoginManager shareManager] closeLoginPage];
        [self showAlerView:error.domain title:[NSString stringWithFormat:@"error: %ld", (long)error.code]];
    }];
}

- (void)showAlerView:(NSString *)message title: (NSString *)title {
    UIAlertController *vc = [UIAlertController alertControllerWithTitle:title message:message preferredStyle:UIAlertControllerStyleAlert];
    [vc addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleCancel handler:nil]];
    [self presentViewController:vc animated:YES completion:nil];
}
@end
