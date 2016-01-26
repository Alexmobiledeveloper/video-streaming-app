//
//  RTPClient.h
//  HTTPLiveStreaming
//
//  Created by Byeongwook Park on 2016. 1. 14..
//  Copyright © 2016년 Metapleasure. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreMedia/CoreMedia.h>

@interface RTPClient : NSObject

@property (weak, nonatomic) NSString *address;
@property (nonatomic) NSInteger port;

- (void)connect:(NSString *)address port:(NSInteger)port;
- (void)close;

- (void)publish:(NSData *)data timestamp:(CMTime)timestamp;

@end
