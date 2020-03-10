#import <Xt/Widgets/System/MacOS/WindowCocoa.h>

using namespace xt;

WindowCocoa::WindowCocoa()
{
    _window = [[NSWindow alloc] initWithContentRect:NSMakeRect(0, 0, 640, 480) styleMask:NSWindowStyleMaskTitled backing:NSBackingStoreBuffered defer:YES];
    [_window makeKeyAndOrderFront:nil];
}

WindowCocoa::~WindowCocoa()
{

}
