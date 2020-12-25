#include "Window.hpp"

namespace gas{
namespace ui{

Window::Window(): mHwnd(INVALID_HANDLE_VALUE){}

Window::~Window(){
    if(mHwnd != INVALID_HANDLE_VALUE){
        CloseWindow(mHwnd);
    }
}

void Window::show(){
    // @todo: #2 Calling ShowWindow with proper params here.
}

}
}

#endif