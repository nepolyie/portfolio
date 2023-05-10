#include <iostream>
#include <string>

using namespace std;


int main() {
    string sentence;


    cout << "Enter sentence: ";
    getline(cin, sentence);
    cout << "You wrote: " << sentence << endl;
}
