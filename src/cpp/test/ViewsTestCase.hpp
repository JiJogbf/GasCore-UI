#pragma once

#include <gas\test\TestCase.hpp>

namespace gas{
namespace test{

class ViewsTestCase: public TestCase{
public:
    ViewsTestCase(Logger* logger);
    ~ViewsTestCase();
    void execute() override;
    void emptyViewGroupHaveZeroChilds();
    void appeindingThreMockViews();
    void removingViewFromGroup();
    void drawingMocks();
};


}
}