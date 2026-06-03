#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Parent Class (Encapsulation)
class Vehicle
{
protected:
    string brand;
    int year;

public:
    Vehicle(string b, int y)
    {
        brand = b;
        year = y;
    }

    // Virtual function for Polymorphism
    virtual void displayInfo()
    {
        cout << "Brand: " << brand
             << ", Year: " << year << endl;
    }

    virtual ~Vehicle() {}
};

// Child Class 1 (Inheritance)
class Car : public Vehicle
{
private:
    int numberOfDoors;

public:
    Car(string b, int y, int doors)
        : Vehicle(b, y)
    {
        numberOfDoors = doors;
    }

    void displayInfo() override
    {
        cout << "Car -> Brand: " << brand
             << ", Year: " << year
             << ", Doors: " << numberOfDoors
             << endl;
    }
};

// Child Class 2 (Inheritance)
class Motorcycle : public Vehicle
{
private:
    bool hasSidecar;

public:
    Motorcycle(string b, int y, bool sidecar)
        : Vehicle(b, y)
    {
        hasSidecar = sidecar;
    }

    void displayInfo() override
    {
        cout << "Motorcycle -> Brand: " << brand
             << ", Year: " << year
             << ", Sidecar: "
             << (hasSidecar ? "Yes" : "No")
             << endl;
    }
};

// Aggregation Class (Has-A Relationship)
class Garage
{
private:
    vector<Vehicle *> vehicles;

public:
    void addVehicle(Vehicle *v)
    {
        vehicles.push_back(v);
    }

    void showVehicles()
    {
        cout << "\nVehicles in Garage:\n";
        for (Vehicle *v : vehicles)
        {
            v->displayInfo(); // Polymorphism
        }
    }
};

int main()
{

    // PA0202 - Object Instantiation
    Car car1("Toyota", 2022, 4);
    Motorcycle bike1("Honda", 2021, false);

    // PA0204 - Aggregation
    Garage garage;

    garage.addVehicle(&car1);
    garage.addVehicle(&bike1);

    // Display all vehicles
    garage.showVehicles();

    return 0;
}