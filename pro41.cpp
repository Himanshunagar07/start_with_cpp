#include <iostream>
#include <array>    // Required for std::array
#include <algorithm> // For sort, max_element, etc.
using namespace std;

int main() {
    // Declare and initialize an array of 5 integers
    array<int, 5> arr = {5, 2, 9, 1, 3};

    // Display elements using range-based for loop
    cout << "Array elements: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    // Accessing elements
    cout << "First element (arr[0]): " << arr[0] << endl;
    cout << "Last element (arr[4]): " << arr[4] << endl;

    // Using STL functions
    cout << "Size of array: " << arr.size() << endl;
    cout << "Front element: " << arr.front() << endl;
    cout << "Back element: " << arr.back() << endl;

    // Sorting the array
    sort(arr.begin(), arr.end());

    cout << "Sorted array: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}