// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#include "Address.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class LGAddress;

namespace djinni_generated {

class Address
{
public:
    using CppType = std::shared_ptr<::ledger::core::api::Address>;
    using CppOptType = std::shared_ptr<::ledger::core::api::Address>;
    using ObjcType = LGAddress*;

    using Boxed = Address;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated
