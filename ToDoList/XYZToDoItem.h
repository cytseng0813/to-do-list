//
//  XYZToDoItem.h
//  ToDoList
//
//  Created by cy_tseng on 2016/4/7.
//  Copyright © 2016年 cy_tseng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject
@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *createDate;
@end
