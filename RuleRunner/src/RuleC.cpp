//
// Created by ishan on 06-10-2019.
//

#include "RuleC.h"

// Conditions for Rule C: Average sum of all the integers should be greater
// or equal to 500.
bool RuleC::TestRule()
{
    const int avg = 500;
    int size = input.size();
    int sum = std::accumulate(input.begin(),input.end(),0);
    if(sum/size >= avg)
    {
        std::cout << "Rule RuleC Passed." << std::endl;
        return true;
    }
    std::cout << "Rule RuleC Failed" << std::endl;
    return false;
}