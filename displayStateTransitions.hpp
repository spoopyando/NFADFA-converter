#ifndef DISPLAYSTATETRANSITIONS_HPP
#define DISPLAYSTATETRANSITIONS_HPP

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include <sstream>

#include "getStateTransitions.hpp"

void displayStateTransitions(std::map<int, NFA_STATE> nfa);

#endif