//
//  FPPerson.m
//  Pods
//
//  Created by Key Hoffman on 10/2/16.
//
//

#import "FPPerson.h"

@implementation FPPerson

- (instancetype)initWithName:(NSString *)name age:(int)age {
    self = [super init];
    
    if (self) {
        _name = name;
        _age = age;
    }
    
    return self;
}

@end
