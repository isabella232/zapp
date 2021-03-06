//
//  ZappMessageController.h
//  Zapp
//
//  Created by Zach Margolis on 10/5/11.
//  Licensed to Square, Inc. under one or more contributor license agreements.
//  See the LICENSE file distributed with this work for the terms under
//  which Square, Inc. licenses this file to you.

#import <Foundation/Foundation.h>

@interface ZappMessageController : NSObject

+ (void)sendMessageIfNeededForBuild:(ZappBuild *)build;

@end
