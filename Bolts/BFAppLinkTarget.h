/*
 *  Copyright (c) 2014, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

#import <Foundation/Foundation.h>

@interface BFAppLinkTarget : NSObject

/*! Creates a BFAppLinkTarget with the given app site and target URL. */
+ (instancetype)appLinkTargetWithURL:(NSURL *)url
                          appStoreId:(NSString *)appStoreId
                             appName:(NSString *)appName;

/*! The URL prefix for this app link target */
@property (readonly, copy) NSURL *url;

/*! The app ID for the app store */
@property (readonly, copy) NSString *appStoreId;

/*! The name of the app */
@property (readonly, copy) NSString *appName;

@end
