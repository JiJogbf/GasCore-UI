#pragma once

#include "View.hpp"
#include "Canvas.hpp"

#include <string>

namespace gas{
    namespace ui{
        class TextView: public View{
        private:
            std::string mText;
        public:
            TextView(long x, long y, long width, long height, const std::string& text);
            void draw(Canvas* canvas) override;
        };
    }
}