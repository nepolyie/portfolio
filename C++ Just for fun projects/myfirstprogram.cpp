#include <iostream>
#include <string>

using namespace std;

int main() {
    struct input {
        string one;
        string two;
        double three;
        string four;
        int five;
    } uI;

    getline(cin, uI.one);
    getline(cin, uI.two);
    cin >> uI.three;
    getline(cin, uI.four);
    cin >> uI.five;

    cout << uI.one << uI.two << uI.three << uI.four << uI.five <<endl;
    return 0;
}
