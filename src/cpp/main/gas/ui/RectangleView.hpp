#pragma once 

#include "View.hpp"
#include "Canvas.hpp"

namespace gas{
namespace ui{
    class RectangleView: public View{
    public: 
        RectangleView(long x, long y, long width, long height);
        ~RectangleView();
        void draw(Canvas* canvas) override;
    };
}
}