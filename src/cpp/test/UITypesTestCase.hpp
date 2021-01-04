#pragma once

#include <gas\test\TestCase.hpp>

namespace gas{
namespace test{

class UITypesTestCase: public TestCase{
public:
    UITypesTestCase();
    ~UITypesTestCase();
    void execute() override;
    void createIntegerPoint();
    void createFloatPoint();
    void createIntegerRectangle();
    void createFloatRectangle();
};


}
}