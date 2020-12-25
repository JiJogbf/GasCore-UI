#include "App.hpp"

#include "impl/AppImpl.hpp"

namespace gas{
namespace ui{

// @todo: #7 MockAppImpl: remove it when we make right  implementation for Windows platform
class MockAppImpl: public gas::ui::impl::AppImpl{
public: 
    ~MockAppImpl() override{/*do nothing yet*/}
    void run(){ /*do nothing yet*/}
};

App::App(Window* window, HINSTANCE instance): 
    mImpl(new MockAppImpl()),
    mMainWindow(window), mHinstance(instance)
{}

App::~App(){
    delete mImpl;
    delete mMainWindow;
    mHinstance = nullptr;
}

void App::run(){
    mImpl->run();

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

