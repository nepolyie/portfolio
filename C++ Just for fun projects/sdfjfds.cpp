#include <iostream>
#include <string>

using namespace std;

int main() {
    string line = string(40, '-');
    struct Date {
        string Month[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
        int Day[31] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31};
        int Year[24] = {2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009,2010, 2011, 2012, 2013, 2014, 2015, 2016, 2017, 2018, 2019, 2020, 2021, 2022, 2023};
    } date;
    struct userInput {
        int X;
        int Y;
        int Z;
        string Message;
    } userInput;
    cout << "Month (1-12): ";
    cin >> userInput.Y;
    if (userInput.Y > 12 or userInput.Y < 1) {
        cout << "Invalid month!";
        return 0;
    }
    cout << "Year (0-23):";
    cin >> userInput.Z;
    if (userInput.Z > 23 or userInput.Z < 0) {
        cout << "Invalid year!";
        return 0;
    }
    cout << "Day (1-31): ";
    cin >> userInput.X;
    if (userInput.X > 31) {
        cout << "This day does not exist.";
        return 0;
    }
    cout << "Message: ";
    getline(cin, userInput.Message);
    cout << line << endl;
    cout << "Current date: " << date.Month[userInput.Y] << " " << date.Day[userInput.X] << ", " << date.Year[userInput.Z] << ". \n Your \"so called\" message: " << userInput.Message << ".";
    return 0;
}
