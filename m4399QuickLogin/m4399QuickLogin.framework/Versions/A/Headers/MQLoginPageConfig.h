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
 SDK3.7.0版本注意事项:
 
 1、合作方根据自身需求，给需要修改的配置项传值即可，无需修改的配置项可不传入值
 
 2、tag参数说明如下：
 *若未修改过xib/nib中的控件tag，tag参数可不传，所有tag参数已有默认的初始值，初始值与bundle中提供的xib/nib文件的控件tag值对应
 *若有传入tag参数，记得检查传入的值是否与xib/nib控件对应，反之亦然，tag参数值需与xib/nib文件的控件tag值保持一一对应
 
 3、除tag参数、nib文件名、bundle资源包名、布尔类型参数（初始值为NO）外，其余可配置参数初始值如下：
 *对象类型参数初始值为nil （包括NSString、UIColor、UIImage、NSArray等）
 *数值类型参数初始值为0
 
 4、偏移量OffsetY值说明如下：
 *所有可配置偏移量OffsetY值的控件的父view只能是xib自带的view，不允许嵌套在其他view中
 *底部勾选按钮、隐私协议标签的偏移量OffsetY值，是相对于屏幕（safeArea）底部，即控件的底部（bottom）相对于safeArea的底部（bottom）
 *其余控件的偏移量OffsetY值，是相对于屏幕（safeArea）的顶部，即控件的顶部（top）相对于父view的顶部（top）
 
 5、隐私协议标签（包括弹窗的隐私协议标签）的高度推荐按照我们提供的xib高度来设置，以便更好地响应点击和区分点击到的协议。
 
**/
@end

NS_ASSUME_NONNULL_END
