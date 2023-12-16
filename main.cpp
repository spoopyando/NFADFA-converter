#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include <sstream>

#include "getStates.hpp"
#include "displayStates.hpp"
#include "getInputs.hpp"
#include "displayStateInputs.hpp"
#include "getStateTransitions.hpp"
#include "displayStateTransitions.hpp"
#include "getAcceptingStates.hpp"
#include "displayAcceptingStates.hpp"
#include "getRandomizedStates.hpp"

//----------------------------------------------------------//
// How to compile:

//     1) g++ -c getStates.cpp displayStates.cpp getInputs.cpp displayStateInputs.cpp getStateTransitions.cpp displayStateTransitions.cpp getAcceptingStates.cpp displayAcceptingStates.cpp getRandomizedStates.cpp main.cpp
//     3) g++ getStates.o displayStates.o getInputs.o displayStateInputs.o getStateTransitions.o displayStateTransitions.o getAcceptingStates.o displayAcceptingStates.o getRandomizedStates.o main.o -o nfadfa
//     3) ./nfadfa 

// 1) g++ -c getStates.cpp
// 2) g++ -c displayStates.cpp
// 3) g++ -c getInputs.cpp 
// 4) g++ -c displayStateInputs.cpp
// 5) g++ -c getStateTransitions.cpp
// 6) g++ -c displayStateTransitions.cpp
// 6) g++ -c getAcceptingStates.cpp 
// 6) g++ -c displayAcceptingStates.cpp
// 6) g++ -c getRandomziedStates.cpp
// 5) g++ -c main.cpp
// 6) g++ getStates.o displayStates.o getInputs.o displayStateInputs.o main.o -o nfadfa
//----------------------------------------------------------//

int main(){
    std::cout << "Would you like a random NFA and DFA to be generated? Enter 'Y' or 'N': ";
    char randomize = '\0';
    std::cin >> randomize;
    randomize = std::toupper(randomize);

    if(randomize == 'N')
    {
        // Get states
        std::cout << "\n--------------------- Getting states -----------------------\n";
        std::vector<char> states = getStates();
        std::cout << "\n--------------------- Displaying states -----------------------\n";
        displayStates(states);

        std::cout << "\n--------------------- Getting accepting states -----------------------\n";
        std::vector<char> acceptingStates = getAcceptingStates(states);
        std::cout << "\n--------------------- Displaying accepting states -----------------------\n";
        displayAcceptingStates(acceptingStates);

        // Get inputs on states
        std::cout << "\n--------------------- Getting state inputs -----------------------\n";
        std::map<std::vector<int>, char> stateInputsMap = getInputs(states);
        std::cout << "\n--------------------- Displaying state inputs -----------------------\n";
        displayStateInputs(stateInputsMap);

        // Get transitions on states and inputs
        std::cout << "\n--------------------- Getting state transitions on inputs -----------------------\n";
        std::map<int, NFA_STATE> nfa = getTransitions(stateInputsMap);
        std::cout << "\n--------------------- Displaying NFA state transition table -----------------------\n";
        displayStateTransitions(nfa);
    }
    else
    {
        // Get randomized states. Can change the number of states by altering the parameters in the function below
        std::cout << "\n--------------------- Getting states -----------------------\n";
        std::vector<char> states = getRandomizedStates();
        std::cout << "\n--------------------- Displaying states -----------------------\n";
        displayStates(states);
    }
    return 0;
}