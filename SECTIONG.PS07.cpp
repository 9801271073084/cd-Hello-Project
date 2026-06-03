#include <iostream>
using namespace std;

int main() {
    
    int row = 1;     // Control variable for the outer loop
    int col;         // Control variable for the inner loop (initialized inside)

    std::cout << "Starting the nested do-while loop grid:\n\n";

    do {
        
        col = 1; 

        
        do {
            
            std::cout << "(" << row << "," << col << ")   ";
            
            col++; // Update inner loop control variable
            
        } while (col <= 3); // Inner loop condition

        // Moving to the next line after finishing a row
        std::cout << "\n"; 
        
        row++; // Update outer loop control variable

    } while (row <= 3); // Outer loop condition

    
    return 0;
}