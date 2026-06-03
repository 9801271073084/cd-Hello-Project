#include <iostream>
using namespace std;

// Create a class
class Complex
{
private:
    int real;
    int imag;

public:
    // Constructor
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    // Function to display values
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }

    // Overloading + operator
    Complex operator + (Complex c)
    {
        Complex temp;

        temp.real = real + c.real;
        temp.imag = imag + c.imag;

        return temp;
    }
};

int main()
{
    // Create objects
    Complex c1(4, 5);
    Complex c2(6, 3);

    // Add objects using overloaded +
    Complex c3 = c1 + c2;

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Sum of Complex Numbers: ";
    c3.display();

    return 0;
}