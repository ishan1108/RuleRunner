//
// Created by ishan on 06-10-2019.
//

#ifndef RULERUNNER_RULETESTER_H
#define RULERUNNER_RULETESTER_H

#include <RuleA.h>
#include <RuleB.h>
#include <RuleC.h>

// Enum to set the type of rule
enum  RuleType
{
    A, B, C
};

// Test rules based on type
class RuleTester {
public:

    RuleTester();
    void setRule(RuleType ruleType, int& count, char** in);
    void RunTest();
    void checkAllPassed();
    ~RuleTester();

private:
    Rule* rule;
    std::vector<int> ParseInput(int& count, char** in);
    bool allPassed = true;
};


#endif //RULERUNNER_RULETESTER_H
