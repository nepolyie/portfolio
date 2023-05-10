#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "a: " << endl;
    cin >> num;
    if (num > 10) {
        cout << "number higher than 10" << endl;
    } else {
        cout << "no";
    }
    return 0;
}
