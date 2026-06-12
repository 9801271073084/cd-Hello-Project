#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, pos, value;

    // Input array size
    cout << "Enter the number of elements: ";
    cin >> n;

    // Input array elements
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Input position and value
    cout << "Enter the position to insert the element (1 to " << n + 1 << "): ";
    cin >> pos;

    cout << "Enter the value to insert: ";
    cin >> value;

    // Shift elements to the right
    for (int i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Insert the new value
    arr[pos - 1] = value;

    // Increase array size
    n++;

    // Display updated array
    cout << "Array after insertion:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}