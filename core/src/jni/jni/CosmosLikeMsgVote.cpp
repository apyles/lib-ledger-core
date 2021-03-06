// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from messages.djinni

#include "CosmosLikeMsgVote.hpp"  // my header
#include "CosmosLikeVoteOption.hpp"
#include "Marshal.hpp"

namespace djinni_generated {

CosmosLikeMsgVote::CosmosLikeMsgVote() = default;

CosmosLikeMsgVote::~CosmosLikeMsgVote() = default;

auto CosmosLikeMsgVote::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<CosmosLikeMsgVote>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.voter)),
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.proposalId)),
                                                           ::djinni::get(::djinni_generated::CosmosLikeVoteOption::fromCpp(jniEnv, c.option)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto CosmosLikeMsgVote::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 4);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<CosmosLikeMsgVote>::get();
    return {::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_voter)),
            ::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_proposalId)),
            ::djinni_generated::CosmosLikeVoteOption::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_option))};
}

}  // namespace djinni_generated
