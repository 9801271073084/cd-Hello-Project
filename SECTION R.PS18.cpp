#include <iostream>
#include <cmath> // For built-in functions like sqrt() and pow()
using namespace std;

// ================= FUNCTION PROTOTYPES =================
// PA1803: Function declaration/prototype
void displayMessage();
int addNumbers(int num1, int num2);
double calculateSquareRoot(double number);

int main()
{
    // ================= BUILT-IN FUNCTIONS =================
    // PA1801: Invoke built-in functions

    double number = 25.0;

    cout << "Using Built-in Functions" << endl;
    cout << "Square root of " << number << " = "
         << sqrt(number) << endl;

    cout << "2 raised to power 3 = "
         << pow(2, 3) << endl;

    cout << endl;

    // ================= USER-DEFINED FUNCTIONS =================
    // PA1802 & PA1804: Call user-defined functions

    displayMessage();

    // ================= PASSING ARGUMENTS =================
    // PA1805: Pass arguments to functions

    int result = addNumbers(10, 20);

    cout << "Sum = " << result << endl;

    double root = calculateSquareRoot(49);

    cout << "Square root from user-defined function = "
         << root << endl;

    return 0;
}

// ================= FUNCTION DEFINITIONS =================

// User-defined function with no arguments
void displayMessage()
{
    cout << "Welcome to Functions in C++!" << endl;
}

// User-defined function with arguments
int addNumbers(int num1, int num2)
{
    return num1 + num2;
}

// User-defined function using built-in function
double calculateSquareRoot(double number)
{
    return sqrt(number);
}
