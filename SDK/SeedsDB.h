// SeedsDB.h
//
// This code is provided under the MIT License.
//
// Please visit www.count.ly for more information.
//
// Changed by Oleksii Pelykh
//
// Changes: renamed from 'CountlyDB'
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@interface SeedsDB : NSObject

+(instancetype)sharedInstance;

-(void)createEvent:(NSString*) eventKey count:(double)count sum:(double)sum segmentation:(NSDictionary*)segmentation timestamp:(NSTimeInterval)timestamp;
-(void)addToQueue:(NSString*)postData;
-(void)deleteEvent:(NSManagedObject*)eventObj;
-(void)removeFromQueue:(NSManagedObject*)postDataObj;
-(NSArray*) getEvents;
-(NSArray*) getQueue;
-(NSUInteger)getEventCount;
-(NSUInteger)getQueueCount;
- (void)saveContext;

@end
