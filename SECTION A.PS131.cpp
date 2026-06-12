#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;

    cout << "Enter a sentence: ";
    getline(cin, text);

    cout << "You entered: " << text << endl;

    return 0;
}