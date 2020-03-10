#include <Xt/Widgets/Window.h>
#include <Xt/Widgets/Widget.h>

#if defined(XT_OS_WINDOWS)
# include <Xt/Widgets/System/Windows/WindowWin32.h>
using NativeWindow = xt::WindowWin32;
#elif defined(XT_OS_MACOS)
# include <Xt/Widgets/System/MacOS/WindowCocoa.h>
using NativeWindow = xt::WindowCocoa;
#endif

using namespace xt;

Window::Window(Object* parent)
: Object(parent)
, _widget{}
{
    _nativeWindow = new NativeWindow;
}

Window::~Window()
{
    if (_widget)
        delete _widget;
    delete (NativeWindow*)_nativeWindow;
}

void Window::setWidget(Widget* widget)
{
    if (_widget)
        delete _widget;
    _widget = widget;
}
