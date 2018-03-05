// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from dynamic.djinni

#ifndef DJINNI_GENERATED_NJSDYNAMICARRAY_HPP
#define DJINNI_GENERATED_NJSDYNAMICARRAY_HPP


#include "../../../core/src/api/DynamicType.hpp"
#include "../../../core/src/utils/optional.hpp"
#include "NJSDynamicObjectCpp.hpp"
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../../../core/src/api/DynamicArray.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSDynamicArray: public Nan::ObjectWrap {
public:

    static void Initialize(Local<Object> target);
    virtual ~NJSDynamicArray() {};
    NJSDynamicArray(const std::shared_ptr<ledger::core::api::DynamicArray> &iDynamicArray):_DynamicArray(iDynamicArray){};

    static Handle<Object> wrap(const std::shared_ptr<ledger::core::api::DynamicArray> &object);
    static Nan::Persistent<ObjectTemplate> DynamicArray_prototype;
    std::shared_ptr<ledger::core::api::DynamicArray> getCppImpl(){return _DynamicArray;};

private:
    static NAN_METHOD(size);

    static NAN_METHOD(getString);

    static NAN_METHOD(getInt);

    static NAN_METHOD(getLong);

    static NAN_METHOD(getDouble);

    static NAN_METHOD(getData);

    static NAN_METHOD(getBoolean);

    static NAN_METHOD(pushInt);

    static NAN_METHOD(pushLong);

    static NAN_METHOD(pushString);

    static NAN_METHOD(pushDouble);

    static NAN_METHOD(pushData);

    static NAN_METHOD(pushBoolean);

    static NAN_METHOD(getObject);

    static NAN_METHOD(getArray);

    static NAN_METHOD(pushObject);

    static NAN_METHOD(pushArray);

    static NAN_METHOD(concat);

    static NAN_METHOD(getType);

    static NAN_METHOD(remove);

    static NAN_METHOD(dump);

    static NAN_METHOD(serialize);

    static NAN_METHOD(isReadOnly);

    static NAN_METHOD(newInstance);

    static NAN_METHOD(load);

    static NAN_METHOD(New);

    std::shared_ptr<ledger::core::api::DynamicArray> _DynamicArray;
};
#endif //DJINNI_GENERATED_NJSDYNAMICARRAY_HPP
