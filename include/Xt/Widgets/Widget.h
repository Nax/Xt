#ifndef XT_INCLUDED_WIDGETS_WIDGET_H
#define XT_INCLUDED_WIDGETS_WIDGET_H 1

#include <Xt/Core/Object.h>
#include <Xt/Widgets/API.h>

namespace xt
{

class XT_API_WIDGETS Widget : public Object
{
public:
    Widget(Widget* parent = nullptr);
};

}

#endif
