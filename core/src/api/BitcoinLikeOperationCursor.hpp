// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#pragma once

#include <cstdint>

namespace ledger { namespace core { namespace api {

class BitcoinLikeOperationCursor {
public:
    virtual ~BitcoinLikeOperationCursor() {}

    virtual int32_t getAccountIndex() = 0;
};

} } }  // namespace ledger::core::api
