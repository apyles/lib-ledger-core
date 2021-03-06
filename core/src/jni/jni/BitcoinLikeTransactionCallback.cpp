// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#include "BitcoinLikeTransactionCallback.hpp"  // my header
#include "BitcoinLikeTransaction.hpp"
#include "Error.hpp"
#include "Marshal.hpp"

namespace djinni_generated {

BitcoinLikeTransactionCallback::BitcoinLikeTransactionCallback() : ::djinni::JniInterface<::ledger::core::api::BitcoinLikeTransactionCallback, BitcoinLikeTransactionCallback>() {}

BitcoinLikeTransactionCallback::~BitcoinLikeTransactionCallback() = default;

BitcoinLikeTransactionCallback::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

BitcoinLikeTransactionCallback::JavaProxy::~JavaProxy() = default;

void BitcoinLikeTransactionCallback::JavaProxy::onCallback(const std::shared_ptr<::ledger::core::api::BitcoinLikeTransaction> & c_result, const std::experimental::optional<::ledger::core::api::Error> & c_error) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::BitcoinLikeTransactionCallback>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_onCallback,
                           ::djinni::get(::djinni::Optional<std::experimental::optional, ::djinni_generated::BitcoinLikeTransaction>::fromCpp(jniEnv, c_result)),
                           ::djinni::get(::djinni::Optional<std::experimental::optional, ::djinni_generated::Error>::fromCpp(jniEnv, c_error)));
    ::djinni::jniExceptionCheck(jniEnv);
}

}  // namespace djinni_generated
