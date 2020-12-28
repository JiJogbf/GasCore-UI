#pragma once 

#include "View.hpp"
#include <gas\Object.hpp>

namespace gas{
    namespace ui{
        namespace impl{
            class WindowImpl;
        }

        class Window: public Object{
        private:
            impl::WindowImpl* mImpl;
        public:
            Window(View* root, int mode);
            virtual ~Window();
            virtual void create();
            virtual void close();
            virtual void show();
        };
    }
}
