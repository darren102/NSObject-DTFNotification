//
//  NSObject+DTFNotification.h
//
//  Created by Darren Ferguson on 5/18/14.
//  Email: darren102@gmail.com
//

@interface NSObject (DTFNotification)

/**
 * Helper method to allow posting NSNotifications from NSObject derived instances
 *
 * @param 'name' the notification name you are sending through the system, cannot be 'nil'
 */
- (void)dtf_PostNotification:(NSString*)name __attribute__((nonnull(1)));

/**
 * Helper method to allow posting NSNotifications from NSObject derived instances
 *
 * @param 'name' the notification name you are sending through the system, cannot be 'nil'
 * @param 'userInfo' NSDictionary of extra information to pass along with the NSNotification, can be 'nil'
 */
- (void)dtf_PostNotification:(NSString*)name userInfo:(NSDictionary*)userInfo __attribute__((nonnull(1)));

/**
 * Helper method to allow posting NSNotifications from NSObject derived instances
 *
 * @param 'name' the notification name you are sending through the system, cannot be 'nil'
 * @param 'object' if you wish to specify the notification is from a specific object or not, can be 'nil'
 * @param 'userInfo' NSDictionary of extra information to pass along with the NSNotification, can be 'nil'
 */
- (void)dtf_PostNotification:(NSString*)name object:(id)object userInfo:(NSDictionary*)userInfo __attribute__((nonnull(1)));

/**
 * Helper method to allow posting NSNotifications from NSObject derived classes
 *
 * @param 'name' the notification name you are sending through the system, cannot be 'nil'
 */
+ (void)dtf_PostNotification:(NSString*)name __attribute__((nonnull(1)));

/**
 * Helper method to allow posting NSNotifications from NSObject derived classes
 *
 * @param 'name' the notification name you are sending through the system, cannot be 'nil'
 * @param 'userInfo' NSDictionary of extra information to pass along with the NSNotification, can be 'nil'
 */
+ (void)dtf_PostNotification:(NSString*)name userInfo:(NSDictionary*)userInfo __attribute__((nonnull(1)));

/**
 * Helper method to allow posting NSNotifications from NSObject derived classes
 *
 * @param 'name' the notification name you are sending through the system, cannot be 'nil'
 * @param 'object' if you wish to specify the notification is from a specific object or not, can be 'nil'
 * @param 'userInfo' NSDictionary of extra information to pass along with the NSNotification, can be 'nil'
 */
+ (void)dtf_PostNotification:(NSString*)name object:(id)object userInfo:(NSDictionary*)userInfo __attribute__((nonnull(1)));

@end
