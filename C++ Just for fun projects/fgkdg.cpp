#include <iostream>

using std::cout;
using std::cin;

int main() {
    std::string name;
    getline(cin, name);
    cout << "Hello, " << name << std::endl;
}
