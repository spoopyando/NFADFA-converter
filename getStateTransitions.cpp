#include "getStateTransitions.hpp"

std::map<int, NFA_STATE> getTransitions(std::map<std::vector<int>, char> stateInputsMap)
{
    std::map<int, NFA_STATE> nfa;
    for(auto & pair : stateInputsMap)
    {
        for(auto & currentInput : pair.first)
        {
            bool stop = false;
            std::vector<char> stateTransitionsVector;
            char currentState = pair.second;
            while(!stop)
            {
                char stateTransition = '\0';
                std::cout << "On state -" << currentState << "- with input -" << currentInput << ", what is the state transition?: ";
                std::cin >> stateTransition;
                stateTransition = std::toupper(stateTransition);

                char continueAdding = '\0';
                std::cout << "Continue adding state transitions for state -" << currentState << "- with input -"<< currentInput <<"-? Enter 'Y' or 'N': ";
                std::cin >> continueAdding;
                continueAdding = std::toupper(continueAdding);
                if(continueAdding == 'N')
                {
                    stop = true;
                }
                stateTransitionsVector.push_back(stateTransition);
            }
            NFA_STATE nfa_state = NFA_STATE(stateTransitionsVector, currentState);
            nfa.insert(std::make_pair(currentInput, nfa_state));
            stateTransitionsVector.clear();
        }
    }
    return nfa;
}