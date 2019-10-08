//
// Created by ishan on 06-10-2019.
//

#include "RuleTester.h"

// Constructor
RuleTester::RuleTester()
{
    rule = NULL;
}

// Parse the input and set the rule according to the rule type provided
void RuleTester::setRule(RuleType ruleType, int& count, char **in)
{
    std::vector<int> parsedInput = ParseInput(count, in);
    if(ruleType == A)
    {
        rule = new RuleA(parsedInput);
        return;
    }
    if(ruleType == B)
    {
        rule = new RuleB(parsedInput);
        return;
    }
    if(ruleType == C)
    {
        rule = new RuleC(parsedInput);
        return;
    }
    else
    {
        std::cout << "Invalid Rule input";
        exit(0);
    }
}

// Run the test. If the test fails, set allPassed to false.
void RuleTester::RunTest()
{
    if(!rule->TestRule())
        allPassed = false;
}

// Check if the given input is valid and store it in vector.
std::vector<int> RuleTester::ParseInput(int& count, char** in)
{
    std::vector<int> input;
    for(int i = 1; i < count; ++i)
    {
        char* p;
        long num = strtol(in[i], &p, 10);
        if (*p)
        {
            std::cout << "Please enter a valid number input";
            exit(-1);
        }
        else
        {
            input.push_back(num);
        }
    }
    return input;
}

// Print All Rules Passed if all the test are successful.
void RuleTester::checkAllPassed()
{
    if(this->allPassed)
    {
        std::cout << "ALL rules passed." << std::endl;
    }
}

RuleTester::~RuleTester()
{
    delete(rule);
}
