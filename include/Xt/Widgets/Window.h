#ifndef XT_INCLUDED_WIDGETS_WINDOW_H
#define XT_INCLUDED_WIDGETS_WINDOW_H 1

#include <Xt/Core/Object.h>
#include <Xt/Widgets/API.h>

namespace xt
{

class Widget;
class XT_API_WIDGETS Window : public Object
{
public:
    Window(Object* parent = nullptr);
    ~Window();

    void setWidget(Widget* widget);

private:
    Widget* _widget;
};

}

#endif
