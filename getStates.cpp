#include "getStates.hpp"
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include <sstream>

// Continually add states from user inputs
std::vector<char> getStates(){
    std::vector<char> states;
    bool stop = false;
    while(!stop)
    {
        char state = '\0';
        std::cout << "Enter state: ";
        std::cin >> state;
        state = std::toupper(state);

        char continueInput = '\0';
        std::cout << "Enter more states? Enter 'Y' or 'N': " << std::endl;
        std::cin >> continueInput;
        continueInput = std::toupper(continueInput);
        if(continueInput ==  'N')
        {
            stop = true;
        }

        states.push_back(state);
    }
    return states;
}