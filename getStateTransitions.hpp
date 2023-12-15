#ifndef GETSTATETRANSITIONS_HPP
#define GETSTATETRANSITIONS_HPP

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include <sstream>

class NFA_STATE
{
    public:
        NFA_STATE(std::vector<char> transitions, char state)
        {
            NFAstateTransitions = transitions;
            NFAstate = state;
        }
        std::vector<char> NFAstateTransitions;
        char NFAstate;
        ~NFA_STATE(){};
};

// NFA_STATE::NFA_STATE(std::vector<char> transitions, char state)
// {
//     NFAstateTransitions = transitions;
//     NFAstate = state;
// }

// NFA_STATE::~NFA_STATE(){}

std::map<int, NFA_STATE> getTransitions(std::map<std::vector<int>, char> stateInputsMap);

#endif