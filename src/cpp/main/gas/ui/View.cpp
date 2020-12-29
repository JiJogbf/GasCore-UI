#include "View.hpp"

namespace gas{
namespace ui{


View::View(long x, long y, long width, long height):
    mX(x), mY(y), mWidth(width), mHeight(height)
{}
            
View::~View(){

}

void View::draw(Canvas* canvas){
    // draw simple gray rectangle area from 
    // x,y origin with width and height here 
}


}
}