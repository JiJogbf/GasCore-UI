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

                static LRESULT CALLBACK WindowProc(
                    HWND hwnd, 
                    UINT uMsg, 
                    WPARAM wParam, 
                    LPARAM lParam
                );
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
