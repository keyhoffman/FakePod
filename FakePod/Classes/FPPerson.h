//
//  FPPerson.h
//  Pods
//
//  Created by Key Hoffman on 10/2/16.
//
//

#import <Foundation/Foundation.h>
#import <CocoaLumberjack/CocoaLumberjack.h>
#import <Realm/Realm.h>

@interface FPPerson : NSObject

@property (nonnull, nonatomic, copy)NSString *name;
@property (nonnull, nonatomic, copy)NSString *friendName;
@property (nonatomic)int age;

- (nonnull instancetype)initWithName:(nonnull NSString *)name
                          friendName:(nonnull NSString *)friendName
                                 age:(int)age;


@end
