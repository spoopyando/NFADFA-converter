#include "displayStateTransitions.hpp"

void displayStateTransitions(std::map<int, NFA_STATE> nfa)
{
    for(auto & pair : nfa)
    {
        char state = pair.second.NFAstate;
        int input = pair.first;
        std::vector<char> transitions = pair.second.NFAstateTransitions;
        std::cout << "State -" << state << "- input -" << input << "-: ";
        for(auto & elements : transitions)
        {
            std::cout << elements << " ";
        }
        std::cout << "\n";
    }
}