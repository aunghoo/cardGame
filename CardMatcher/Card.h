//
//  Card.h
//  CardMatcher
//
//  Created by Robert Aung Hein Oo on 5/20/19.
//  Copyright © 2019 Robert Aung Hein Oo. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Card : NSObject

@property (strong, nonatomic) NSString *contents;

@property (nonatomic, getter=isChosen) BOOL chosen;
@property (nonatomic, getter=isMatched) BOOL matched;

- (int)match:(NSArray *)otherCards;


@end

NS_ASSUME_NONNULL_END
