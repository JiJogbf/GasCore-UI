#include "ViewGroup.hpp"

namespace gas{
namespace ui{

ViewGroup::ViewGroup(): View(0, 0, 1, 1){}

ViewGroup& ViewGroup::add(View* view){
    // @todo: #9 add some unique item check here before inserting new view
    mItems.push_back(view);
    return *this;
}

ViewGroup& ViewGroup::remove(View* view){
    // @todo: #10 removing view from grop
    return *this;
}

int ViewGroup::childCount() const{
    return mItems.size();
}


}
}