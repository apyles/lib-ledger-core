// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#pragma once

#include "../../api/BitcoinLikeAccount.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class BitcoinLikeAccount final : ::djinni::JniInterface<::ledger::core::api::BitcoinLikeAccount, BitcoinLikeAccount> {
public:
    using CppType = std::shared_ptr<::ledger::core::api::BitcoinLikeAccount>;
    using CppOptType = std::shared_ptr<::ledger::core::api::BitcoinLikeAccount>;
    using JniType = jobject;

    using Boxed = BitcoinLikeAccount;

    ~BitcoinLikeAccount();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<BitcoinLikeAccount>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<BitcoinLikeAccount>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    BitcoinLikeAccount();
    friend ::djinni::JniClass<BitcoinLikeAccount>;
    friend ::djinni::JniInterface<::ledger::core::api::BitcoinLikeAccount, BitcoinLikeAccount>;

};

}  // namespace djinni_generated
