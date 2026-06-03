#include <iostream>
#include <string>

// ============================================================================
// PA0801: Define values and declare an enumerated type
// ============================================================================
// We define an enum for 'TrafficLight' colors to represent distinct states.
enum TrafficLight {
    RED,    // Automatically assigned 0
    YELLOW, // Automatically assigned 1
    GREEN   // Automatically assigned 2
};

// Helper function to turn the enum into a readable string for output
std::string getLightColor(TrafficLight light) {
    switch (light) {
        case RED:    return "Red";
        case YELLOW: return "Yellow";
        case GREEN:  return "Green";
        default:     return "Unknown";
    }
}

// ============================================================================
// PA0803: Write a function that swaps two values
// ============================================================================
// Using reference parameters allows us to modify the actual variables 
// passed into the function from main.
void swapValues(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// ============================================================================
// PA0804: Return a reference type variable
// ============================================================================
// This function accepts an array and returns a reference to the largest element.
// Note: Never return a reference to a local variable that goes out of scope!
int& findMaximum(int arr[], int size) {
    int maxIndex = 0;
    for (int i = 1; i < size; ++i) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    // Returning a reference to the actual array element inside main
    return arr[maxIndex];
}

int main() {
    std::cout << "--- PA0801: Enumerated Type ---" << std::endl;
    // Declaring a variable of our custom enum type and assigning a value
    TrafficLight currentLight = RED;
    std::cout << "The current traffic light is: " << getLightColor(currentLight) << " (" << currentLight << ")" << std::endl;
    
    // Changing the enum value
    currentLight = GREEN;
    std::cout << "The light changes to: " << getLightColor(currentLight) << " (" << currentLight << ")" << std::endl;
    std::cout << std::endl;


    std::cout << "--- PA0802: Reference Variables ---" << std::endl;
    int originalValue = 42;
    // Declaring a reference variable. It acts as an alias to 'originalValue'.
    int& referenceValue = originalValue; 

    std::cout << "Original Value: " << originalValue << std::endl;
    std::cout << "Reference Value: " << referenceValue << std::endl;

    // Modifying the reference variable changes the original variable
    referenceValue = 100;
    std::cout << "After modifying referenceValue to 100:" << std::endl;
    std::cout << "Original Value: " << originalValue << std::endl;
    std::cout << std::endl;


    std::cout << "--- PA0803: Swap Function Using References ---" << std::endl;
    int x = 5;
    int y = 20;
    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
    
    // Call the swap function
    swapValues(x, y);
    std::cout << "After swap:  x = " << x << ", y = " << y << std::endl;
    std::cout << std::endl;


    std::cout << "--- PA0804: Return a Reference Type ---" << std::endl;
    int scores[] = {45, 78, 99, 12, 83};
    int numScores = 5;

    std::cout << "Scores array: ";
    for(int i = 0; i < numScores; ++i) {
        std::cout << scores[i] << " ";
    }
    std::cout << std::endl;

    // findMaximum returns a reference to the actual element inside the scores array.
    // By assigning it to an int&, we can directly modify that element in the array.
    int& highestScore = findMaximum(scores, numScores);
    std::cout << "Highest score found: " << highestScore << std::endl;

    // Change the value through the returned reference
    highestScore = 100; 
    std::cout << "Modified highest score to 100 via its reference." << std::endl;

    // Verify the change in the original array
    std::cout << "Updated scores array: ";
    for(int i = 0; i < numScores; ++i) {
        std::cout << scores[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}