#include "displayStateInputs.hpp"

void displayStateInputs(std::map<std::vector<int>, char> stateInputs){
    for(auto & pair : stateInputs)
    {
        std::cout << "The list of inputs available for state -" << pair.second << "- is: ";
        for(int input : pair.first)
        {
            std::cout << input << " ";
        }
        std::cout << "\n";
    }
}