#pragma once 

#include "Window.hpp"

#include <windows.h>

namespace gas{
    namespace ui{
        class App: public Object{
        private:
            Window* mMainWindow;
            HINSTANCE mHinstance;
        public:
            App(Window* window, HINSTANCE instance);
            virtual ~App();
            virtual void run();
        };
    }
}
