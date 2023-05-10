#include <iostream>

using namespace std;

int main() {
    string text = "EPLE";
    int value;
    char letter;

    cout << text << endl;
    cout << "Select value 0-3: ";
    cin >> value;
    cout << "Write a letter to change the value with: ";
    cin >> letter;


    text[1] = letter;

    cout << text << endl;

}
