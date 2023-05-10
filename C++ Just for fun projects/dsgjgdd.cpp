#include <iostream>
#include <string>

using namespace std;

int main() {
    int numInput;
    char charInput;
    cout << "Enter value between 1-100 (characters): ";
    cin >> numInput;
    cout << "Enter a single character to loop: ";
    cin >> charInput;
    string line(numInput, charInput);
    int loopInput;
    cout << "Enter how many times to loop (0-500): ";
    cin >> loopInput;

    if (numInput >= 1 && numInput <= 100 && loopInput >= 0 && loopInput <= 500) {
        for (int i = 0; i < loopInput; ++i) {
            cout << line << endl;
        }
    }
    else {
        cout << "Invalid input. Please enter a value between 1-100 for the first input and between 0-500 for the second input." << endl;
    }
    return 0;
}
