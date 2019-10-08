//
// Created by ishan on 06-10-2019.
//

#include "RuleB.h"

// Conditions for Rule B: Difference between two consecutive integers should be
// greater than 500.
bool RuleB::TestRule()
{
    const int diff = 500;
    int size = input.size();
    for(int i = 1; i < size; ++i)
    {
        if(input[i] - input[i-1] >= diff)
        {
            std::cout << "Rule RuleB Passed." << std::endl;
            return true;
        }
    }
    std::cout << "Rule RuleB Failed" << std::endl;
    return false;
}