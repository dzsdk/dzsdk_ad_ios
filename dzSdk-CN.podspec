Pod::Spec.new do |s|
  s.name         = "dzSdk-CN"
  s.version      = "0.4.0"
  s.author       = "limz@dianzhong.com"
  s.summary      = "dzSdk-CN for IOS"

                   
  s.homepage     = "https://www.dianzhong.com"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author       = { "DZ" => "limz@dianzhong.com" }
  s.source       = { :git => "https://github.com/15210684621/dzsdk_ad_ios.git", :tag => s.version.to_s }
 

  s.ios.deployment_target = "9.0"
  s.requires_arc = true
  # s.source_files  = ''
  s.libraries = 'bz2','c++','iconv','resolv.9','sqlite3','xml2','z','c++abi'
  s.frameworks     = "Accelerate", "AdSupport", "AudioToolbox","AVFoundation","CoreGraphics","CoreImage","CoreLocation",
  "CoreMedia","CoreMotion","CoreTelephony","CoreText","ImageIO"
  
  s.module_name  = 'DzSDK'
  s.resources   = ['README.md']
  #s.resource_bundles = {}
  s.vendored_frameworks = 'DzSDK/libAdBase.framework','DzSDK/libAdCore.framework'
  s.pod_target_xcconfig = {
    'FRAMEWORK_SEARCH_PATHS' => '$(inherited) $(PODS_ROOT)/**',
    'HEADER_SEARCH_PATHS' => '$(inherited) $(PODS_ROOT)/**',
    'VALID_ARCHS' => 'x86_64 armv7 arm64',
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
  }

  
  
  # spec.exclude_files = "Classes/Exclude"
  # spec.public_header_files = "Classes/**/*.h"
 

  # ――― Resources ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  A list of resources included with the Pod. These are copied into the
  #  target bundle with a build phase script. Anything else will be cleaned.
  #  You can preserve files from being cleaned, please don't preserve
  #  non-essential files like tests, examples and documentation.
  #

  # spec.resource  = "icon.png"
  # spec.resources = "Resources/*.png"
  # spec.preserve_paths = "FilesToSave", "MoreFilesToSave"


  # ――― Project Linking ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  Link your library with frameworks, or libraries. Libraries do not include
  #  the lib prefix of their name.
  #

  # spec.framework  = "SomeFramework"
  # spec.frameworks = "SomeFramework", "AnotherFramework"

  # spec.library   = "iconv"
  # spec.libraries = "iconv", "xml2"


  # ――― Project Settings ――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  If your library depends on compiler flags you can set them in the xcconfig hash
  #  where they will only apply to your library. If you depend on other Podspecs
  #  you can include multiple dependencies to ensure it works.

  # spec.requires_arc = true
  # spec.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include/libxml2" }
  # spec.dependency "JSONKit", "~> 1.4"

end
