#pragma once 

#include "ViewGroup.hpp"

#include <windows.h>

namespace gas{
    namespace ui{

        namespace impl{
            class WindowImpl;
        }

        class Window: public ViewGroup{
        private:
            impl::WindowImpl* mImpl;
            /* @todo: #1 make PIMPL here for crossplatform latter. */
            HWND mWnd;
            int mShowMode;
        public:
            Window(int mode);
            virtual ~Window();
            virtual void create();
            virtual void close();
            virtual void show();
        };
    }
}
