#include <iostream>
#include <string>
using namespace std;
int main() {
    int i = 1;
    string r = string(90,'&');
    while (i < 10) {
        cout << r << endl;
        cout << "  " << r << endl;
    }
}
