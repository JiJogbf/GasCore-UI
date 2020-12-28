#include "Window.hpp"

#include "impl/WIndowsWindowImpl.hpp"

namespace gas{
namespace ui{

Window::Window(View* root, int mode): 
    Object(),
    mImpl(new gas::ui::impl::WindowsWindowImpl(root, mode))
{}

Window::~Window(){
    close();
    delete mImpl;
}

void Window::create(){
    mImpl->create();
}

void Window::close(){
    mImpl->close();
}

void Window::show(){
    mImpl->show();
}


}
}
