#pragma once 

#include "Window.hpp"

#include <windows.h>

namespace gas{
    namespace ui{
        class App: public Object{
        private:
            Window* mMainWindow;
            HINSTANCE s;
        public:
            App(Window* window, HINSTANCE instance);
            virtual ~App();
            virtual void run();
        };
    }
}

#endif