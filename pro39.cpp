#include <iostream>
#include <stack>  // Required for std::stack
using namespace std;

int main() {
    // Declare a stack of integers
    stack<int> s;

    // Push elements onto the stack
    s.push(10);
    s.push(20);
    s.push(30);

    // Display and pop elements from the stack
    cout << "Stack elements (from top to bottom):" << endl;
    while (!s.empty()) {
        cout << s.top() << endl;  // Access top element
        s.pop();                  // Remove top element
    }

    return 0;
}