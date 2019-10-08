//
// Created by ishan on 06-10-2019.
//

#ifndef RULERUNNER_RULEC_H
#define RULERUNNER_RULEC_H

#include <Rule.h>
#include <numeric>

// Rule C
class RuleC : public Rule
{
public:
    RuleC(std::vector<int>& input) : Rule(input){};
    ~RuleC(){};

private:
    bool TestRule();
};


#endif //RULERUNNER_RULEC_H
