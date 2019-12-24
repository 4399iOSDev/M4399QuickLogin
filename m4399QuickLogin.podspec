#
# Be sure to run `pod lib lint m4399QuickLogin.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'm4399QuickLogin'
  s.version          = '1.2.0'
  s.summary          = '4399一键登录SDK'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
4399一键登录SDK，目前支持移动、电信和联通的一键登录
                       DESC

  s.homepage         = 'https://github.com/4399iOSDev/M4399QuickLogin'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'hecong@4399inc.com' => 'messiah2735@gmail.com' }
  s.source           = { :git => 'https://github.com/4399iOSDev/M4399QuickLogin.git', :tag => s.version.to_s }

  s.ios.deployment_target = '9.0'
  
  # s.source_files = 'm4399QuickLogin/Classes/**/*'
  
  s.resource_bundles =  {
    'EAccountOpenPageResource' => ['m4399QuickLogin/Assets/*']
  }
  
  s.ios.vendored_frameworks = 'm4399QuickLogin/Framewrok/*'
  
  s.libraries = 'c++.1', 'z.1.2.8'
  
  s.pod_target_xcconfig = { 'OTHER_LDFLAGS' => ['-ObjC', '-lstdc++'] }

end
