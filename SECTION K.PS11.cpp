#include <iostream>

int main() {
    
    // We start with a regular integer variable.
    int myNumber = 42;
    
    std::cout << "--- PA1103: Obtaining Address ---" << std::endl;
    std::cout << "Value of myNumber: " << myNumber << std::endl;
    // The ampersand (&) is the "address-of" operator.
    std::cout << "Memory address of myNumber (&myNumber): " << &myNumber << "\n" << std::endl;

    // We declare a pointer by adding an asterisk (*) after the data type.
    // This tells the compiler that 'ptr' will hold a memory address, not a regular value.
    int* ptr; 

    // We initialize the pointer by assigning it the memory address of 'myNumber'.
    ptr = &myNumber; 

    std::cout << "--- PA1101 & PA1102: Declaring and Initializing ---" << std::endl;
    std::cout << "Value stored in pointer 'ptr' (which is the address): " << ptr << "\n" << std::endl;

    std::cout << "--- PA1104: Accessing and Modifying via Pointers ---" << std::endl;
    
    // 1. Reading the value using the dereference operator (*)
    std::cout << "Reading value using pointer (*ptr): " << *ptr << std::endl;

    // 2. Modifying the value of 'myNumber' indirectly through the pointer
    *ptr = 99; // Go to the address stored in 'ptr' and change the value there to 99.

    std::cout << "New value of myNumber (after changing it via pointer): " << myNumber << std::endl;
    std::cout << "New value read directly from pointer (*ptr): " << *ptr << std::endl;

    return 0;
}