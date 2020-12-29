#pragma once

#include "View.hpp"
#include "Canvas.hpp"

namespace gas{
    namespace ui{
        class TextView: public View{
        public:
            TextView();
            void draw(Canvas* canvas) override;
        };
    }
}