//
//  CMPConfiguration.h
//  Computop
//
//  Created by Thomas Segkoulis on 07/09/16.
//  Copyright © 2016 Computop GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 'CMPConfiguration'
 
 The 'CMPConfiguration' class encapsulates all Merchant & App related data, generated by Computop.
 
 */
@interface CMPConfiguration : NSObject

/**
 Alphanumerical value which uniquely identifies the merchant within the Paygate
 */
+ (NSString *)merchantID;
+ (void) setMerchantID: (NSString *)newMerchandID;

/**
 Identifies the merchant, as previously agreed with Apple.  Must match one of the merchant
 identifiers in the application's entitlement.
 */
+ (NSString *)merchantAppleID;
+ (void) setMerchantAppleID: (NSString *)newMerchandID;

/**
 Alphanumerical value which uniquely identifies the merchant's App within the Paygate
*/
+ (NSString *)appID;
+ (void) setAppID: (NSString *)newAppID;

@end
