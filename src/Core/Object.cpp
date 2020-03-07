#include <Xt/Core/Object.h>

using namespace xt;

Object::Object(Object* parent)
: _parent(parent)
{

}

Object::~Object()
{

}

Object* Object::parent()
{
    return _parent;
}

const Object* Object::parent() const
{
    return _parent;
}
