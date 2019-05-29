//
//  PlayingCard.h
//  CardMatcher
//
//  Created by Robert Aung Hein Oo on 5/21/19.
//  Copyright © 2019 Robert Aung Hein Oo. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end

