//
//  RDMainMenu.h
//  RainbowDash
//
//  Created by Michael Victor Zink on 5/2/11.
//  Copyright 2011 Michael Victor Zink. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"

@interface RDMainMenu : CCLayer

+ (CCScene *) scene;

- (void) menuStartItemPressed: (CCMenuItem *) menuItem;
- (void) startGame;

@end
