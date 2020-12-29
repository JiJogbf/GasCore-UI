#include "WindowImpl.hpp"

namespace gas{
namespace ui{
namespace impl{

WindowImpl::WindowImpl(View* root): mRoot(root){}

WindowImpl::~WindowImpl(){
    delete mRoot;
}

void WindowImpl::show(){
    Canvas* c = canvas();
    mRoot->draw(c);
    delete c;
}


}
}
}
