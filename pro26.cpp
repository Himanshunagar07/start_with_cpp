#include <iostream>
#include <sstream>  // Required for ostringstream
#include <string>
using namespace std;

int main() {
    int age = 25;
    double score = 89.5;
    string name = "Alice";

    // Create an output string stream object
    ostringstream oss;

    // Use it like cout to build a string
    oss << "Name: " << name << ", Age: " << age << ", Score: " << score;

    // Convert stream to string
    string result = oss.str();

    // Display the result
    cout << "Formatted Output String:\n" << result << endl;

    return 0;
}