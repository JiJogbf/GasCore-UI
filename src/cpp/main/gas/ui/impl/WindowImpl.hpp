#pragma once 

#include <gas\Object.hpp>
#include "..\View.hpp"

namespace gas{
    namespace ui{
        namespace impl{           
            class WindowImpl: public Object{
            protected:
                // impl::WindowImpl* mImpl;
                // /* @todo: #1 make PIMPL here for crossplatform latter. */
                // HWND mWnd;
                // int mShowMode;
                View* mRoot;
            public:
                WindowImpl(View* root);
                virtual ~WindowImpl();
                virtual void create() = 0;
                virtual void close() = 0;
                virtual void show();
                virtual Canvas* canvas() = 0;
            };
        }
    }
}
