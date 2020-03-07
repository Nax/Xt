#include <Xt/Core/System/Windows/ApplicationWin32.h>

using namespace xt;

ApplicationWin32::ApplicationWin32()
{

}

ApplicationWin32::~ApplicationWin32()
{

}

int ApplicationWin32::exec()
{
    MSG msg;

    for (;;)
    {
        if (GetMessage(&msg, nullptr, 0, 0) == 0)
            break;
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}
