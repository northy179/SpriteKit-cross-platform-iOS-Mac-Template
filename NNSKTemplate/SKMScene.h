//
//  SKMScene.h
//  NNSKTemplate
//
//  Created by Neil North on 16/02/2014.
//  Copyright (c) 2014 Neil North. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface SKMScene : SKScene

//Screen Interactions
-(void)screenInteractionStartedAtLocation:(CGPoint)location;
-(void)screenInteractionEndedAtLocation:(CGPoint)location;

@end
