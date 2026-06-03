#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
protected:
    string brand;
    int speed;

public:
    // Constructor
    Vehicle(string b, int s)
    {
        brand = b;
        speed = s;
    }

    // Display Function
    virtual void display()
    {
        cout << "Brand: " << brand << endl;
        cout << "Speed: " << speed << " km/h" << endl;
    }

    // Virtual function for overriding
    virtual void move()
    {
        cout << "Vehicle is moving." << endl;
    }

    // State of object (PA0111)
    void accelerate(int increase)
    {
        speed += increase;
    }

    int getSpeed()
    {
        return speed;
    }
};

class Car : public Vehicle
{
private:
    int numberOfDoors; // unique property

public:
    Car(string b, int s, int doors)
        : Vehicle(b, s)
    {
        numberOfDoors = doors;
    }

    // Override function
    void move() override
    {
        cout << "Car is driving on the road." << endl;
    }

    void display() override
    {
        Vehicle::display();
        cout << "Number of Doors: " << numberOfDoors << endl;
    }
};

class Motorcycle : public Vehicle
{
private:
    bool hasSideCar; // unique property

public:
    Motorcycle(string b, int s, bool sidecar)
        : Vehicle(b, s)
    {
        hasSideCar = sidecar;
    }

    // Override function
    void move() override
    {
        cout << "Motorcycle is riding." << endl;
    }

    void display() override
    {
        Vehicle::display();
        cout << "Has Side Car: "
             << (hasSideCar ? "Yes" : "No") << endl;
    }
};

class Rectangle
{
private:
    double length;
    double width;

public:
    Rectangle(double l, double w)
    {
        length = l;
        width = w;
    }

    double calculateArea()
    {
        return length * width;
    }
};

class Book
{
private:
    string title;
    string author;
    double price;

public:
    Book(string t, string a, double p)
    {
        title = t;
        author = a;
        price = p;
    }

    void displayBook()
    {
        cout << "\nTitle : " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price : $" << price << endl;
    }
};

int main()
{
    cout << "======================================" << endl;
    cout << "PA0101 - Parent and Child Classes" << endl;
    cout << "======================================" << endl;

    // PA0105 Constructor invocation
    Car car1("Toyota", 120, 4);
    Motorcycle bike1("Yamaha", 100, false);

    // PA0103 Set property values through constructors
    cout << "\nCar Details:" << endl;
    car1.display();

    cout << "\nMotorcycle Details:" << endl;
    bike1.display();

    // PA0108 Inheritance and Overriding
    cout << "\nInheritance and Overriding:" << endl;
    car1.move();
    bike1.move();

    // PA0111 Object State with Speed Variable
    cout << "\nObject State Demonstration:" << endl;
    cout << "Current Car Speed: "
         << car1.getSpeed() << " km/h" << endl;

    car1.accelerate(20);

    cout << "Speed after acceleration: "
         << car1.getSpeed() << " km/h" << endl;

    // PA0107 Rectangle Class
    cout << "\n======================================" << endl;
    cout << "Rectangle Area Calculation" << endl;
    cout << "======================================" << endl;

    Rectangle rect(10, 5);

    cout << "Length = 10" << endl;
    cout << "Width  = 5" << endl;
    cout << "Area   = "
         << rect.calculateArea() << endl;

    // PA0109 Create a C++ Class and Objects
    cout << "\n======================================" << endl;
    cout << "Book Class Objects" << endl;
    cout << "======================================" << endl;

    // PA0110 Three instances of Book
    Book book1("C++ Programming", "Bjarne Stroustrup", 45.99);
    Book book2("Object-Oriented Design", "Robert Martin", 39.99);
    Book book3("Data Structures", "Mark Allen Weiss", 29.99);

    book1.displayBook();
    book2.displayBook();
    book3.displayBook();

    return 0;
} 