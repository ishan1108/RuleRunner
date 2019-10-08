//
// Created by ishan on 06-10-2019.
//

#ifndef RULERUNNER_RULEB_H
#define RULERUNNER_RULEB_H

#include <Rule.h>

// Rule B
class RuleB : public Rule
{
public:
    RuleB(std::vector<int> input) : Rule(input){};

private:
    bool TestRule();
};


#endif //RULERUNNER_RULEB_H
