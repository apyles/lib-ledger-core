// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from ripple_like_wallet.djinni

#ifndef DJINNI_GENERATED_RIPPLELIKEACCOUNT_HPP
#define DJINNI_GENERATED_RIPPLELIKEACCOUNT_HPP

#include <cstdint>
#include <memory>
#include <vector>
#ifndef LIBCORE_EXPORT
    #if defined(_MSC_VER)
       #include <libcore_export.h>
    #else
       #define LIBCORE_EXPORT
    #endif
#endif

namespace ledger { namespace core { namespace api {

class AmountCallback;
class RippleLikeTransaction;
class RippleLikeTransactionBuilder;
class StringCallback;

/**Class representing a Ripple account */
class LIBCORE_EXPORT RippleLikeAccount {
public:
    virtual ~RippleLikeAccount() {}

    virtual void broadcastRawTransaction(const std::vector<uint8_t> & transaction, const std::shared_ptr<StringCallback> & callback) = 0;

    virtual void broadcastTransaction(const std::shared_ptr<RippleLikeTransaction> & transaction, const std::shared_ptr<StringCallback> & callback) = 0;

    virtual std::shared_ptr<RippleLikeTransactionBuilder> buildTransaction() = 0;

    /**
     * Get fees from network
     * Note: same note as for getFees method on BitcoinLikeAccount
     */
    virtual void getFees(const std::shared_ptr<AmountCallback> & callback) = 0;

    /**
     * Get base reserve (dust to leave on an XRP account) from network
     * Note: same note as for getFees method on BitcoinLikeAccount
     */
    virtual void getBaseReserve(const std::shared_ptr<AmountCallback> & callback) = 0;
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_RIPPLELIKEACCOUNT_HPP
