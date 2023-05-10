#include <iostream>

using namespace std;

int main() {
    int j;
    cout << "Hello World!, shall we loop it?" << endl;
    cout << "Hell yeah we should! How many times should we loop it for?: ";
    cin >> j;
    for(int i = 1; i <= j; i++) {
        cout << "Val: " << i << ". Text: " << "Hello World!" << endl;
    }
    return 0;
}
