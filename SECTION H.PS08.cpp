#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    vector<int> numbers = {5, 2, 8, 1, 9, 2, 7, 4, 6, 3};

    cout << "Original Vector: ";
    for (int n : numbers)
        cout << n << " ";
    cout << endl;

    // ==================================================
    // Non-modifying Sequence Operations
    // ==================================================
    cout << "\n--- Non-Modifying Sequence Operations ---" << endl;

    auto found = find_if(numbers.begin(), numbers.end(),
                         [](int x) { return x > 7; });

    if (found != numbers.end())
        cout << "First element > 7: " << *found << endl;

    int countTwos = count(numbers.begin(), numbers.end(), 2);
    cout << "Number of 2's: " << countTwos << endl;

    vector<int> pattern = {7, 4};
    auto searchResult = search(numbers.begin(), numbers.end(),
                               pattern.begin(), pattern.end());

    if (searchResult != numbers.end())
        cout << "Pattern {7,4} found." << endl;

    // ==================================================
    // Modifying Sequence Operations
    // ==================================================
    cout << "\n--- Modifying Sequence Operations ---" << endl;

    replace(numbers.begin(), numbers.end(), 2, 20);

    cout << "After replace(2 -> 20): ";
    for (int n : numbers)
        cout << n << " ";
    cout << endl;

    numbers.erase(remove(numbers.begin(), numbers.end(), 20),
                  numbers.end());

    cout << "After remove(20): ";
    for (int n : numbers)
        cout << n << " ";
    cout << endl;

    reverse(numbers.begin(), numbers.end());

    cout << "After reverse(): ";
    for (int n : numbers)
        cout << n << " ";
    cout << endl;

    // ==================================================
    // Partitioning Operations
    // ==================================================
    cout << "\n--- Partitioning Operations ---" << endl;

    partition(numbers.begin(), numbers.end(),
              [](int x) { return x % 2 == 0; });

    cout << "Even numbers first: ";
    for (int n : numbers)
        cout << n << " ";
    cout << endl;

    // ==================================================
    // Sorting Operations
    // ==================================================
    cout << "\n--- Sorting Operations ---" << endl;

    sort(numbers.begin(), numbers.end());

    cout << "After sort(): ";
    for (int n : numbers)
        cout << n << " ";
    cout << endl;

    stable_sort(numbers.begin(), numbers.end());

    cout << "After stable_sort(): ";
    for (int n : numbers)
        cout << n << " ";
    cout << endl;

    vector<int> partialVec = {9, 5, 8, 1, 4, 7};

    partial_sort(partialVec.begin(),
                 partialVec.begin() + 3,
                 partialVec.end());

    cout << "After partial_sort (first 3 sorted): ";
    for (int n : partialVec)
        cout << n << " ";
    cout << endl;

    // ==================================================
    // Binary Search Operations
    // ==================================================
    cout << "\n--- Binary Search Operations ---" << endl;

    auto lb = lower_bound(numbers.begin(), numbers.end(), 5);
    auto ub = upper_bound(numbers.begin(), numbers.end(), 5);

    cout << "lower_bound(5) index: "
         << distance(numbers.begin(), lb) << endl;

    cout << "upper_bound(5) index: "
         << distance(numbers.begin(), ub) << endl;

    // ==================================================
    // Merge Operation
    // ==================================================
    cout << "\n--- Merge Operation ---" << endl;

    vector<int> vec1 = {1, 3, 5};
    vector<int> vec2 = {2, 4, 6};
    vector<int> merged(6);

    merge(vec1.begin(), vec1.end(),
          vec2.begin(), vec2.end(),
          merged.begin());

    cout << "Merged Vector: ";
    for (int n : merged)
        cout << n << " ";
    cout << endl;

    // ==================================================
    // Heap Operations
    // ==================================================
    cout << "\n--- Heap Operations ---" << endl;

    vector<int> heapVec = {10, 30, 20, 5, 15};

    make_heap(heapVec.begin(), heapVec.end());

    cout << "Max Heap Top: " << heapVec.front() << endl;

    heapVec.push_back(40);
    push_heap(heapVec.begin(), heapVec.end());

    cout << "After push_heap(40), Heap Top: "
         << heapVec.front() << endl;

    // ==================================================
    // Minimum / Maximum
    // ==================================================
    cout << "\n--- Minimum / Maximum ---" << endl;

    cout << "min(10, 20) = " << min(10, 20) << endl;
    cout << "max(10, 20) = " << max(10, 20) << endl;

    return 0;
}