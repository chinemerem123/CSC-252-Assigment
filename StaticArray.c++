#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare a static array of 10 strings
    string words[10];

    // Populate the array with user input
    cout << "Enter 10 strings:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Enter value for index " << i << ": ";
        getline(cin, words[i]);
    }

    // Print all values in the array
    cout << "\nValues in the array:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Index " << i << ": " << words[i] << endl;
    }

    return 0;
}
