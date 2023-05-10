#include <iostream>
#include <string>

using namespace std;

int main() {
    string line = string(23, '-');
    string userInput;
    cout << "Write something: ";
    getline(cin, userInput);
    cout << line << endl;
    cout << userInput << endl;
    cout << line << endl;
    return 0;
}
