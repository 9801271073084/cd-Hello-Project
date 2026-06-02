#include <iostream>
#include <string>
using namespace std;

// PA0101: Structure with individual elements.
struct Student {
    string name;
    int age;
    double mark;
};

// PA0102: Structure used in an array.
struct Car {
    string brand;
    string model;
    int year;
};

// PA0103, PA0104, PA0105, PA0107, PA0108, PA0109:
// Class with methods, constructors, copy constructor, default values, and destructor.
class User {
private:
    int id;
    string username;

public:
    // PA0107: Constructor with default values.
    User(int userId = 0, string userName = "Guest") {
        id = userId;
        username = userName;
        cout << "User constructor called for " << username << endl;
    }

    // PA0109: Constructor calling another constructor.
    User(string userName) : User(100, userName) {
        cout << "Constructor using another constructor called." << endl;
    }

    // PA0105: Copy constructor.
    User(const User& other) {
        id = other.id;
        username = other.username;
        cout << "Copy constructor called for " << username << endl;
    }

    // PA0103: Method inside a class.
    void displayUser() {
        cout << "User ID: " << id << ", Username: " << username << endl;
    }

    // PA0108: Destructor.
    ~User() {
        cout << "Destructor called for " << username << endl;
    }
};

// PA0106: Constructor that converts an int into an Age object.
class Age {
private:
    int years;

public:
    Age(int value) {
        years = value;
    }

    void displayAge() {
        cout << "Age: " << years << " years old" << endl;
    }
};

// PA0110: Point class.
class Point {
protected:
    int x;

public:
    Point(int xValue = 0) {
        x = xValue;
    }

    void displayPoint() {
        cout << "Point x: " << x << endl;
    }
};

// PA0110: Point2D class.
class Point2D : public Point {
private:
    int y;

public:
    Point2D(int xValue = 0, int yValue = 0) : Point(xValue) {
        y = yValue;
    }

    void displayPoint2D() {
        cout << "Point2D x: " << x << ", y: " << y << endl;
    }
};

int main() {
    cout << "===== PA0101: Refer individual elements of a structure =====" << endl;
    Student student1;
    student1.name = "Sarah";
    student1.age = 20;
    student1.mark = 85.5;

    cout << "Student Name: " << student1.name << endl;
    cout << "Student Age: " << student1.age << endl;
    cout << "Student Mark: " << student1.mark << endl;

    cout << "\n===== PA0102: Array of structural types =====" << endl;
    Car cars[3] = {
        {"BMW", "X5", 1999},
        {"Ford", "Mustang", 1969},
        {"Toyota", "Corolla", 2020}
    };

    for (int i = 0; i < 3; i++) {
        cout << "Car " << i + 1 << ": "
             << cars[i].brand << " "
             << cars[i].model << " "
             << cars[i].year << endl;
    }

    cout << "\n===== PA0103, PA0104, PA0107, PA0108: Class, method, unique ID, default constructor values =====" << endl;
    User user1(1, "Admin");
    user1.displayUser();

    User defaultUser;
    defaultUser.displayUser();

    cout << "\n===== PA0105: Copy constructor =====" << endl;
    User copiedUser = user1;
    copiedUser.displayUser();

    cout << "\n===== PA0106: Constructor conversion =====" << endl;
    Age myAge = 25;
    myAge.displayAge();

    cout << "\n===== PA0109: Constructor using another constructor =====" << endl;
    User user2("Learner");
    user2.displayUser();

    cout << "\n===== PA0110: Point and Point2D classes =====" << endl;
    Point point1(10);
    point1.displayPoint();

    Point2D point2(5, 15);
    point2.displayPoint2D();

    cout << "\n===== End of program. Destructors will now be called. =====" << endl;

    return 0;
}