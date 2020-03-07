#include <Xt/Core/Application.h>

using namespace xt;

static Application* gApp;

Application::Application()
{
    gApp = this;
}

Application::~Application()
{
    if (gApp == this)
    {
        gApp = nullptr;
    }
}

Application* Application::instance()
{
    return gApp;
}
