// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from random.djinni

#pragma once

#include <cstdint>
#include <vector>

namespace ledger { namespace core { namespace api {

class RandomNumberGenerator {
public:
    virtual ~RandomNumberGenerator() {}

    virtual std::vector<uint8_t> getRandomBytes(int32_t size) = 0;

    virtual int32_t getRandomInt() = 0;

    virtual int64_t getRandomLong() = 0;

    virtual int8_t getRandomByte() = 0;
};

} } }  // namespace ledger::core::api