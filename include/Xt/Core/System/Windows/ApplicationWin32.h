#ifndef XT_INCLUDED_CORE_SYSTEM_APPLICATION_WIN32_H
#define XT_INCLUDED_CORE_SYSTEM_APPLICATION_WIN32_H 1

#define WIN32_LEAN_AND_MEAN 1
#define UNICODE 1
#include <windows.h>

namespace xt
{

class ApplicationWin32
{
public:
    ApplicationWin32();
    ~ApplicationWin32();

    int exec();
};

}

#endif
