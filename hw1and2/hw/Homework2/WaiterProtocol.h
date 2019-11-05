//
//  WaiterProtocol.h
//  hw
//
//  Created by nate.taylor_macbook on 29/09/2019.
//  Copyright © 2019 natetaylor. All rights reserved.
//

/**
 This protocol is for any class that wants to be a waiter
 such class is used as delegate in Guest and Kitchen classes
 */
@protocol WaiterProtocol <NSObject>


/**
 adds a guest as a property in order to send order back to him when it is cooked

 @param newGuest guest object that asks waiter for different operations
 */
-(void)serveGuest:(id) newGuest;

/**
 gives menu to guest when called as a function of delegate

 @return menu with some dishes and prices
 */
-(NSDictionary *)giveMenu;

/**
 sends order taken form guest to kitchem object

 @param order consists of NSString names of some dishes from menu
 */
-(void)sendOrderToKitchen: (NSMutableArray *)order;

/**
 sends one dish to guest when called as a function of delegate

 @param dish NSString name of dish ready to be eaten
 */
-(void)deliverToGuest:(NSString*)dish;

/**
 gets money from guest if he is in good mood

 @param someMoney some NSInteger value generated by guest using random function
 */
-(void)getTip:(NSInteger)someMoney;

@optional

/**
 sends msg from waiter to console
 here it is used when kitchen cooked some dish, called as a function of delegate

 @param something any msg (here it is name of the dish and msg that it is ready)
 */
-(void)knowAbout:(NSString *)something;

@end
