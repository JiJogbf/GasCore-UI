#pragma once

#include <gas\test\TestCase.hpp>
#include <gas\test\Logger.hpp>

namespace gas{
namespace test{

class UITypesTestCase: public TestCase{
public:
    UITypesTestCase(Logger* logger);
    ~UITypesTestCase();
    void execute() override;
    void createIntegerPoint();
    void createFloatPoint();
    void createIntegerRectangle();
    void createFloatRectangle();
};


}
}