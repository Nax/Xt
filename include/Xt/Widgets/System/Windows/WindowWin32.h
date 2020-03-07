#ifndef XT_INCLUDED_WIDGETS_SYSTEM_WINDOW_WIN32_H
#define XT_INCLUDED_WIDGETS_SSYTEM_WINDOW_WIN32_H 1

#define WIN32_LEAN_AND_MEAN 1
#define UNICODE 1
#include <windows.h>

namespace xt
{

class WindowWin32
{
public:
    WindowWin32();
    ~WindowWin32();

private:
    HWND _hwnd;
};

}

#endif
