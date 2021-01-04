#include "ViewsTestCase.hpp"

#include <gas\Ptr.hpp>
#include <gas\ui\ViewGroup.hpp>
#include <gas\ui\TextView.hpp>
#include <gas\ui\Canvas.hpp>

#include <exception>
#include <cassert>
#include <iostream>

namespace gas{
namespace test{

class MockView: public gas::ui::View{
private:
    bool mDebug;
public:
    ~MockView(){
        if(mDebug){
            std::cout << "~MockView()" << std::endl;
        }       
    }
    MockView(bool doDebug = false): gas::ui::View(0, 0, 1, 1), mDebug(doDebug){
        if(mDebug){
            std::cout << "MockView()" << std::endl;
        }
    }
    void draw(gas::ui::Canvas* canvas) override{
        if(mDebug){
            std::cout << "MockView.draw(canvas)" << std::endl;
        }
    }
};


class MockCanvas: public gas::ui::Canvas{
public:
    ~MockCanvas(){}
    void drawText(long x, long y, std::string& text, int count){}
    void drawRectangle(long x, long y, long width, long height){}
};


ViewsTestCase::ViewsTestCase(){}

ViewsTestCase::~ViewsTestCase(){}

void ViewsTestCase::execute(){
    emptyViewGroupHaveZeroChilds();
    appeindingThreMockViews();
    removingViewFromGroup();
    drawingMocks();
}

void ViewsTestCase::emptyViewGroupHaveZeroChilds(){
    gas::Ptr<gas::ui::ViewGroup> group(new gas::ui::ViewGroup());
    // @todo: #10 Adding proper assertions in GasCore-Core
    assert(group->childCount() == 0 && "Child count has unexpected value!");
    std::cout << "emptyViewGroupHaveZeroChilds: pass" << std::endl;
}

void ViewsTestCase::appeindingThreMockViews(){
    gas::Ptr<gas::ui::ViewGroup> group(new gas::ui::ViewGroup());
    // @todo: #10 Adding proper assertions in GasCore-Core
    group->add(new MockView());
    group->add(new MockView());
    group->add(new MockView());
    assert(group->childCount() == 3 && "Child count has unexpected value!");
    std::cout << "appeindingThreMockViews: pass" << std::endl;
}

void ViewsTestCase::removingViewFromGroup(){
    gas::Ptr<gas::ui::ViewGroup> group(new gas::ui::ViewGroup());
    group->add(new MockView());
    gas::ui::View* ptr = new gas::ui::TextView(0,0,0,0, "");
    group->add(ptr);
    group->add(new MockView());
    // @todo: #11 implement this feature and enable this test case after it
    // group->remove(ptr);   
    // assert(group->childCount() == 2 && "Child count has unexpected value!");
    // @todo: #10 Adding proper assertions in GasCore-Core
    std::cout << "removingViewFromGroup: not implemented" << std::endl;
}


void ViewsTestCase::drawingMocks(){
    gas::Ptr<gas::ui::ViewGroup> group(new gas::ui::ViewGroup());
    gas::Ptr<gas::ui::Canvas> canvas(new MockCanvas());
    group->add(new MockView());
    group->add(new MockView());
    group->add(new MockView());
    try{
        group->draw(canvas);
    }catch(...){
        std::cout << "drawingMocks: failed" << std::endl;    
    }
    std::cout << "drawingMocks: pass" << std::endl;
}


}
}
