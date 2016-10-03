//
//  FPPerson.h
//  Pods
//
//  Created by Key Hoffman on 10/2/16.
//
//

#import <Foundation/Foundation.h>

@interface FPPerson : NSObject

@property (nonnull, nonatomic, copy)NSString *name;
@property (nonatomic)int age;

- (nonnull instancetype)initWithName:(nonnull NSString *)name
                                 age:(int)age;


@end
