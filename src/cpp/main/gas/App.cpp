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
    mMainWindow->create();
    mMainWindow->show();
    
    MSG msg ={ };
    while (GetMessage(&msg, NULL, 0, 0)){
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
}

}
}

