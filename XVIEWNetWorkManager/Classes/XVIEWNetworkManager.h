//
//  XVIEWNetworkManager.h
//  XVIEWNetworkManager
//
//  Created by zd on 2019/1/18.
//  Copyright © 2019 zd. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface XVIEWNetworkManager : NSObject

/**
 *  单例
 */
+ (instancetype)sharedNetworkManager;

/**
 *  请求
 @param param     data    {"type":请求类型  0 Get请求/1 POST请求,url  请求地址,其他参数},
 callback回调方法
 */
- (void)request:(NSDictionary *)param;

/**
 *  下载
 @param param     data    {"name":文件名,url  请求地址},
 callback回调方法
 */
- (void)download:(NSDictionary *)param;

/**
 *  上传多文件(包括视频图片等)
 @param param     data    {path:[],url:"",其他参数}  path 文件路径数据 url接口路径
 callback回调方法
 */
- (void)uploadMultiFile:(NSDictionary *)param;

/**
 *  检测网络状态
 @param param  callback回调方法
 */
- (void)checkNetwork:(NSDictionary *)param;

@end

NS_ASSUME_NONNULL_END
