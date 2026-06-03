#include <iostream>
#include <string>
using namespace std;

int main() {
    char city[] = "Mpumalanga";
    string country = "South Africa";
    string word = "Computer";
    string text = "Programming is fun!";

    cout << city << endl;
    cout << country << endl;
    cout << "Length: " << text.length() << endl;
    text.append("is fun!");
    cout << text << endl;
    cout << text.substr(0,5) << endl;
    
    return 0; 
}