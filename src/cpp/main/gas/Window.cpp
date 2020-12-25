#include "Window.hpp"

namespace gas{
namespace ui{

Window::Window(int mode): 
    mWnd(nullptr), 
    mShowMode(mode)
{}

Window::~Window(){
    close();
}

void Window::create(){
    mWnd = nullptr;
}

void Window::close(){
    if(mWnd != nullptr){
        CloseWindow(mWnd);
        mWnd = nullptr;
    }
}

void Window::show(){
    ShowWindow(mWnd, mShowMode);
}

}
}
