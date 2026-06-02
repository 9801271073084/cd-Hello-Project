#include <iostream>
#include <stack>

using namespace std;

int main()
{
    // PA0601: Implement a Stack
    stack<int> numbers;

    // Push elements onto the stack
    numbers.push(10);
    numbers.push(20);
    numbers.push(30);
    numbers.push(40);

    cout << "Top element: " << numbers.top() << endl;

    cout << "\nElements removed from the stack:" << endl;

    // Pop and display elements
    while (!numbers.empty())
    {
        cout << numbers.top() << " ";
        numbers.pop();
    }

    cout << endl;

    return 0;
}