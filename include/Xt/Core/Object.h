#ifndef XT_INCLUDED_CORE_OBJECT_H
#define XT_INCLUDED_CORE_OBJECT_H 1

#include <vector>
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
    XT_SYM_HIDDEN void _addChild(Object* object);

    Object*                 _parent;
    std::vector<Object*>    _children;
};

}

#endif
