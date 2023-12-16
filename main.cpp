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

//----------------------------------------------------------//
// How to compile:

//     1) g++ -c getStates.cpp displayStates.cpp getInputs.cpp displayStateInputs.cpp getStateTransitions.cpp displayStateTransitions.cpp main.cpp
//     3) g++ getStates.o displayStates.o getInputs.o displayStateInputs.o getStateTransitions.o displayStateTransitions.cpp main.o -o nfadfa
//     3) ./nfadfa 

// 1) g++ -c getStates.cpp
// 2) g++ -c displayStates.cpp
// 3) g++ -c getInputs.cpp 
// 4) g++ -c displayStateInputs.cpp
// 5) g++ -c getStateTransitions.cpp
// 6) g++ -c displayStateTransitions.cpp
// 5) g++ -c main.cpp
// 6) g++ getStates.o displayStates.o getInputs.o displayStateInputs.o main.o -o nfadfa
//----------------------------------------------------------//

int main(){
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
    return 0;
}