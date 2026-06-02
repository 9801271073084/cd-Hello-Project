#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    // PA0701: Insert/Create a map
    map<int, string> students;

    // PA0702: Insert elements into the map
    students.insert(pair<int, string>(101, "Alice"));
    students.insert(pair<int, string>(102, "Bob"));
    students.insert(pair<int, string>(103, "Charlie"));
    students[104] = "David";

    cout << "Initial Map Elements:" << endl;

    // PA0705: Iterate over map elements
    for (map<int, string>::iterator it = students.begin();
         it != students.end(); ++it)
    {
        cout << "ID: " << it->first
             << ", Name: " << it->second << endl;
    }

    // PA0703: Search in a map
    int searchID = 102;

    cout << "\nSearching for Student ID " << searchID << "..." << endl;

    map<int, string>::iterator found = students.find(searchID);

    if (found != students.end())
    {
        cout << "Found: " << found->second << endl;
    }
    else
    {
        cout << "Student not found." << endl;
    }

    // PA0704: Delete an element from the map
    cout << "\nDeleting Student ID 103..." << endl;
    students.erase(103);

    cout << "\nMap After Deletion:" << endl;

    // Iterate again to display updated map
    for (map<int, string>::iterator it = students.begin();
         it != students.end(); ++it)
    {
        cout << "ID: " << it->first
             << ", Name: " << it->second << endl;
    }

    return 0;
}