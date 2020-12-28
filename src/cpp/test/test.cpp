#include <gas\test\Tester.hpp>

#include "ViewsTestCase.hpp"

int main(){
    gas::test::Tester tester;
    tester.add(new gas::test::ViewsTestCase());
    tester.run();
    return 0;
}