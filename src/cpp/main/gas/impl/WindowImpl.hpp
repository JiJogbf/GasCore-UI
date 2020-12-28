#pragma once 

#include <gas\Object.hpp>
#include "..\View.hpp"

namespace gas{
    namespace ui{
        namespace impl{           
            class WindowImpl: public Object{
            private:
                // impl::WindowImpl* mImpl;
                // /* @todo: #1 make PIMPL here for crossplatform latter. */
                // HWND mWnd;
                // int mShowMode;
                View* mRoot;
                Canvas* mCanvas;
            public:
                WindowImpl(View* root, Canvas* canvas);
                virtual ~WindowImpl();
                virtual void create() = 0;
                virtual void close() = 0;
                virtual void show();
                virtual Canvas* canvas();
            };
        }
    }
}
