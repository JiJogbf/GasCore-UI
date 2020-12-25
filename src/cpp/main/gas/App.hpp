#pragma once 

#include "Window.hpp"

namespace gas{
    namespace ui{
        namespace impl{
            class AppImpl;
        }

        class App: public Object{
        private:
            impl::AppImpl* mImpl;
        public:
            App(Window* window);
            virtual ~App();
            virtual void run();
        };
    }
}
