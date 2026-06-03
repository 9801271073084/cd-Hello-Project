#include <iostream>
#include <stdexcept> // Required for standard exceptions like runtime_error

// A simple function to demonstrate throwing an exception
double divide(double numerator, double denominator) {
    if (denominator == 0) {
        // PA0901: Throwing an exception when a bad condition occurs
        throw std::runtime_error("Error: Division by zero is not allowed!");
    }
    return numerator / denominator;
}

int main() {
    double num = 10.0;
    double den = 0.0; // This will trigger the exception

    // PA0903: Using a combination of try and catch keywords
    try {
        std::cout << "Attempting to divide " << num << " by " << den << "..." << std::endl;
        
        // This line calls the function that throws an exception
        double result = divide(num, den); 
        
        // This line will be skipped because the line above throws an exception
        std::cout << "Result: " << result << std::endl; 
    }
    // PA0902: Catching the exception
    catch (const std::runtime_error& e) {
        // e.what() extracts the error message passed during the "throw"
        std::cerr << "Caught an exception: " << e.what() << std::endl;
    }

    std::cout << "Program continues running safely after the catch block." << std::endl;

    return 0;
}