#pragma once

#include <gas\test\RichTestCase.hpp>

namespace gas{
namespace test{

class ViewsTestCase: public RichTestCase{
public:
    ViewsTestCase(Logger* logger);
    void execute() override;
    void emptyViewGroupHaveZeroChilds();
    void appeindingThreMockViews();
    void removingViewFromGroup();
    void drawingMocks();
};


}
}