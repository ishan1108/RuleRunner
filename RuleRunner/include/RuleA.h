//
// Created by ishan on 06-10-2019.
//

#ifndef RULERUNNER_RULEA_H
#define RULERUNNER_RULEA_H

#include <Rule.h>

// Rule A
class RuleA : public Rule
{
public:
    RuleA(std::vector<int> input) : Rule(input){};

private:
    bool TestRule();
};


#endif //RULERUNNER_RULEA_H
