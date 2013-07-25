//
//  MySecondObject.h
//  test_generics
//
//  Created by Andrea Cremaschi on 25/07/13.
//  Copyright (c) 2013 midapp. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ObjectiveCGenerics.h"

GENERICSABLE(MySecondObject)
@interface MySecondObject : NSObject<MySecondObject>

@end
