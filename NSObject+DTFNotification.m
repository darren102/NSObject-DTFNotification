//
//  NSObject+DTFNotification.m
//
//  Created by Darren Ferguson on 5/18/14.
//  Email: darren102@gmail.com
//

#import "NSObject+DTFNotification.h"

@implementation NSObject (DTFNotification)

# pragma mark - Public instance methods (PUBLIC-INSTANCE)

- (void)dtf_PostNotification:(NSString*)name
{
    [[self class] dtf_PostNotification:name object:nil userInfo:nil];
}

- (void)dtf_PostNotification:(NSString*)name userInfo:(NSDictionary*)userInfo
{
    [[self class] dtf_PostNotification:name object:nil userInfo:userInfo];
}

- (void)dtf_PostNotification:(NSString*)name object:(id)object userInfo:(NSDictionary*)userInfo
{
    [[self class] dtf_PostNotification:name object:object userInfo:userInfo];
}

# pragma mark - Public class methods (PUBLIC-CLASS)

+ (void)dtf_PostNotification:(NSString*)name
{
    [self dtf_PostNotification:name object:nil userInfo:nil];
}

+ (void)dtf_PostNotification:(NSString*)name userInfo:(NSDictionary*)userInfo
{
    [self dtf_PostNotification:name object:nil userInfo:userInfo];
}

+ (void)dtf_PostNotification:(NSString*)name object:(id)object userInfo:(NSDictionary*)userInfo
{
    NSParameterAssert(name);
    [[NSNotificationCenter defaultCenter] postNotificationName:name object:object userInfo:userInfo];
}

@end
