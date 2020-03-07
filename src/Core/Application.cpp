#include <Xt/Core/Application.h>

#if defined(XT_OS_WINDOWS)
# include <Xt/Core/System/Windows/ApplicationWin32.h>
using NativeApplication = xt::ApplicationWin32;
#endif

using namespace xt;

static Application* gApp;

Application::Application()
{
    _nativeApplication = new NativeApplication;
    gApp = this;
}

Application::~Application()
{
    if (gApp == this)
    {
        gApp = nullptr;
    }

    delete (NativeApplication*)_nativeApplication;
}

int Application::exec()
{
    return ((NativeApplication*)_nativeApplication)->exec();
}

Application* Application::instance()
{
    return gApp;
}
