#pragma once 

#include "AppImpl.hpp"
#include "..\Window.hpp"

#include <windows.h>

namespace gas{
    namespace ui{
        namespace impl{
            class WindowsAppImpl: public AppImpl{
            private:
                Window* mMainWindow;
                HINSTANCE mHinstance;
            public:               
                WindowsAppImpl(Window* window, HINSTANCE instance);
                ~WindowsAppImpl();
                void run() override;
            };
        }
    }
}
