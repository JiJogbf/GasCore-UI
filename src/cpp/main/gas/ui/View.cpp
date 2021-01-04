#include "View.hpp"

namespace gas{
namespace ui{


View::View(long x, long y, long width, long height):
    View(Point<long>(x, y), width, height)
{}
            
View::View(Point<long> origin, long width, long height):
    mOrigin(origin), mWidth(width), mHeight(height)
{}

View::~View(){}

void View::draw(Canvas* canvas){
    canvas->drawRectangle(mOrigin.x, mOrigin.y, mWidth, mHeight);
}


}
}