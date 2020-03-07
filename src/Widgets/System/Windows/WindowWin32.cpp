#include <Xt/Widgets/System/Windows/WindowWin32.h>

static LRESULT CALLBACK WndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    switch (uMsg)
    {
    default:
        return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }
}

static ATOM makeWindowClass()
{
    WNDCLASS wndClass{};

    wndClass.hInstance = nullptr;
    wndClass.lpszClassName = TEXT("XtWindow");
    wndClass.lpfnWndProc = &WndProc;
    wndClass.hbrBackground = GetSysColorBrush(COLOR_WINDOW);

    return RegisterClass(&wndClass);
}

using namespace xt;

WindowWin32::WindowWin32()
{
    static ATOM wndClassName = makeWindowClass();

    _hwnd = CreateWindowEx(
        0,
        (LPCWSTR)wndClassName,
        TEXT("Window"),
        WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, CW_USEDEFAULT,
        CW_USEDEFAULT, CW_USEDEFAULT,
        nullptr,
        nullptr,
        nullptr,
        nullptr
    );

    ShowWindow(_hwnd, 1);
}

WindowWin32::~WindowWin32()
{

}
