#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Declare a vector of integers
    vector<int> numbers;

    // Add elements using push_back()
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    // Display elements using a range-based for loop
    cout << "Vector elements: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Insert element at specific position
    numbers.insert(numbers.begin() + 1, 15);  // Insert 15 at index 1

    // Display elements after insertion
    cout << "After insertion: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Remove last element
    numbers.pop_back();

    // Display elements after removal
    cout << "After pop_back(): ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Access elements using index
    cout << "Element at index 1: " << numbers[1] << endl;

    // Display vector size
    cout << "Vector size: " << numbers.size() << endl;

    return 0;
}
