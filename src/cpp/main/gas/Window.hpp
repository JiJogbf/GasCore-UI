#pragma once 

#include "ViewGroup.hpp"

#include <windows.h>

namespace gas{
    namespace ui{
        class Window: public ViewGroup{
        private:
            /* @todo: #1 make PIMPL here for crossplatform latter. */
            HWND mWnd;
        public:
            Window();
            virtual ~Window();
            virtual void show();
        };
    }
}
