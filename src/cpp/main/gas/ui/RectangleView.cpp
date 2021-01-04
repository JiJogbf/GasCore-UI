#include "RectangleView.hpp"

namespace gas{
namespace ui{

RectangleView::RectangleView(long x, long y, long width, long height):
    View(x, y, width, height)
{}

RectangleView::~RectangleView(){}

void RectangleView::draw(Canvas* canvas){
    View::draw(canvas);
}

}
}
