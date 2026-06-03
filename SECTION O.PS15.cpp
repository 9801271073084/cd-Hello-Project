#include <iostream>
using namespace std;

// PA1501: Declare a class
class Student
{
private:
    int studentID;
    string studentName;
    float marks;

public:
    // PA1506: Constructor to initialize objects
    Student(int id, string name, float m)
    {
        studentID = id;
        studentName = name;
        marks = m;

        cout << "Constructor called for "
             << studentName << endl;
    }

    // PA1505: Define class member function
    void displayDetails()
    {
        cout << "\nStudent ID   : " << studentID << endl;
        cout << "Student Name : " << studentName << endl;
        cout << "Marks        : " << marks << endl;
    }

    // Another member function
    void updateMarks(float newMarks)
    {
        marks = newMarks;
    }

    // PA1507: Destructor
    ~Student()
    {
        cout << "Destructor called for "
             << studentName << endl;
    }
};

int main()
{
    // PA1502: Declare class objects
    // PA1503: Create multiple objects
    Student s1(101, "John", 75.5);
    Student s2(102, "Mary", 88.0);
    Student s3(103, "David", 91.5);

    // PA1504: Access class members using member functions
    s1.displayDetails();
    s2.displayDetails();
    s3.displayDetails();

    // Updating marks
    s1.updateMarks(80.0);

    cout << "\nAfter Updating Marks:" << endl;
    s1.displayDetails();

    return 0;
}