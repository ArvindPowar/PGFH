//
//  AnnouncementVO.h
//  PGFH
//
//  Created by arvind on 9/6/15.
//  Copyright (c) 2015 arvind. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AnnouncementVO : NSObject
@property(nonatomic,retain) NSString *title,*descriptionS,*feedtype,*pictures,*feedid,*feedpostdate,*comment,*pictureId;
@property(nonatomic,retain) NSMutableArray *commentsArray,*pictureArray;

@end
