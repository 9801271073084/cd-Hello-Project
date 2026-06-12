#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;

    cout << "Enter a string: ";
    getline(cin, name);

    cout << "You entered: " << name << endl;

    return 0;
}