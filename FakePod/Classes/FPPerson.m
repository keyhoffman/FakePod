//
//  FPPerson.m
//  Pods
//
//  Created by Key Hoffman on 10/2/16.
//
//

#import "FPPerson.h"

@implementation FPPerson

- (instancetype)initWithName:(NSString *)name friendName:(NSString *)friendName age:(int)age {
    self = [super init];
    
    if (self) {
        _name = name;
        _friendName = friendName;
        _age = age;
    }
    
    return self;
}

@end
