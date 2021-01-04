#include "TextView.hpp"

namespace gas{
namespace ui{

TextView::TextView(long x, long y, 
    long width, long height, const std::string& text): 
        View(x, y, width, height), mText(text)
{}

void TextView::draw(Canvas* canvas){
    // @todo: #16 View::draw must draw empty rectangle before all views will be painted
    canvas->drawText(mOrigin.x, mOrigin.y, mText, 0);
}

}
}