#include <iostream>
#include <string> // Required for PA1205 (converting char to string)

int main() {
    
    char myChar = 'A';
    std::cout << "--- PA1201: Declare a char ---\n";
    std::cout << "Character successfully declared and initialized.\n\n";

    std::cout << "--- PA1202: Print ASCII values ---\n";
    // Casting the char to an int reveals its underlying ASCII code
    std::cout << "The ASCII value of '" << myChar << "' is: " << (int)myChar << "\n\n";

    std::cout << "--- PA1203: Print char value ---\n";
    std::cout << "The character value is: " << myChar << "\n\n";

    std::cout << "--- PA1204: Input char ---\n";
    char userChar;
    std::cout << "Please enter a single character: ";
    std::cin >> userChar;
    std::cout << "You entered: " << userChar << "\n\n";

    std::cout << "--- PA1205: Convert char to string ---\n";
    // Method: The std::string constructor takes (size, character)
    std::string convertedString(1, userChar); 
    
    // Verifying it is now a string by appending text to it
    std::string resultMessage = convertedString + " is now part of a string!";
    std::cout << "Converted String result: " << resultMessage << "\n";

    return 0;
}