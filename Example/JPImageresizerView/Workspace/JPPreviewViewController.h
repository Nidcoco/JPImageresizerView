//
//  JPPreviewViewController.h
//  JPImageresizerView_Example
//
//  Created by 周健平 on 2018/1/2.
//  Copyright © 2018年 ZhouJianPing. All rights reserved.
//

#import <UIKit/UIKit.h>
@class JPImageresizerResult;

NS_ASSUME_NONNULL_BEGIN

@interface JPPreviewViewController : UIViewController
+ (instancetype)buildWithResult:(JPImageresizerResult *)result;
+ (instancetype)buildWithResults:(NSArray<JPImageresizerResult *> *)results
                     columnCount:(NSInteger)columnCount
                        rowCount:(NSInteger)rowCount;
@end

NS_ASSUME_NONNULL_END
