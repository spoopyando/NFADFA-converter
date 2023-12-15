#include "getSingleCharInput.hpp"

char getSingleCharInput(const std::string& element) {
    char stopInput = '\0';

    while (true) {
        std::cout << "Continue adding inputs for state -" << element << "-? Enter 'Y' or 'N': ";
        std::cin >> stopInput;

        // Check if the input is a single character
        if (std::cin.fail() || std::cin.peek() != '\n') {
            std::cout << "Invalid input. Please enter a single character." << std::endl;

            // Clear the input buffer to handle invalid input
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            // Valid input, convert to uppercase
            stopInput = std::toupper(stopInput);
            break;
        }
    }

    return stopInput;
}