#include "UITypesTestCase.hpp"

#include <iostream>

#include <gas\ui\UITypes.hpp>

namespace gas{
namespace test{

UITypesTestCase::UITypesTestCase(Logger* logger): TestCase(logger){}

UITypesTestCase::~UITypesTestCase(){}

void UITypesTestCase::execute(){
    createIntegerPoint();
    createFloatPoint();
    createIntegerRectangle();
    createFloatRectangle();
}

void UITypesTestCase::createIntegerPoint(){
    gas::ui::Point<int> a(1, 2);
    std::cout << "createIntegerPoint() - pass" << std::endl;
}

void UITypesTestCase::createFloatPoint(){
    gas::ui::Point<double> a(3.0, 4.0);
    std::cout << "createFloatPoint() - pass" << std::endl;
}

void UITypesTestCase::createIntegerRectangle(){
    gas::ui::Rectangle<long> a(1,2, 3, 4);
    std::cout << "createIntegerRectangle() - pass" << std::endl;
}

void UITypesTestCase::createFloatRectangle(){
    gas::ui::Point<double> a(3.0, 4.0);
    std::cout << "createFloatRectangle() - pass" << std::endl;
}


}
}

