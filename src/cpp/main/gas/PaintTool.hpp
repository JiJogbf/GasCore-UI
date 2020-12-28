#pragma once

#include <gas\Object.hpp>

namespace gas{
    namespace ui{
        class PaintTool{
        public:
            virtual void drawText(long x, long y, std::string& text, int count);
        };
    }
}
