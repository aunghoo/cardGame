//
//  Deck.h
//  CardMatcher
//
//  Created by Robert Aung Hein Oo on 5/17/19.
//  Copyright © 2019 Robert Aung Hein Oo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

NS_ASSUME_NONNULL_BEGIN

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;
- (Card *)drawRandomCard;

@end

NS_ASSUME_NONNULL_END
