#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // Declare a map with string as key and int as value
    map<string, int> studentMarks;

    // Insert elements using subscript operator
    studentMarks["Alice"] = 85;
    studentMarks["Bob"] = 90;
    studentMarks["Charlie"] = 78;

    // Insert using insert() method
    studentMarks.insert(make_pair("David", 88));

    // Display all elements
    cout << "Student Marks:\n";
    for (const auto& pair : studentMarks) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Search for a key
    string name = "Bob";
    if (studentMarks.find(name) != studentMarks.end()) {
        cout << "\n" << name << "'s marks: " << studentMarks[name] << endl;
    } else {
        cout << "\n" << name << " not found in the map." << endl;
    }

    return 0;
}