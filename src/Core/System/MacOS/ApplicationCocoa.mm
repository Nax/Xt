#import <Cocoa/Cocoa.h>
#import <Xt/Core/System/MacOS/ApplicationCocoa.h>

using namespace xt;

ApplicationCocoa::ApplicationCocoa()
{
    [NSApplication sharedApplication];
}

ApplicationCocoa::~ApplicationCocoa()
{

}

int ApplicationCocoa::exec()
{
    [NSApp run];
    return 0;
}
