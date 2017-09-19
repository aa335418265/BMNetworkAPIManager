//
//  BMEnumType.h
//  BMNetworking
//
//  Created by fenglh on 2017/3/14.
//  Copyright © 2017年 BlueMoon. All rights reserved.
//

#ifndef BMEnumType_h
#define BMEnumType_h

typedef NS_ENUM (NSUInteger , BMUserLoginStatus){
    BMUserLoginStatusUnLogin,
    BMUserLoginStatusTokenInvalid,
    BMUserLoginStatusLoginNormal,
};

//HTTP 请求类型
typedef NS_ENUM(NSUInteger, BMAPIManagerRequestType){
    BMAPIManagerRequestTypeGet,
    BMAPIManagerRequestTypePost,
    BMAPIManagerRequestTypePut,
    BMAPIManagerRequestTypeDelete,
    BMAPIManagerRequestTypePostMimeType
};


//分页类型
typedef NS_ENUM (NSUInteger , BMPageType){
    BMPageTypeTimeStamp,//按时间戳分页
    BMPageTypePageNumber//按页码分页
};


//网络日志等级
typedef NS_ENUM (NSUInteger , BMNetworkLogLevel){
    BMNetworkLogLevelInfo,
    BMNetworkLogLevelVerbose
};

#endif /* BMEnumType_h */
