//
//  DLGMemEntry.h
//  memui
//
//  Created by Liu Junqi on 4/23/18.
//  Copyright © 2018 DeviLeo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DLGMemEntry : NSObject

@end
@interface VerifyEntry : NSObject

+ (instancetype)MySharedInstance;

- (NSString*)getIDFA;

- (void)showAlertMsg:(NSString *)show error:(BOOL)error;


@end
