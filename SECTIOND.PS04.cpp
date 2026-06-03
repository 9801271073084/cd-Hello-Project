#include <iostream>
using namespace std;

int main() 
{
    double num1, num2, result;
    char operation;

    // Display calculator menu
    cout << "Simple Calculator" << endl;
    cout << "Operations: +  -  *  /" << endl;

    // User input
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operation: ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    // Perform calculation
    switch(operation)
    {
        case '+':
            result = num1 + num2;
            cout << "Answer = " << result << endl;
            break;

        case '-':
            result = num1 - num2;
            cout << "Answer = " << result << endl;
            break;

        case '*':
            result = num1 * num2;
            cout << "Answer = " << result << endl;
            break;

        case '/':
            if(num2 == 0)
            {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            else
            {
                result = num1 / num2;
                cout << "Answer = " << result << endl;
            }
            break;

        default:
            cout << "Invalid operation entered." << endl;
    }

    return 0;
}