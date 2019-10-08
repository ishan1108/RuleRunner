#include <iostream>
#include <vector>
#include <RuleTester.h>
int main(int argc, char** argv)
{
    // Tester object to test the rules
    RuleTester tester;

    // Test RuleA
    tester.setRule(A, argc, argv);
    tester.RunTest();

    // Test RuleB
    tester.setRule(B, argc, argv);
    tester.RunTest();

    // Test RuleC
    tester.setRule(C, argc, argv);
    tester.RunTest();

    // Check if all test passed
    tester.checkAllPassed();

    return 0;
}