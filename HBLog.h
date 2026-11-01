#import <Foundation/Foundation.h>

#define HBLogDebug(fmt, ...) NSLog(@"[PocketProtector] " fmt, ##__VA_ARGS__)
#define HBLogInfo(fmt, ...) NSLog(@"[PocketProtector] " fmt, ##__VA_ARGS__)
#define HBLogWarn(fmt, ...) NSLog(@"[PocketProtector] " fmt, ##__VA_ARGS__)
#define HBLogError(fmt, ...) NSLog(@"[PocketProtector] " fmt, ##__VA_ARGS__)
