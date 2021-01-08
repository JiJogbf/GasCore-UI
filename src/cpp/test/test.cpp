#include <gas\test\Tester.hpp>

#include <gas\test\Logger.hpp>
#include <gas\test\ConsoleLogger.hpp>

#include "UITypesTestCase.hpp"
#include "ViewsTestCase.hpp"

int main(){
    gas::test::Logger* logger = new gas::test::ConsoleLogger();
    gas::test::Tester tester(logger);
    tester.add(new gas::test::UITypesTestCase(logger));
    tester.add(new gas::test::ViewsTestCase(logger));
    tester.run();
    return 0;
}