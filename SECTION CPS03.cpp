#include <iostream>
#include <string>
using namespace std;

// PA0301: Function Template Example 1
// This function template returns the bigger value.
template <typename T>
T getMax(T num1, T num2) {
    return (num1 > num2) ? num1 : num2;
}

// PA0301: Function Template Example 2
// This function template displays any data type.
template <typename T>
void displayValue(T value) {
    cout << "Value: " << value << endl;
}

// PA0302: Class Template Example
// This class template can store and display any data type.
template <typename T>
class Box {
private:
    T item;

public:
    Box(T value) {
        item = value;
    }

    void showItem() {
        cout << "Box contains: " << item << endl;
    }
};

int main() {
    cout << "C++ Templates Program" << endl;
    cout << "---------------------" << endl;

    // Function template with integers
    cout << "Maximum integer: " << getMax(10, 20) << endl;

    // Function template with doubles
    cout << "Maximum double: " << getMax(5.5, 2.3) << endl;

    // Function template displaying different data types
    displayValue(100);
    displayValue(45.67);
    displayValue(string("Hello Templates"));

    // Class template with int
    Box<int> intBox(50);
    intBox.showItem();

    // Class template with string
    Box<string> stringBox("Learning C++ Templates");
    stringBox.showItem();

    return 0;
}