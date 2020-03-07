#ifndef XT_INCLUDED_CORE_NON_COPYABLE_H
#define XT_INCLUDED_CORE_NON_COPYABLE_H 1

#include <Xt/Core/API.h>

namespace xt
{

class NonCopyable
{
public:
    NonCopyable() {}
    ~NonCopyable() {}

    NonCopyable(const NonCopyable&) = delete;
    NonCopyable& operator=(const NonCopyable&) = delete;
};

}

#endif
