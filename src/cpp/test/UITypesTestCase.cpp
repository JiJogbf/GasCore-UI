#include "UITypesTestCase.hpp"

#include <iostream>

#include <gas\ui\UITypes.hpp>

namespace gas{
namespace test{

UITypesTestCase::UITypesTestCase(Logger* logger): RichTestCase("UITypesTestCase", logger){}

void UITypesTestCase::execute(){
    createIntegerPoint();
    createFloatPoint();
    createIntegerRectangle();
    createFloatRectangle();
    RichTestCase::execute();
}

void UITypesTestCase::createIntegerPoint(){
    gas::ui::Point<int> a(1, 2);
    mLogger->print("createIntegerPoint() - pass");
    
}

void UITypesTestCase::createFloatPoint(){
    gas::ui::Point<double> a(3.0, 4.0);
    mLogger->print("createFloatPoint() - pass");
}

void UITypesTestCase::createIntegerRectangle(){
    gas::ui::Rectangle<long> a(1,2, 3, 4);
    mLogger->print("createIntegerRectangle() - pass");
}

void UITypesTestCase::createFloatRectangle(){
    gas::ui::Point<double> a(3.0, 4.0);
    mLogger->print("createFloatRectangle() - pass");
}


}
}

