#include <iostream>

using namespace std;

int main() {
    int choice;

    cout << "=== Coffee Shop Menu ===" << endl;
    cout << "1. Espresso" << endl;
    cout << "2. Cappuccino" << endl;
    cout << "3. Latte" << endl;
    cout << "4. Americano" << endl;
    cout << "Enter the number of your choice (1-4): ";
    
    cin >> choice;

    cout << "------------------------" << endl;

    // The switch statement evaluates the 'choice' variable
    switch (choice) {
        case 1:
            cout << "You selected an Espresso. That will be $3.00." << endl;
            break; // Exits the switch block
            
        case 2:
            cout << "You selected a Cappuccino. That will be $4.50." << endl;
            break;
            
        case 3:
            cout << "You selected a Latte. That will be $4.00." << endl;
            break;
            
        case 4:
            cout << "You selected an Americano. That will be $3.50." << endl;
            break;
            
        default:
            // This acts as a catch-all if the variable doesn't match any case above
            cout << "Error: Invalid selection. Please choose a number between 1 and 4." << endl;
            break;
    }

    return 0;
}