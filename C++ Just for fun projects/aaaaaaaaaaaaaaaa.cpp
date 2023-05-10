#include <iostream>

using namespace std;

int main() {
    int x = 2;
    int y = 2;
    int z;
    int ran[4] = {x + y, x - y, x * y, x / y};

    cin >> z;
    cout << ran[z] << endl;

    return 0;
}
