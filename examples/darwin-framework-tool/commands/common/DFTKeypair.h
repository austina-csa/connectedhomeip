/*
 *   Copyright (c) 2024 Project CHIP Authors
 *   All rights reserved.
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 */

#import <Matter/Matter.h>

NS_ASSUME_NONNULL_BEGIN

@interface DFTKeypair : NSObject <MTRKeypair>
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)createKeypairWithStorage:(id)storage error:(NSError * _Nullable __autoreleasing *)error;
- (NSData *)signMessageECDSA_DER:(NSData *)message;
- (SecKeyRef)copyPublicKey;
- (NSData *)getIPK;
@end

NS_ASSUME_NONNULL_END