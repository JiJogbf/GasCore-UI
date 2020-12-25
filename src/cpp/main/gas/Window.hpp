#pragma once 

#include "ViewGroup.hpp"

namespace gas{
    namespace ui{
        namespace impl{
            class WindowImpl;
        }

        class Window: public ViewGroup{
        private:
            impl::WindowImpl* mImpl;
        public:
            Window(int mode);
            virtual ~Window();
            virtual void create();
            virtual void close();
            virtual void show();
        };
    }
}
