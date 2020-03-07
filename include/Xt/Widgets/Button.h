#ifndef XT_INCLUDED_WIDGETS_BUTTON_H
#define XT_INCLUDED_WIDGETS_BUTTON_H 1

#include <Xt/Widgets/Widget.h>

namespace xt
{

class XT_API_WIDGETS Button : public Widget
{
public:
    Button(Widget* parent = nullptr);
    ~Button();

private:
    void* _nativeWidget;
};

}

#endif
