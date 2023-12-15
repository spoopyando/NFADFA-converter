#include "displayStates.hpp"

void displayStates(std::vector<char> states)
{
    std::cout << "\nDisplaying NFA states ..." << std::endl;
    for(char element : states)
    {
        std::cout << element << ' ';
    }
    std::cout << "\nFinished displaying NFA states!" << std::endl;
}