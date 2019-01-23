//
//  ZDNetWorking.h
//  XVIEWPodsApp
//
//  Created by yyj on 2018/7/3.
//  Copyright © 2018年 Lianghao An. All rights reserved.
//

#import <Foundation/Foundation.h>


typedef void(^net)(NSInteger netEnvi);

typedef NS_ENUM  (NSUInteger, ZDNetWorkType){
    ZDNetWorkGET,
    ZDNetWorkPOST
};

@interface ZDNetWorking : NSObject
/*
 get、post请求
 */
+ (void)downloadDataWithType:(ZDNetWorkType)type
                        Path:(NSString *)path
                  Parameters:(NSDictionary *)parameters
                     success:(void (^)(NSData *data))success fail:(void (^)(NSError *error))fail;

/*
 post请求
 */
+ (void)downloadDataWithPath:(NSString *)path
                  parameters:(NSDictionary *)parameters
                    callback:(void (^)(NSDictionary *data))callbackBlock DEPRECATED_MSG_ATTRIBUTE("[downloadDataWithType:Path:Parameters:success:fail:]");


//上传本地文件
+ (void)postUploadFileParameters:(NSDictionary *)parameters
                        callback:(void (^)(NSDictionary *para))callbackBlock;

/**
 *  下载文件
 *
 *  @param urlString  下载的RL
 *  @param filepath   下载路径
 *  @param progress   进度Block
 *  @param completion 完成Block
 */
+ (void)downloadFileWithPath:(NSString *)urlString
                    filepath:(NSString *)filepath
                    progress:(void (^)(float progress))progress
                  completion:(void (^)(NSError *error))completion;
/*
  监测是否有网络
 */
+ (void)monitorNetWork:(net)hasnet;
@end
