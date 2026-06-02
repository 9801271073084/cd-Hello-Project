#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // PA0503: Initialize a vector
    vector<int> numbers = {10, 20, 30, 40, 50};

    // PA0501: Use a vector
    cout << "Vector Elements:" << endl;

    // PA0502 & PA0504: Use iterators to iterate through the vector
    vector<int>::iterator it;

    for (it = numbers.begin(); it != numbers.end(); ++it)
    {
        cout << *it << " ";
    }

    cout << endl;

    // PA0505: Use a loop to process elements in the container
    int sum = 0;

    for (size_t i = 0; i < numbers.size(); i++)
    {
        sum += numbers[i];
    }

    cout << "\nSum of Elements = " << sum << endl;

    return 0;
}