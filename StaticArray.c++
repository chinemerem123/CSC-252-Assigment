#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string words[10];
   
    cout << "Enter 10 strings:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Enter value for index " << i << ": ";
        getline(cin, words[i]);
    }

    cout << "\nValues in the array:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Index " << i << ": " << words[i] << endl;
    }

    return 0;
}
