//
//  EventsBL.h
//  BusinessLogicLayer
//
//  Created by tonyguan on 12-11-22.
//  Copyright (c) 2012年 tonyguan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EventsDAO.h"
#import "Events.h"

@interface EventsBL : NSObject

//查询所用数据方法
-(NSMutableArray*) readData;

@end
