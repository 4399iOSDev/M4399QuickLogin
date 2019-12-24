//
//  MQLoginPageConfig.h
//  m4399QuickLogin
//
//  Created by 何聪 on 2019/9/27.
//

#import <EAccountHYSDK/EAccountOpenPageConfig.h>

NS_ASSUME_NONNULL_BEGIN

@interface MQLoginPageConfig : EAccountOpenPageConfig

/**
 sdk1.2.0版本注意事项:

 1、合作方根据自身需求，给需要修改的配置项传值即可，无需修改的配置项可不传入值

 2、tag参数说明如下：
 *所有tag参数使用默认值，默认值与bundle中提供的xib/nib文件的控件tag值对应

 3、除tag参数、nib文件名、bundle资源包名、布尔类型参数（初始值为NO）外，其余可配置参数初始值如下：
 *对象类型参数初始值为nil （包括NSString、UIColor、UIImage、NSArray等）
 *数值类型参数初始值为0

 4、隐私协议标签（包括弹窗的隐私协议标签）的高度推荐按照我们提供的xib高度来设置，以便更好地响应点击和区分点击到的协议。
 **/


// 各个控件的tag:

// 导航栏相关
// 导航栏衬底视图的tag ------------- 31001
#define NAV_UNDERLAYMENT_TAG        31001
// 导航栏视图tag ------------------ 31002
#define NAV_VIEW_TAG                31002
// 导航栏标题标签tag --------------- 31003
#define NAV_TITLE_LAEBL_TAG         31003
// 导航栏返回按钮tag  -------------- 21001
#define NAV_GO_BACK_TAG             21001
// 导航栏底部横线tag --------------- 31004
#define NAV_LINE_TAG                31004

// logo
// logo tag --------------------- 32001
#define LOGO_TAG                    32001

// 手机号标签
// 号码标签tag -------------------- 21002
#define NUMBER_LABEL_TAG            21002

// 中部logo及标签
// 品牌logo tag ----------------- 21003
#define BRAND_LOGO_TAG              21003
// 品牌标签 tag ------------------ 21004
#define BRAND_LAEBL_TAG             21004

// 登录按钮
// 登录按钮tag ------------------- 21005
#define LOGIN_BUTTON_TAG            21005
// loading图tag ----------------- 210051
#define LOGIN_LOADING_TAG           210051

// 其他登录按钮
//其他登录方式按钮tag ---------------- 21006
#define OTHER_WAY_LOGIN_TAG         21006

// 勾选按钮和隐私协议标签
// 勾选按钮tag --------------------- 21007
#define CHECK_BUTTON_TAG            21007
// 隐私协议标签tag ------------------ 21008
#define CHECK_PA_LABEL_TAG          21008

// 弹窗
// 弹窗底视图tag --------------------- 21100
#define DIALOG_VIEW_TAG             21100
// 返回按钮tag -------------------- 21102
#define DIALOG_BACK_BUTTON_TAG      21102
// 同意按钮tag -------------------- 21103
#define DIALOG_AGREE_BUTTON_TAG     21103
// 背景蒙板（即弹窗后面的半透明黑框）tag ----------- 21104
#define DIALOG_MASK_TAG             21104
// 隐私协议标签tag --------------- 21105
#define DIALOG_PA_LAEBL_TAG         21105

// 协议web页面
//协议web页面 导航栏视图tag ----------------- 21200
#define WEB_NAV_VIEW_TAG            21200
//协议web页面 导航栏返回按钮tag   ------------ 21201
#define WEB_NAV_GO_BACK_TAG         21201
//协议web页面 导航栏衬底视图的tag ------------ 21202
#define WEB_NAV_UNDERLAYMENT_TAG    21202
//协议web页面 进度条的tag ------------------- 21203
#define WEB_PROGRESS_VIEW_TAG       21203
//协议web页面 导航栏标题标签tag -------------- 21204
#define WEB_NAV_TEXT_LAEBL_TAG      21204
//协议web页面 导航栏底部横线tag -------------- 21205
#define WEB_NAV_LINE_TAG            21205

@property (nonatomic, copy) NSString *safeNumber;

/**
 自定义协议名称
 */
@property (nonatomic, copy) NSString *customPAName;

- (UIImage *)imageNamedFromYPBundle:(NSString *)name;
@end

NS_ASSUME_NONNULL_END
