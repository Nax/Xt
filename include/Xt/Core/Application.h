#ifndef XT_INCLUDED_CORE_APPLICATION_H
#define XT_INCLUDED_CORE_APPLICATION_H 1

#include <Xt/Core/Object.h>

namespace xt
{

class XT_API_CORE Application : public Object
{
public:
    Application();
    ~Application();

    int exec();

    static Application* instance();

private:
    void* _nativeApplication;
};

}

#endif
