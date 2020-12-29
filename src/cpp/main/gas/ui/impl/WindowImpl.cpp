#include "WindowImpl.hpp"

namespace gas{
namespace ui{
namespace impl{

WindowImpl::WindowImpl(View* root, Canvas* canvas): mRoot(root), mCanvas(canvas){}

WindowImpl::~WindowImpl(){
    delete mRoot;
    delete mCanvas;
}

void WindowImpl::show(){
    mRoot->draw(canvas());
}

Canvas* WindowImpl::canvas(){
    return mCanvas;
}

}
}
}
