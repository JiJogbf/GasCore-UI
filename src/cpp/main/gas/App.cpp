#include "App.hpp"

namespace gas{
namespace ui{

App::App(Window* window, HINSTANCE instance): 
    mMainWindow(window), mHinstance(instance)
{}

App::~App(){
    delete mMainWindow;
    mHinstance = nullptr;
}

void App::run(){
    /* @todo: #3 adding main message processing loop here*/
}

}
}

