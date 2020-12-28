#include "ViewGroup.hpp"

namespace gas{
namespace ui{

ViewGroup::ViewGroup(): View(0, 0, 1, 1){}

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

void ViewGroup::draw(){
    for(auto p = mItems.begin(); p != mItems.end(); ++p){
        (*p)->draw();
    }
}


}
}