//
//  MTOperationManagerInterface.h
//  CityGuideTestApp
//
//  Created by MAXIM TSVETKOV on 15.10.15.
//  Copyright © 2015 MAXIM TSVETKOV. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MTOperationManagerCompletionHandlingConstants.h"

@class MTRootOperation;

@protocol MTOperationManagerInterface <NSObject>

- (void)queueOperationWithBlock:(MTOperationManageCompletionBlock)block;
- (void)queueOperation:(MTRootOperation * _Nonnull)operation;
- (void)cancelAllOperations;

@end
