#include "App.hpp"

#include "impl/AppImpl.hpp"
#include "impl/WindowsAppImpl.hpp"

namespace gas{
namespace ui{


App::App(Window* window): 
    /* @todo: #8 somehow remove GetModuleHandle latter from here.
        We should use try use direct references to hInstance variable*/
    mImpl(new impl::WindowsAppImpl(window, GetModuleHandle(nullptr)))
{}

App::~App(){
    delete mImpl;
}

void App::run(){
    mImpl->run();
}


}
}

