#pragma once 

#include <gas\Object.hpp>
#include "..\View.hpp"

namespace gas{
    namespace ui{
        namespace impl{           
            class WindowImpl: public Object{
            protected:
                View* mRoot;
            public:
                WindowImpl(View* root);
                virtual ~WindowImpl();
                virtual void create() = 0;
                virtual void close() = 0;
                virtual void show() = 0;
                virtual void paint();
                virtual Canvas* canvas() = 0;
            };
        }
    }
}
