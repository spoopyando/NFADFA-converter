#include "getInputs.hpp"

std::map<std::vector<int>, char> getInputs(std::vector<char> states){
    std::map<std::vector<int>, char> input_state_map;

    for(char element : states)
    {
        bool stop = false;
        std::vector<int> inputVector;
        while(!stop)
        {
            int stateInput = -999;
            std::cout << "Enter an input available for state -"<< element << "-: ";
            std::cin >> stateInput;

            char stopInput = '\0';
            std::cout << "Continue adding inputs for state -" << element << "-? Enter 'Y' or 'N': ";
            std::cin >> stopInput;
            stopInput = std::toupper(stopInput);
            if(stopInput == 'N')
            {
                stop = true;
            }
            inputVector.push_back(stateInput);
        }
        input_state_map.insert(std::make_pair(inputVector, element));
    }
    return input_state_map;
}