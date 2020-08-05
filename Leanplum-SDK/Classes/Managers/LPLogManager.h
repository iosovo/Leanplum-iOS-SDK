//
//  LPLogManager.h
//  Leanplum-iOS-SDK
//
//  Created by Dejan Krstevski on 31.07.20.
//  Copyright (c) 2020 Leanplum, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, LPLogLevel) {
    Off = 0,
    Error,
    Info,
    Debug
} NS_SWIFT_NAME(Leanplum.LogLevel);

typedef NS_ENUM(NSUInteger, LPLogTypeNew) {
    LPErrorNew,
    LPInfoNew,
    LPDebugNew
} NS_SWIFT_NAME(Leanplum.LogTypeNew);

@interface LPLogManager : NSObject
@property (nonatomic, assign) LPLogLevel logLevel;
+ (LPLogManager *)sharedManager;
+ (void)logInternalError:(NSException *)e;
@end

NS_ASSUME_NONNULL_END
void LPLogNew(LPLogTypeNew type, NSString * _Nullable format, ...);