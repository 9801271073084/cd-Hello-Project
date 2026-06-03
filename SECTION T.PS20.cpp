#include <iostream>
#include <vector>

using namespace std;

// Function to calculate average
double calculateAverage(vector<int> numbers)
{
    int total = 0;

    // Loop through all numbers
    for (int i = 0; i < numbers.size(); i++)
    {
        total = total + numbers[i];

        // Debugging output
        cout << "Current number: " << numbers[i] << endl;
        cout << "Running total: " << total << endl;
    }

    // Check if vector is empty
    if (numbers.size() == 0)
    {
        cout << "Error: Cannot divide by zero." << endl;
        return 0;
    }

    double average = (double)total / numbers.size();

    return average;
}

int main()
{
    vector<int> marks;

    int choice;
    int mark;

    cout << "===== DEBUGGING PROGRAM EXAMPLE =====" << endl;

    // Input section
    cout << "How many marks do you want to enter? ";
    cin >> choice;

    // Program flow through loop
    for (int i = 0; i < choice; i++)
    {
        cout << "Enter mark " << i + 1 << ": ";
        cin >> mark;

        // Check for invalid mark
        if (mark < 0)
        {
            cout << "Invalid mark detected." << endl;
            cout << "Debug: Negative values are not allowed." << endl;
        }
        else
        {
            marks.push_back(mark);
        }
    }

    // Display entered marks
    cout << "\nMarks entered:" << endl;

    for (int i = 0; i < marks.size(); i++)
    {
        cout << marks[i] << " ";
    }

    cout << endl;

    // Calculate average
    double average = calculateAverage(marks);

    // Output result
    cout << "\nAverage mark = " << average << endl;


    return 0;
}