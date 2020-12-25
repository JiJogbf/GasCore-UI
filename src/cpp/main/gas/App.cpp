#include "App.hpp"

#include "impl/AppImpl.hpp"
#include "impl/WindowsAppImpl.hpp"

namespace gas{
namespace ui{


App::App(Window* window, HINSTANCE instance): 
    mImpl(new impl::WindowsAppImpl(window, instance))
{}

App::~App(){
    delete mImpl;
}

void App::run(){
    mImpl->run();
}


}
}

