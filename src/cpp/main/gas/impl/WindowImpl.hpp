#pragma once 

#include <gas\Object.hpp>

namespace gas{
    namespace ui{
        namespace impl{           
            class WindowImpl: public Object{
            private:
                // impl::WindowImpl* mImpl;
                // /* @todo: #1 make PIMPL here for crossplatform latter. */
                // HWND mWnd;
                // int mShowMode;
            public:
                // Window(int mode);
                virtual ~WindowImpl() = 0;
                virtual void create() = 0;
                virtual void close() = 0;
                virtual void show() = 0;
            };
        }
    }
}
