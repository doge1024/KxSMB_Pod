# KxSMB_Pod

[![CI Status](http://img.shields.io/travis/harddog/KxSMB_Pod.svg?style=flat)](https://travis-ci.org/harddog/KxSMB_Pod)
[![Version](https://img.shields.io/cocoapods/v/KxSMB_Pod.svg?style=flat)](http://cocoapods.org/pods/KxSMB_Pod)
[![License](https://img.shields.io/cocoapods/l/KxSMB_Pod.svg?style=flat)](http://cocoapods.org/pods/KxSMB_Pod)
[![Platform](https://img.shields.io/cocoapods/p/KxSMB_Pod.svg?style=flat)](http://cocoapods.org/pods/KxSMB_Pod)

## Example

To run the example project, clone the repo, and run `pod install` from the Example directory first.

## Requirements

## Installation
1. in terminal run `git clone https://github.com/harddog/kxsmb.git`
2. in terminal run  `cd kxsmb`
3. in terminal run 

``` 
export samba_cv_big_endian=no
export samba_cv_little_endian=yes
export samba_cv_CC_NEGATIVE_ENUM_VALUES=yes
export libreplace_cv_HAVE_GETADDRINFO=no
export samba_cv_HAVE_WRFILE_KEYTAB=no
export smb_krb5_cv_enctype_to_string_takes_krb5_context_arg=no
export smb_krb5_cv_enctype_to_string_takes_size_t_arg=yes
export ac_cv_file__proc_sys_kernel_core_pattern=yes

rake 
```
4. long time ago wait to show `"copy samba/lib/util/talloc_stack.h -> libs"`

KxSMB_Pod is available through [CocoaPods](http://cocoapods.org). To install
it, simply add the following line to your Podfile:

```ruby
pod "KxSMB_Pod"
```

## Author

harddog, 867129306@qq.com

## License

KxSMB_Pod is available under the MIT license. See the LICENSE file for more info.
