#include <iostream>
#include <cctype>
#include <string>

std::string convertToUpperCase(const std::string& str) {
    std::string result;
    for (char c : str) {
        result += std::toupper(c);
    }
    return result;
}

std::string convertToLowerCase(const std::string& str) {
    std::string result;
    for (char c : str) {
        result += std::tolower(c);
    }
    return result;
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cout << "Usage: ./convert {command} {string}" << std::endl;
        return 1;
    }
    
    std::string command = argv[1];
    std::string input = argv[2];

    if (command == "up") {
        std::string upperCase = convertToUpperCase(input);
        std::cout <<  upperCase << std::endl;
    } else if (command == "down") {
        std::string lowerCase = convertToLowerCase(input);
        std::cout <<  lowerCase << std::endl;
    } else {
        std::cout << "Invalid command: " << command << std::endl;
        return 1;
    }

    return 0;
}