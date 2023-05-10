#include <iostream>

using namespace std;

int main() {
    struct myStruct {
        int A;
        int B;
        int C;
        int D;
    } math;
    cin >> math.A >> math.B;
    cout << math.A << math.B << endl;
    cin >> math.C >> math.D;
    cout << math.C << math.B << endl;
    cout << math.A << math.B << math.C << math.D << endl;
}
