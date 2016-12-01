// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#import "LGBitcoinLikeTransaction.h"


@implementation LGBitcoinLikeTransaction

- (nonnull instancetype)initWithInputs:(nonnull NSArray<LGBitcoinLikeInput *> *)inputs
                               outputs:(nonnull NSArray<LGBitcoinLikeOutput *> *)outputs
                                 block:(nullable LGBitcoinLikeBlock *)block
{
    if (self = [super init]) {
        _inputs = [inputs copy];
        _outputs = [outputs copy];
        _block = block;
    }
    return self;
}

+ (nonnull instancetype)BitcoinLikeTransactionWithInputs:(nonnull NSArray<LGBitcoinLikeInput *> *)inputs
                                                 outputs:(nonnull NSArray<LGBitcoinLikeOutput *> *)outputs
                                                   block:(nullable LGBitcoinLikeBlock *)block
{
    return [[self alloc] initWithInputs:inputs
                                outputs:outputs
                                  block:block];
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p inputs:%@ outputs:%@ block:%@>", self.class, (void *)self, self.inputs, self.outputs, self.block];
}

@end
