#pragma once 

#include "Window.hpp"

#include <windows.h>

namespace gas{
    namespace ui{
        class App: public Object{
        private:
            /* @todo: #6 App: make PIMPL here for crossplatform latter. */           
            Window* mMainWindow;
            HINSTANCE mHinstance;
        public:
            App(Window* window, HINSTANCE instance);
            virtual ~App();
            virtual void run();
        };
    }
}
