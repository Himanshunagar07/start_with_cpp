#include <iostream>
#include <sstream>  // Required for istringstream
#include <string>
using namespace std;

int main() {
    string input = "123 45.67 John";
    
    istringstream iss(input);  // Create input string stream object

    int intVal;
    double doubleVal;
    string name;

    // Extract values from the string as if using cin
    iss >> intVal >> doubleVal >> name;

    // Display the parsed values
    cout << "Integer Value: " << intVal << endl;
    cout << "Double Value: " << doubleVal << endl;
    cout << "String Value: " << name << endl;

    return 0;
}