#ifndef XT_INCLUDED_WIDGETS_SYSTEM_WINDOW_COCOA_H
#define XT_INCLUDED_WIDGETS_SSYTEM_WINDOW_COCOA_H 1

#if defined(__OBJC__)
# import <Cocoa/Cocoa.h>
#else
using NSWindow = void;
#endif


namespace xt
{

class WindowCocoa
{
public:
    WindowCocoa();
    ~WindowCocoa();

private:
    NSWindow* _window;
};

}

#endif
