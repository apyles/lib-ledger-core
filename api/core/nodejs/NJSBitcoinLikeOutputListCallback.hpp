// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#ifndef DJINNI_GENERATED_NJSBITCOINLIKEOUTPUTLISTCALLBACK_HPP
#define DJINNI_GENERATED_NJSBITCOINLIKEOUTPUTLISTCALLBACK_HPP


#include "../../../core/src/api/BitcoinLikeOutput.hpp"
#include "../../../core/src/api/Error.hpp"
#include "../../../core/src/utils/optional.hpp"
#include "NJSBitcoinLikeOutputCpp.hpp"
#include <memory>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../../../core/src/api/BitcoinLikeOutputListCallback.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSBitcoinLikeOutputListCallback: public Nan::ObjectWrap, public ledger::core::api::BitcoinLikeOutputListCallback {
public:

    static void Initialize(Local<Object> target);
    ~NJSBitcoinLikeOutputListCallback() {njs_impl.Reset();};
    NJSBitcoinLikeOutputListCallback(Local<Object> njs_implementation){njs_impl.Reset(njs_implementation);};

    void onCallback(const std::experimental::optional<std::vector<std::shared_ptr<BitcoinLikeOutput>>> & result, const std::experimental::optional<Error> & error);

private:
    static NAN_METHOD(New);

    static NAN_METHOD(addRef);
    static NAN_METHOD(removeRef);
    Nan::Persistent <Object> njs_impl;
};
#endif //DJINNI_GENERATED_NJSBITCOINLIKEOUTPUTLISTCALLBACK_HPP
