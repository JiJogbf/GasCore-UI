#include "WindowsAppImpl.hpp"

#include <windows.h>

namespace gas{
    namespace ui{
        namespace impl{
            WindowsAppImpl::WindowsAppImpl(Window* window, HINSTANCE instance):
                AppImpl(), mMainWindow(window), mHinstance(instance)
            {}

            WindowsAppImpl::~WindowsAppImpl(){
                delete mMainWindow;
                mHinstance = nullptr;
            }

            void WindowsAppImpl::run(){
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
}
