//
//  Friend+Create.h
//  OwnTracks
//
//  Created by Christoph Krey on 29.09.13.
//  Copyright (c) 2013-2015 Christoph Krey. All rights reserved.
//

#import "Friend.h"
#import <AddressBook/AddressBook.h>

@interface Friend (Create)
+ (ABAddressBookRef)theABRef;

+ (Friend *)existsFriendWithTopic:(NSString *)topic
     inManagedObjectContext:(NSManagedObjectContext *)context;

+ (Friend *)friendWithTopic:(NSString *)topic
                        tid:(NSString *)tid
     inManagedObjectContext:(NSManagedObjectContext *)context;

+ (NSString *)nameOfPerson:(ABRecordRef)record;
+ (NSData *)imageDataOfPerson:(ABRecordRef)record;

+ (NSArray *)allFriendsInManagedObjectContext:(NSManagedObjectContext *)context;

- (void)linkToAB:(ABRecordRef)record;
- (NSString *)name;
- (NSData *)image;
- (NSString *)getEffectiveTid;
- (Location *)newestLocation;

@end
