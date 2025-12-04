#include <iostream>
#include <sstream>   // Required for stringstream
#include <string>
using namespace std;

int main() {
    string data = "101 John 89.5";

    // Create a stringstream object with input data
    stringstream ss(data);

    int id;
    string name;
    float score;

    // Extract data from the stringstream
    ss >> id >> name >> score;

    // Display extracted values
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Score: " << score << endl;

    // Convert int to string using stringstream
    stringstream convert;
    convert << id;
    string idStr = convert.str();

    cout << "ID as string: " << idStr << endl;

    return 0;
}