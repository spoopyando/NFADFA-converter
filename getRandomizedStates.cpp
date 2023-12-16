#include "getRandomizedStates.hpp"

std::vector<char> getRandomizedStates(int numStates)
{
    std::vector<char> randomCharacters;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distribution('A', 'Z');

    std::set<char> uniqueCharacters;

    while (uniqueCharacters.size() < numStates) {
        char randomChar = static_cast<char>(distribution(gen));

        if (uniqueCharacters.find(randomChar) == uniqueCharacters.end()) {
            uniqueCharacters.insert(randomChar);
            randomCharacters.push_back(randomChar);
        }
    }

    return randomCharacters;
}
