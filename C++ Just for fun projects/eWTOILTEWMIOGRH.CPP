#include <iostream>
#include <string>

using namespace std;

int main() {
    string line = string(50, '-');
    struct info {
        string FirstName;
        string LastName;
        string Business;
        int Age;
        int PhoneNumber;
    } user;


    cout << "Business: ";
    getline(cin, user.Business);
    cout << "First and middle name: ";
    getline(cin, user.FirstName);
    cout << "Last name: ";
    getline(cin, user.LastName);
    cout << "Age: ";
    cin >> user.Age;
    cout << "Phone number: ";
    cin >> user.PhoneNumber;
    cout << line << endl;
    cout << "Memory Addresses " << endl;
    cout << &user.FirstName << " " << &user.LastName << " " << &user.Business << " " << &user.Age << " " << &user.PhoneNumber << endl;
    cout << line << endl;
    cout << "Business: " << user.Business << "\n" << "Full Name: " << user.FirstName << " " << user.LastName << "\nAge: " << user.Age << ". Phone Number: " << user.PhoneNumber << endl;
    cout << line << endl;
    return 0;
}
