#include <Xt/Core/Object.h>

using namespace xt;

Object::Object(Object* parent)
: _parent(parent)
{
    if (parent)
    {
        parent->_addChild(this);
    }
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

void Object::_addChild(Object* child)
{
    _children.push_back(child);
}
