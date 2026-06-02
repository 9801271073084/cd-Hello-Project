#include <iostream>
using namespace std;

// PA0201: Overloaded functions
void show(int number) {
    cout << "Integer value: " << number << endl;
}

void show(string text) {
    cout << "String value: " << text << endl;
}

// Class used for operator overloading
class Number {
public:
    int value;

    Number(int v) {
        value = v;
    }

    // PA0202: Operator overloading
    Number operator+(Number obj) {
        return Number(value + obj.value);
    }

    void display() {
        cout << "Number value: " << value << endl;
    }
};

// Base class
class Animal {
public:
    // PA0204: Declare a virtual function
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }

    // PA0205: Destructor
    virtual ~Animal() {
        cout << "Animal destructor called" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    // PA0203: Override the base function
    void sound() override {
        cout << "Dog barks" << endl;
    }

    ~Dog() {
        cout << "Dog destructor called" << endl;
    }
};

int main() {
    cout << "PA0201: Invoke an overloaded function" << endl;
    show(10);
    show("Hello C++");

    cout << endl;

    cout << "PA0202: Invoke operator overloading" << endl;
    Number n1(20);
    Number n2(30);
    Number n3 = n1 + n2;
    n3.display();

    cout << endl;

    cout << "PA0203 and PA0204: Override and call a virtual function" << endl;
    Animal* myAnimal = new Dog();
    myAnimal->sound();

    cout << endl;

    cout << "PA0205: Call a destructor" << endl;
    delete myAnimal;

    return 0;
}