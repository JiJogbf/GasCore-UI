#include "ViewsTestCase.hpp"

#include <gas\Ptr.hpp>
#include <gas\ViewGroup.hpp>
#include <gas\TextView.hpp>

#include <cassert>
#include <iostream>

namespace gas{
namespace test{


ViewsTestCase::ViewsTestCase(){}

ViewsTestCase::~ViewsTestCase(){}

void ViewsTestCase::execute(){
    emptyViewGroupHaveZeroChilds();
    appeindingThreMockViews();
    removingViewFromGroup();
}

void ViewsTestCase::emptyViewGroupHaveZeroChilds(){
    gas::Ptr<gas::ui::ViewGroup> group(new gas::ui::ViewGroup());
    // @todo: #10 Adding proper assertions in GasCore-Core
    assert(group->childCount() == 0 && "Child count has unexpected value!");
    std::cout << "emptyViewGroupHaveZeroChilds: pass" << std::endl;
    // delete group;
}

void ViewsTestCase::appeindingThreMockViews(){
    gas::Ptr<gas::ui::ViewGroup> group(new gas::ui::ViewGroup());
    // @todo: #10 Adding proper assertions in GasCore-Core
    group->add(new gas::ui::TextView());
    group->add(new gas::ui::TextView());
    group->add(new gas::ui::TextView());
    assert(group->childCount() == 3 && "Child count has unexpected value!");
    std::cout << "appeindingThreMockViews: pass" << std::endl;
}

void ViewsTestCase::removingViewFromGroup(){
    gas::Ptr<gas::ui::ViewGroup> group(new gas::ui::ViewGroup());
    group->add(new gas::ui::TextView());
    gas::ui::View* ptr = new gas::ui::TextView();
    group->add(ptr);
    group->add(new gas::ui::TextView());
    // @todo: #11 implement this feature and enable this test case after it
    group->remove(ptr);
    
    // assert(group->childCount() == 2 && "Child count has unexpected value!");
    // @todo: #10 Adding proper assertions in GasCore-Core
    std::cout << "removingViewFromGroup: not implemented" << std::endl;
}


}
}
