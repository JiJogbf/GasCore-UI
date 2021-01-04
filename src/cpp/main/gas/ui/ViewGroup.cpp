#include "ViewGroup.hpp"

namespace gas{
namespace ui{

ViewGroup::ViewGroup(long x, long y, long width, long height): 
    View(x, y, width, height)
{}

ViewGroup::~ViewGroup(){
    mItems.clear();
}

ViewGroup& ViewGroup::add(View* view){
    // @todo: #9 add some unique item check here before inserting new view
    mItems.push_back(std::shared_ptr<View>(view));
    return *this;
}

ViewGroup& ViewGroup::remove(View* view){
    // @todo: #10 removing view from grop
    //mItems.erase();
    return *this;
}

int ViewGroup::childCount() const{
    return mItems.size();
}

void ViewGroup::draw(Canvas* canvas){
    // View::draw(canvas);
    for(auto p = mItems.begin(); p != mItems.end(); ++p){
        (*p)->draw(canvas);
    }
}


}
}