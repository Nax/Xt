#ifndef XT_INCLUDED_CORE_OBJECT_H
#define XT_INCLUDED_CORE_OBJECT_H 1

#include <Xt/Core/API.h>

namespace xt
{

class XT_API_CORE Object
{
public:
    Object(Object* parent = nullptr);
    virtual ~Object();

    Object* parent();
    const Object* parent() const;

private:
    Object*     _parent;
};

}

#endif
