// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#pragma once

#include <memory>

namespace ledger { namespace core { namespace api {

class Preferences;
struct BitcoinLikeTransaction;

class BitcoinLikeOperation {
public:
    virtual ~BitcoinLikeOperation() {}

    virtual std::shared_ptr<Preferences> getPreferences() = 0;

    virtual std::shared_ptr<Preferences> getSynchronizedPreferences() = 0;

    virtual BitcoinLikeTransaction getTransaction() = 0;
};

} } }  // namespace ledger::core::api
