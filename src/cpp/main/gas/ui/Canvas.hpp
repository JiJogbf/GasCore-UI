#pragma once

#include <string>

#include <gas\Object.hpp>

namespace gas{
    namespace ui{
        class Canvas: public Object{
        public:
            virtual ~Canvas();
            virtual void drawText(long x, long y, std::string& text, int count) = 0;
            virtual void drawRectangle(long x, long y, long width, long height) = 0;
            // virtual void drawRect()
            // virtual void fillRect()
            // etc...
        };
    }
}
