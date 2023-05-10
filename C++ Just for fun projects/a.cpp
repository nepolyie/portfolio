#include <iostream>

using namespace std;

int main() {
    struct values {
        int one;
        int two;
        int three;
    } value;
    cin >> value.one, value.two, value.three;

    cout << value.one << value.two << value.three;


    return 0;
}
