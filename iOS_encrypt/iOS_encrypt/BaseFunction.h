//
//  BaseFunction.h
//  DVBands
//
//  Created by Devond on 15/11/23.
//  Copyright © 2015年 Devond. All rights reserved.
//

#import <Foundation/Foundation.h>

#define __BASE64( text )        [BaseFunction base64StringFromText:text]
#define __TEXT( base64 )        [BaseFunction textFromBase64String:base64]

@interface BaseFunction : NSObject

+ (NSString *)md5:(NSString *)src;

+ (NSString *)md5ForPassword:(NSString *)password;

+ (NSString *)md5ForEmployeePassword:(NSString *)password;

+ (long)getAppNumberVersion;

+(NSString *)getImei;



+ (NSString *)base64StringFromText:(NSString *)text;

+ (NSString *)textFromBase64String:(NSString *)base64;

@end
