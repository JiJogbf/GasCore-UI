#include "View.hpp"

namespace gas{
namespace ui{


View::View(long x, long y, long width, long height):
    mX(x), mY(y), mWidth(width), mHeight(height)
{}
            
View::~View(){

}

void View::draw(Canvas* canvas){
    canvas->drawRectangle(mX, mY, mWidth, mHeight);
}


}
}