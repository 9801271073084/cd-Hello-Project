#include <iostream>

int main() {
    int size = 5;

    // PA1001: Create a dynamic array using the 'new' keyword
    // This allocates memory on the heap instead of the stack, allowing for dynamic sizing
    int* dynamicArray = new int[size];

    // PA1002: Initialize dynamically allocated arrays
    // We populate the array with values (in this case, multiples of 10)
    for (int i = 0; i < size; i++) {
        dynamicArray[i] = (i + 1) * 10;
    }

    // Displaying the initialized values to the console
    std::cout << "Dynamically allocated array elements:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << "Element at index " << i << ": " << dynamicArray[i] << std::endl;
    }

    // PA1003: Delete a dynamic array from the computer memory
    // CRITICAL: Always use delete[] with brackets when freeing dynamically allocated arrays
    // This prevents memory leaks by releasing the heap memory back to the system
    delete[] dynamicArray;

    // Optional: Set pointer to nullptr to avoid a "dangling pointer"
    dynamicArray = nullptr; 

   
    return 0;
}