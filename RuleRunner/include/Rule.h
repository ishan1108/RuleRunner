//
// Created by ishan on 06-10-2019.
//

#ifndef RULERUNNER_RULE_H
#define RULERUNNER_RULE_H

#include <vector>
#include <iostream>

// Rule Interface for creating and testing rules.
class Rule {
public:
    Rule(){};
    Rule(std::vector<int>& numbers)
    {
        input = numbers;
    };

    virtual bool TestRule()=0;
    virtual ~Rule(){};


protected:
    std::vector<int> input;
};




#endif //RULERUNNER_RULE_H
