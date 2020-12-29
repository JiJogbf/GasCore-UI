#pragma once 

#include "WindowImpl.hpp"

#include <windows.h>
#include "..\Canvas.hpp"

namespace gas{
    namespace ui{
        namespace impl{           
            class WindowsWindowImpl: public WindowImpl{
            private:
                HWND mWnd;
                int mShowMode;
            public:
                WindowsWindowImpl(View* root, int mode);
                ~WindowsWindowImpl();
                void create() override;
                void close() override;
                void show() override;
                Canvas* canvas() override;
            };
        }
    }
}
