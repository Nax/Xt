#include <Xt/Widgets/Window.h>
#include <Xt/Widgets/Widget.h>

using namespace xt;

Window::Window(Object* parent)
: Object(parent)
, _widget{}
{

}

Window::~Window()
{
    if (_widget)
        delete _widget;
}

void Window::setWidget(Widget* widget)
{
    if (_widget)
        delete _widget;
    _widget = widget;
}
