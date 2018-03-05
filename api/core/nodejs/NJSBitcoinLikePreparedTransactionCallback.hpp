// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#ifndef DJINNI_GENERATED_NJSBITCOINLIKEPREPAREDTRANSACTIONCALLBACK_HPP
#define DJINNI_GENERATED_NJSBITCOINLIKEPREPAREDTRANSACTIONCALLBACK_HPP


#include "../../../core/src/api/BitcoinLikePreparedTransaction.hpp"
#include "../../../core/src/api/Error.hpp"
#include "../../../core/src/utils/optional.hpp"
#include "NJSBitcoinLikeOutputCpp.hpp"
#include <string>

#include <nan.h>
#include <node.h>
#include "../../../core/src/api/BitcoinLikePreparedTransactionCallback.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSBitcoinLikePreparedTransactionCallback: public Nan::ObjectWrap, public ledger::core::api::BitcoinLikePreparedTransactionCallback {
public:

    static void Initialize(Local<Object> target);
    ~NJSBitcoinLikePreparedTransactionCallback() {njs_impl.Reset();};
    NJSBitcoinLikePreparedTransactionCallback(Local<Object> njs_implementation){njs_impl.Reset(njs_implementation);};

    void onCallback(const std::experimental::optional<BitcoinLikePreparedTransaction> & result, const std::experimental::optional<Error> & error);

private:
    static NAN_METHOD(New);

    static NAN_METHOD(addRef);
    static NAN_METHOD(removeRef);
    Nan::Persistent <Object> njs_impl;
};
#endif //DJINNI_GENERATED_NJSBITCOINLIKEPREPAREDTRANSACTIONCALLBACK_HPP
