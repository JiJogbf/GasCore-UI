#pragma once

#include <gas\test\RichTestCase.hpp>
#include <gas\test\Logger.hpp>

namespace gas{
namespace test{

class UITypesTestCase: public RichTestCase{
public:
    UITypesTestCase(Logger* logger);
    void execute() override;
    void createIntegerPoint();
    void createFloatPoint();
    void createIntegerRectangle();
    void createFloatRectangle();
};


}
}