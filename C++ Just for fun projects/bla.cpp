#include <iostream>

using namespace std;
string line = string("-", 60);'
main() {
    string text = " ello World!";
    cout << line << endl;
    cout << text << endl;
    cout << "Write the missing letter: ";
    cin >> text[0];

    if(text[0] == 'H') {
        cout << "Correct! The missing letter was \"H\"" << endl;
        cout << line << endl;
        cout << text;
    } else {
        cout << "Sorry, the missing letter was \"H\"";
    }
}
