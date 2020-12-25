#include "Window.hpp"

namespace gas{
namespace ui{

Window::Window(): mWnd(nullptr){}

Window::~Window(){
    if(mWnd != nullptr){
        CloseWindow(mWnd);
    }
}

void Window::show(){
    // @todo: #2 Calling ShowWindow with proper params here.
}

}
}
