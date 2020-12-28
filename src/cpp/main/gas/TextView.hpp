#pragma once

#include "View.hpp"

namespace gas{
    namespace ui{
        class TextView: public View{
        public:
            TextView();
            void draw() override;
        };
    }
}