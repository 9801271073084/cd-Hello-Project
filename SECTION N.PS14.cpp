#include <iostream>
#include <string>

using namespace std;

// PA1401 - Create a C++ structure
struct Student
{
    int studentID;
    string name;
    float marks;
};

// PA1406 - Function that accepts a struct as argument
void displayStudent(Student s)
{
    cout << "\n--- Student Details ---" << endl;
    cout << "Student ID : " << s.studentID << endl;
    cout << "Name       : " << s.name << endl;
    cout << "Marks      : " << s.marks << endl;
}

int main()
{
    // PA1402 & PA1403
    // Create and initialise struct instances
    Student student1 = {101, "Alice", 85.5};
    Student student2 = {102, "Bob", 90.0};

    // PA1404 - Access structure members
    cout << "Accessing Structure Members" << endl;
    cout << "Student 1 Name: " << student1.name << endl;
    cout << "Student 2 Marks: " << student2.marks << endl;

    // PA1405 - Create a pointer to a structure
    Student *ptrStudent;

    // Pointing to student1
    ptrStudent = &student1;

    cout << "\nUsing Structure Pointer" << endl;
    cout << "Student ID using pointer: " << ptrStudent->studentID << endl;
    cout << "Student Name using pointer: " << ptrStudent->name << endl;

    // PA1406 - Pass struct to function
    displayStudent(student1);
    displayStudent(student2);

    // PA1407 - Combine data items with struct
    // Different data types combined in one structure
    cout << "\nStructure combines:" << endl;
    cout << "- Integer (studentID)" << endl;
    cout << "- String (name)" << endl;
    cout << "- Float (marks)" << endl;

    return 0;
}