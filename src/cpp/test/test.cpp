#include <gas\test\Tester.hpp>

#include <gas\test\Logger.hpp>
#include <gas\test\FileLogger.hpp>

#include "UITypesTestCase.hpp"
#include "ViewsTestCase.hpp"

int main(){
    gas::test::Logger* logger = new gas::test::FileLogger("result.log");
    gas::test::Tester tester(logger);
    tester.add(new gas::test::UITypesTestCase(logger));
    tester.add(new gas::test::ViewsTestCase(logger));
    tester.run();
    return 0;
}