//
// Created by ishan on 06-10-2019.
//

#include "RuleA.h"

// Conditions for Rule A: Sum to two consecutive integers should be
// greater than 1000.
bool RuleA::TestRule()
{
    const int max = 1000;
    int size = input.size();
    for(int i = 1; i < size; ++i)
    {
        if(input[i-1] + input[i] >= max)
        {
            std::cout << "Rule RuleA Passed." << std::endl;
            return true;
        }
    }
    std::cout << "Rule RuleA Failed" << std::endl;
    return false;
}