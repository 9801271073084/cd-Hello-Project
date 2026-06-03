#include <iostream>
#include <list>

using namespace std;

int main()
{
    // Define a standard list of integers
    list<int> numbers = {10, 20, 30, 40, 50};

    cout << "Items in the list: ";

    // Display list items
    for (int num : numbers)
    {
        cout << num << " ";
    }

    cout << endl;

// Insert items at the back
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    // Insert item at the front
    numbers.push_front(5);

    cout << "List after insertion: ";

    for (int num : numbers)
    {
        cout << num << " ";
    }

    cout << endl;
    
    // Remove first item
    numbers.pop_front();

    // Remove last item
    numbers.pop_back();

    // Remove specific value
    numbers.remove(30);

    cout << "List after deletion: ";

    for (int num : numbers)
    {
        cout << num << " ";
    }

    cout << endl;

    return 0;
}