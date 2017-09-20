// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#import "LGAccountCreationInfo.h"


@implementation LGAccountCreationInfo

- (nonnull instancetype)initWithIndex:(int32_t)index
                               owners:(nonnull NSArray<NSString *> *)owners
                          derivations:(nonnull NSArray<NSString *> *)derivations
                           publicKeys:(nonnull NSArray<NSData *> *)publicKeys
{
    if (self = [super init]) {
        _index = index;
        _owners = [owners copy];
        _derivations = [derivations copy];
        _publicKeys = [publicKeys copy];
    }
    return self;
}

+ (nonnull instancetype)AccountCreationInfoWithIndex:(int32_t)index
                                              owners:(nonnull NSArray<NSString *> *)owners
                                         derivations:(nonnull NSArray<NSString *> *)derivations
                                          publicKeys:(nonnull NSArray<NSData *> *)publicKeys
{
    return [[self alloc] initWithIndex:index
                                owners:owners
                           derivations:derivations
                            publicKeys:publicKeys];
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p index:%@ owners:%@ derivations:%@ publicKeys:%@>", self.class, (void *)self, @(self.index), self.owners, self.derivations, self.publicKeys];
}

@end