// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from http_client.djinni

#pragma once

#include "../../api/HttpRequest.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class HttpRequest final : ::djinni::JniInterface<::ledger::core::api::HttpRequest, HttpRequest> {
public:
    using CppType = std::shared_ptr<::ledger::core::api::HttpRequest>;
    using CppOptType = std::shared_ptr<::ledger::core::api::HttpRequest>;
    using JniType = jobject;

    using Boxed = HttpRequest;

    ~HttpRequest();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<HttpRequest>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<HttpRequest>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    HttpRequest();
    friend ::djinni::JniClass<HttpRequest>;
    friend ::djinni::JniInterface<::ledger::core::api::HttpRequest, HttpRequest>;

};

}  // namespace djinni_generated
