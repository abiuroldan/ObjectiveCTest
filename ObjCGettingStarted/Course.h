//
//  Course.h
//  ObjCGettingStarted
//
//  Created by Abiú on 1/12/19.
//  Copyright © 2019 Abiu. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Course : NSObject

@property (strong, nonatomic) NSString *name;
@property (strong, nonatomic) NSNumber *numberOfLessons;

@end

NS_ASSUME_NONNULL_END
