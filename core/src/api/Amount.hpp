// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from amount.djinni

#ifndef DJINNI_GENERATED_AMOUNT_HPP
#define DJINNI_GENERATED_AMOUNT_HPP

#include "../utils/optional.hpp"
#include <cstdint>
#include <memory>
#include <string>

namespace ledger { namespace core { namespace api {

class BigInt;
struct Currency;
struct CurrencyUnit;
struct FormatRules;
struct Locale;

class Amount {
public:
    virtual ~Amount() {}

    virtual std::shared_ptr<BigInt> toBigInt() = 0;

    virtual Currency getCurrency() = 0;

    virtual CurrencyUnit getUnit() = 0;

    virtual std::shared_ptr<Amount> toUnit(const CurrencyUnit & unit) = 0;

    virtual std::shared_ptr<Amount> toMagnitude(int32_t magnitude) = 0;

    virtual std::string toString() = 0;

    virtual int64_t toLong() = 0;

    virtual double toDouble() = 0;

    virtual std::string format(const Locale & locale, const std::experimental::optional<FormatRules> & rules) = 0;

    static std::shared_ptr<Amount> fromHex(const std::string & hex);

    static std::shared_ptr<Amount> fromLong(int64_t value);
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_AMOUNT_HPP
