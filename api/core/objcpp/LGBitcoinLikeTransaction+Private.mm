// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#import "LGBitcoinLikeTransaction+Private.h"
#import "DJIMarshal+Private.h"
#import "LGBitcoinLikeBlock+Private.h"
#import "LGBitcoinLikeInput+Private.h"
#import "LGBitcoinLikeOutput+Private.h"
#include <cassert>

namespace djinni_generated {

auto BitcoinLikeTransaction::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::List<::djinni_generated::BitcoinLikeInput>::toCpp(obj.inputs),
            ::djinni::List<::djinni_generated::BitcoinLikeOutput>::toCpp(obj.outputs),
            ::djinni::Optional<std::experimental::optional, ::djinni_generated::BitcoinLikeBlock>::toCpp(obj.block)};
}

auto BitcoinLikeTransaction::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[LGBitcoinLikeTransaction alloc] initWithInputs:(::djinni::List<::djinni_generated::BitcoinLikeInput>::fromCpp(cpp.inputs))
                                                    outputs:(::djinni::List<::djinni_generated::BitcoinLikeOutput>::fromCpp(cpp.outputs))
                                                      block:(::djinni::Optional<std::experimental::optional, ::djinni_generated::BitcoinLikeBlock>::fromCpp(cpp.block))];
}

}  // namespace djinni_generated
