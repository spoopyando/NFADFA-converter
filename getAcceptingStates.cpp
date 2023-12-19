#include "getAcceptingStates.hpp"

std::vector<char> getAcceptingStates(std::vector<char> states)
{
    std::vector<char> acceptingStates;
    for(char state : states)
    {
        std::cout << "Is the state -" << state << "- an accepting state? Enter 'Y' or 'N': ";
        char accepting =  '\0';
        std::cin >> accepting;
        accepting = std::toupper(accepting);

        if(accepting == 'Y')
        {
            acceptingStates.push_back(state);
        }
    }
    return acceptingStates;
}