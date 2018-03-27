// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from amount.djinni

#include "NJSAmountCpp.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSAmount::toBigInt) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSAmount::toBigInt needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSAmount* obj = Nan::ObjectWrap::Unwrap<NJSAmount>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSAmount::toBigInt : implementation of Amount is not valid");
    }

    auto result = cpp_impl->toBigInt();

    //Wrap result in node object
    auto arg_0 = NJSBigInt::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSAmount::getCurrency) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSAmount::getCurrency needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSAmount* obj = Nan::ObjectWrap::Unwrap<NJSAmount>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSAmount::getCurrency : implementation of Amount is not valid");
    }

    auto result = cpp_impl->getCurrency();

    //Wrap result in node object
    auto arg_0 = Nan::New<Object>();
    auto arg_0_1 = Nan::New<Integer>((int)result.walletType);
    Nan::DefineOwnProperty(arg_0, Nan::New<String>("walletType").ToLocalChecked(), arg_0_1);
    auto arg_0_2 = Nan::New<String>(result.name).ToLocalChecked();
    Nan::DefineOwnProperty(arg_0, Nan::New<String>("name").ToLocalChecked(), arg_0_2);
    auto arg_0_3 = Nan::New<Int32>(result.bip44CoinType);
    Nan::DefineOwnProperty(arg_0, Nan::New<String>("bip44CoinType").ToLocalChecked(), arg_0_3);
    auto arg_0_4 = Nan::New<String>(result.paymentUriScheme).ToLocalChecked();
    Nan::DefineOwnProperty(arg_0, Nan::New<String>("paymentUriScheme").ToLocalChecked(), arg_0_4);
    Local<Array> arg_0_5 = Nan::New<Array>();
    for(size_t arg_0_5_id = 0; arg_0_5_id < result.units.size(); arg_0_5_id++)
    {
        auto arg_0_5_elem = Nan::New<Object>();
        auto arg_0_5_elem_1 = Nan::New<String>(result.units[arg_0_5_id].name).ToLocalChecked();
        Nan::DefineOwnProperty(arg_0_5_elem, Nan::New<String>("name").ToLocalChecked(), arg_0_5_elem_1);
        auto arg_0_5_elem_2 = Nan::New<String>(result.units[arg_0_5_id].symbol).ToLocalChecked();
        Nan::DefineOwnProperty(arg_0_5_elem, Nan::New<String>("symbol").ToLocalChecked(), arg_0_5_elem_2);
        auto arg_0_5_elem_3 = Nan::New<String>(result.units[arg_0_5_id].code).ToLocalChecked();
        Nan::DefineOwnProperty(arg_0_5_elem, Nan::New<String>("code").ToLocalChecked(), arg_0_5_elem_3);
        auto arg_0_5_elem_4 = Nan::New<Int32>(result.units[arg_0_5_id].numberOfDecimal);
        Nan::DefineOwnProperty(arg_0_5_elem, Nan::New<String>("numberOfDecimal").ToLocalChecked(), arg_0_5_elem_4);

        arg_0_5->Set((int)arg_0_5_id,arg_0_5_elem);
    }

    Nan::DefineOwnProperty(arg_0, Nan::New<String>("units").ToLocalChecked(), arg_0_5);
    auto arg_0_6 = Nan::New<Object>();
    auto arg_0_6_1 = Nan::New<String>((*result.bitcoinLikeNetworkParameters).Identifier).ToLocalChecked();
    Nan::DefineOwnProperty(arg_0_6, Nan::New<String>("Identifier").ToLocalChecked(), arg_0_6_1);
    Local<Array> arg_0_6_2 = Nan::New<Array>();
    for(size_t arg_0_6_2_id = 0; arg_0_6_2_id < (*result.bitcoinLikeNetworkParameters).P2PKHVersion.size(); arg_0_6_2_id++)
    {
        auto arg_0_6_2_elem = Nan::New<Uint32>((*result.bitcoinLikeNetworkParameters).P2PKHVersion[arg_0_6_2_id]);
        arg_0_6_2->Set((int)arg_0_6_2_id,arg_0_6_2_elem);
    }

    Nan::DefineOwnProperty(arg_0_6, Nan::New<String>("P2PKHVersion").ToLocalChecked(), arg_0_6_2);
    Local<Array> arg_0_6_3 = Nan::New<Array>();
    for(size_t arg_0_6_3_id = 0; arg_0_6_3_id < (*result.bitcoinLikeNetworkParameters).P2SHVersion.size(); arg_0_6_3_id++)
    {
        auto arg_0_6_3_elem = Nan::New<Uint32>((*result.bitcoinLikeNetworkParameters).P2SHVersion[arg_0_6_3_id]);
        arg_0_6_3->Set((int)arg_0_6_3_id,arg_0_6_3_elem);
    }

    Nan::DefineOwnProperty(arg_0_6, Nan::New<String>("P2SHVersion").ToLocalChecked(), arg_0_6_3);
    Local<Array> arg_0_6_4 = Nan::New<Array>();
    for(size_t arg_0_6_4_id = 0; arg_0_6_4_id < (*result.bitcoinLikeNetworkParameters).XPUBVersion.size(); arg_0_6_4_id++)
    {
        auto arg_0_6_4_elem = Nan::New<Uint32>((*result.bitcoinLikeNetworkParameters).XPUBVersion[arg_0_6_4_id]);
        arg_0_6_4->Set((int)arg_0_6_4_id,arg_0_6_4_elem);
    }

    Nan::DefineOwnProperty(arg_0_6, Nan::New<String>("XPUBVersion").ToLocalChecked(), arg_0_6_4);
    auto arg_0_6_5 = Nan::New<Integer>((int)(*result.bitcoinLikeNetworkParameters).FeePolicy);
    Nan::DefineOwnProperty(arg_0_6, Nan::New<String>("FeePolicy").ToLocalChecked(), arg_0_6_5);
    auto arg_0_6_6 = Nan::New<Number>((*result.bitcoinLikeNetworkParameters).DustAmount);
    Nan::DefineOwnProperty(arg_0_6, Nan::New<String>("DustAmount").ToLocalChecked(), arg_0_6_6);
    auto arg_0_6_7 = Nan::New<String>((*result.bitcoinLikeNetworkParameters).MessagePrefix).ToLocalChecked();
    Nan::DefineOwnProperty(arg_0_6, Nan::New<String>("MessagePrefix").ToLocalChecked(), arg_0_6_7);
    auto arg_0_6_8 = Nan::New<Boolean>((*result.bitcoinLikeNetworkParameters).UsesTimestampedTransaction);
    Nan::DefineOwnProperty(arg_0_6, Nan::New<String>("UsesTimestampedTransaction").ToLocalChecked(), arg_0_6_8);

    Nan::DefineOwnProperty(arg_0, Nan::New<String>("bitcoinLikeNetworkParameters").ToLocalChecked(), arg_0_6);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSAmount::getUnit) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSAmount::getUnit needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSAmount* obj = Nan::ObjectWrap::Unwrap<NJSAmount>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSAmount::getUnit : implementation of Amount is not valid");
    }

    auto result = cpp_impl->getUnit();

    //Wrap result in node object
    auto arg_0 = Nan::New<Object>();
    auto arg_0_1 = Nan::New<String>(result.name).ToLocalChecked();
    Nan::DefineOwnProperty(arg_0, Nan::New<String>("name").ToLocalChecked(), arg_0_1);
    auto arg_0_2 = Nan::New<String>(result.symbol).ToLocalChecked();
    Nan::DefineOwnProperty(arg_0, Nan::New<String>("symbol").ToLocalChecked(), arg_0_2);
    auto arg_0_3 = Nan::New<String>(result.code).ToLocalChecked();
    Nan::DefineOwnProperty(arg_0, Nan::New<String>("code").ToLocalChecked(), arg_0_3);
    auto arg_0_4 = Nan::New<Int32>(result.numberOfDecimal);
    Nan::DefineOwnProperty(arg_0, Nan::New<String>("numberOfDecimal").ToLocalChecked(), arg_0_4);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSAmount::toUnit) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSAmount::toUnit needs 1 arguments");
    }

    //Check if parameters have correct types

    auto field_arg_0_1 = Nan::Get(info[0]->ToObject(), Nan::New<String>("name").ToLocalChecked()).ToLocalChecked();
    String::Utf8Value string_arg_0_1(field_arg_0_1->ToString());
    auto arg_0_1 = std::string(*string_arg_0_1);

    auto field_arg_0_2 = Nan::Get(info[0]->ToObject(), Nan::New<String>("symbol").ToLocalChecked()).ToLocalChecked();
    String::Utf8Value string_arg_0_2(field_arg_0_2->ToString());
    auto arg_0_2 = std::string(*string_arg_0_2);

    auto field_arg_0_3 = Nan::Get(info[0]->ToObject(), Nan::New<String>("code").ToLocalChecked()).ToLocalChecked();
    String::Utf8Value string_arg_0_3(field_arg_0_3->ToString());
    auto arg_0_3 = std::string(*string_arg_0_3);

    auto field_arg_0_4 = Nan::Get(info[0]->ToObject(), Nan::New<String>("numberOfDecimal").ToLocalChecked()).ToLocalChecked();
    auto arg_0_4 = Nan::To<int32_t>(field_arg_0_4).FromJust();
    CurrencyUnit arg_0(arg_0_1, arg_0_2, arg_0_3, arg_0_4);


    //Unwrap current object and retrieve its Cpp Implementation
    NJSAmount* obj = Nan::ObjectWrap::Unwrap<NJSAmount>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSAmount::toUnit : implementation of Amount is not valid");
    }

    auto result = cpp_impl->toUnit(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSAmount::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSAmount::toMagnitude) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSAmount::toMagnitude needs 1 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = Nan::To<int32_t>(info[0]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    NJSAmount* obj = Nan::ObjectWrap::Unwrap<NJSAmount>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSAmount::toMagnitude : implementation of Amount is not valid");
    }

    auto result = cpp_impl->toMagnitude(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSAmount::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSAmount::toString) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSAmount::toString needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSAmount* obj = Nan::ObjectWrap::Unwrap<NJSAmount>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSAmount::toString : implementation of Amount is not valid");
    }

    auto result = cpp_impl->toString();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>(result).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSAmount::toLong) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSAmount::toLong needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSAmount* obj = Nan::ObjectWrap::Unwrap<NJSAmount>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSAmount::toLong : implementation of Amount is not valid");
    }

    auto result = cpp_impl->toLong();

    //Wrap result in node object
    auto arg_0 = Nan::New<Number>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSAmount::toDouble) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSAmount::toDouble needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSAmount* obj = Nan::ObjectWrap::Unwrap<NJSAmount>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSAmount::toDouble : implementation of Amount is not valid");
    }

    auto result = cpp_impl->toDouble();

    //Wrap result in node object
    auto arg_0 = Nan::New<Number>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSAmount::format) {

    //Check if method called with right number of arguments
    if(info.Length() != 2)
    {
        return Nan::ThrowError("NJSAmount::format needs 2 arguments");
    }

    //Check if parameters have correct types

    auto field_arg_0_1 = Nan::Get(info[0]->ToObject(), Nan::New<String>("DecimalSeparator").ToLocalChecked()).ToLocalChecked();
    String::Utf8Value string_arg_0_1(field_arg_0_1->ToString());
    auto arg_0_1 = std::string(*string_arg_0_1);

    auto field_arg_0_2 = Nan::Get(info[0]->ToObject(), Nan::New<String>("ThousandsSeparator").ToLocalChecked()).ToLocalChecked();
    String::Utf8Value string_arg_0_2(field_arg_0_2->ToString());
    auto arg_0_2 = std::string(*string_arg_0_2);

    auto field_arg_0_3 = Nan::Get(info[0]->ToObject(), Nan::New<String>("IsPrefixedByCurrencySymbol").ToLocalChecked()).ToLocalChecked();
    auto arg_0_3 = Nan::To<bool>(field_arg_0_3).FromJust();
    Locale arg_0(arg_0_1, arg_0_2, arg_0_3);


    auto field_arg_1_1 = Nan::Get(info[1]->ToObject(), Nan::New<String>("roundingMode").ToLocalChecked()).ToLocalChecked();
    auto arg_1_1 = (ledger::core::api::RoundingMode)Nan::To<int>(field_arg_1_1).FromJust();

    auto field_arg_1_2 = Nan::Get(info[1]->ToObject(), Nan::New<String>("maxNumberOfDecimals").ToLocalChecked()).ToLocalChecked();
    auto arg_1_2 = Nan::To<int32_t>(field_arg_1_2).FromJust();
    FormatRules arg_1(arg_1_1, arg_1_2);


    //Unwrap current object and retrieve its Cpp Implementation
    NJSAmount* obj = Nan::ObjectWrap::Unwrap<NJSAmount>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSAmount::format : implementation of Amount is not valid");
    }

    auto result = cpp_impl->format(arg_0,arg_1);

    //Wrap result in node object
    auto arg_2 = Nan::New<String>(result).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_2);
}
NAN_METHOD(NJSAmount::fromHex) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSAmount::fromHex needs 1 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);

    //Unwrap current object and retrieve its Cpp Implementation
    NJSAmount* obj = Nan::ObjectWrap::Unwrap<NJSAmount>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSAmount::fromHex : implementation of Amount is not valid");
    }

    auto result = cpp_impl->fromHex(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSAmount::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSAmount::fromLong) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSAmount::fromLong needs 1 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = Nan::To<int64_t>(info[0]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    NJSAmount* obj = Nan::ObjectWrap::Unwrap<NJSAmount>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSAmount::fromLong : implementation of Amount is not valid");
    }

    auto result = cpp_impl->fromLong(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSAmount::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}

NAN_METHOD(NJSAmount::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSAmount function can only be called as constructor (use New)");
    }

    //Check if NJSAmount::New called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSAmount::New needs same number of arguments as ledger::core::api::Amount::fromHex method");
    }

    //Unwrap objects to get C++ classes
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);

    //Call factory
    auto cpp_instance = ledger::core::api::Amount::fromHex(arg_0);
    NJSAmount *node_instance = new NJSAmount(cpp_instance);

    if(node_instance)
    {
        //Wrap and return node instance
        node_instance->Wrap(info.This());
        node_instance->Ref();
        info.GetReturnValue().Set(info.This());
    }
}


Nan::Persistent<ObjectTemplate> NJSAmount::Amount_prototype;

Handle<Object> NJSAmount::wrap(const std::shared_ptr<ledger::core::api::Amount> &object) {
    Nan::HandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(Amount_prototype);

    Handle<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        NJSAmount *new_obj = new NJSAmount(object);
        if(new_obj)
        {
            new_obj->Wrap(obj);
            new_obj->Ref();
        }
    }
    else
    {
        Nan::ThrowError("NJSAmount::wrap: object template not valid");
    }
    return obj;
}

void NJSAmount::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSAmount::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSAmount").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"toBigInt", toBigInt);
    Nan::SetPrototypeMethod(func_template,"getCurrency", getCurrency);
    Nan::SetPrototypeMethod(func_template,"getUnit", getUnit);
    Nan::SetPrototypeMethod(func_template,"toUnit", toUnit);
    Nan::SetPrototypeMethod(func_template,"toMagnitude", toMagnitude);
    Nan::SetPrototypeMethod(func_template,"toString", toString);
    Nan::SetPrototypeMethod(func_template,"toLong", toLong);
    Nan::SetPrototypeMethod(func_template,"toDouble", toDouble);
    Nan::SetPrototypeMethod(func_template,"format", format);
    //Set object prototype
    Amount_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSAmount").ToLocalChecked(), func_template->GetFunction());
}
