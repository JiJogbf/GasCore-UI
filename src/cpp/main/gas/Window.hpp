#pragma once 

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
            Window(int mode);
            virtual ~Window();
            virtual void create();
            virtual void close();
            virtual void show();
        };
    }
}
