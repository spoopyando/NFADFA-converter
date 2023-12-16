#include "displayAcceptingStates.hpp"

void displayAcceptingStates(std::vector<char> states)
{
    std::cout << "The accepting states are: ";
    for(char state : states)
    {
        std::cout << state << " ";
    }
}