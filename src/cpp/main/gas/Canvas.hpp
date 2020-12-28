#pragma once

#include <gas\Object.hpp>

namespace gas{
    namespace ui{
        class Canvas{
        public:
            virtual void drawText(long x, long y, std::string& text, int count);
        };
    }
}
