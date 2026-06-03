#include <iostream>
#include <algorithm> // For std::sort, std::equal, std::copy, std::fill, std::minmax_element
#include <string>

int main() {
    
    std::cout << "--- PA0601 & PA0602: Declaration & Initialisation ---\n";
    const int CAPACITY = 10; // Maximum capacity of our array
    int numbers[CAPACITY] = {45, 12, 89, 7, 23}; // Initialised with 5 elements, rest are 0
    int currentSize = 5; // Tracks how many elements are actually active

    std::cout << "Initial array elements: ";
    for (int i = 0; i < currentSize; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << "\n\n";

    std::cout << "--- PA0603: Use a pointer to an array ---\n";
    int* ptr = numbers; // Points to the first element of the array
    std::cout << "Value at pointer (first element): " << *ptr << "\n";
    std::cout << "Value at (pointer + 2): " << *(ptr + 2) << " (Third element)\n\n";

    std::cout << "--- PA0604 & PA0605: Accessing Indexes & Values ---\n";
    std::cout << "Element at index 0: " << numbers[0] << "\n";
    std::cout << "Element at index 3: " << numbers[3] << "\n\n";

    std::cout << "--- PA0606: Add elements to an array ---\n";
    if (currentSize < CAPACITY) {
        int newValue = 99;
        numbers[currentSize] = newValue; // Place at the next available slot
        currentSize++; // Increase active count
        std::cout << "Added " << newValue << ". New array: ";
        for (int i = 0; i < currentSize; i++) std::cout << numbers[i] << " ";
        std::cout << "\n\n";
    }

    std::cout << "--- PA0608: Delete elements from an array ---\n";
    // Deleting the element at index 1 (value 12) by shifting left
    int targetIndex = 1;
    std::cout << "Deleting element at index " << targetIndex << " (" << numbers[targetIndex] << ")...\n";
    for (int i = targetIndex; i < currentSize - 1; i++) {
        numbers[i] = numbers[i + 1];
    }
    currentSize--; // Decrease active count
    std::cout << "Array after deletion: ";
    for (int i = 0; i < currentSize; i++) std::cout << numbers[i] << " ";
    std::cout << "\n\n";

    std::cout << "--- PA0609: Find min and max values ---\n";
    // Using std::minmax_element from <algorithm>
    auto result = std::minmax_element(numbers, numbers + currentSize);
    std::cout << "Minimum value: " << *result.first << "\n";
    std::cout << "Maximum value: " << *result.second << "\n\n";

    std::cout << "--- PA0610: Copy an array ---\n";
    int bkpArray[CAPACITY];
    std::copy(numbers, numbers + currentSize, bkpArray);
    std::cout << "Copied array (bkpArray): ";
    for (int i = 0; i < currentSize; i++) std::cout << bkpArray[i] << " ";
    std::cout << "\n\n";

    std::cout << "--- PA0613: Check if arrays are equal ---\n";
    bool isEqual = std::equal(numbers, numbers + currentSize, bkpArray);
    std::cout << "Are 'numbers' and 'bkpArray' equal? " << (isEqual ? "Yes" : "No") << "\n\n";

    std::cout << "--- PA0611: Sort arrays ---\n";
    std::sort(numbers, numbers + currentSize);
    std::cout << "Sorted array: ";
    for (int i = 0; i < currentSize; i++) std::cout << numbers[i] << " ";
    std::cout << "\n\n";

    std::cout << "--- PA0614: Search arrays ---\n";
    int searchTarget = 23;
    // Since it's sorted, we can use std::binary_search, or just a simple linear search loop
    bool found = std::binary_search(numbers, numbers + currentSize, searchTarget);
    std::cout << "Is " << searchTarget << " in the array? " << (found ? "Yes" : "No") << "\n\n";

    std::cout << "--- PA0615: Fill arrays ---\n";
    std::cout << "Filling the active array with the number 5...\n";
    std::fill(numbers, numbers + currentSize, 5);
    std::cout << "Array after fill: ";
    for (int i = 0; i < currentSize; i++) std::cout << numbers[i] << " ";
    std::cout << "\n";

    return 0;
}