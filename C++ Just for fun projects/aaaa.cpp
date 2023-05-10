
#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

string line = string(60, '-');

int main() {
    srand(time(nullptr));
    int random = (rand() % 3) + 1;
    char grade;
    int guess;
    int difficulty;
    int i = 2;
    while(i < 3) {
        // Ask the user to choose a difficulty level
    cout << "Choose difficulty (1-3): ";
    cin >> difficulty;

    if (random == 1 && difficulty == 1) {
        int re = rand() % 3;
        int x = rand() % 10;
        int y = rand() % 10;
        cout << "Difficulty selected: " << difficulty << " - " << "Number generated for level: " << random << endl;
        cout << line << endl;
        cout << "X: " << x << endl;
        cout << "Y: " << y << endl;
        cout << "X + Y = ?" << endl;
        int sum = x + y;
        cin >> guess;

        if (guess == sum) {
            cout << line << endl;
            cout << "Correct! The answer was " << sum << "!" << endl;
            cout << line << endl;
        }
        else if (guess > 20) {
            cout << line << endl;
            cout << "Not sure if you're just stupid or very stupid, the answer cannot go over 20, the correct answer was: " << sum << endl;
            cout << line << endl;
        }
        else {
            cout << line << endl;
            cout << "That is not the correct answer." << "The correct answer was: " << sum << endl;
            cout << line << endl;
        }
    }
    else if (random == 2 && difficulty == 1) {
        int x = rand() % 30;
        int y = rand() % 30;
        cout << "Difficulty selected: " << difficulty << " - " << "Number generated for level: " << random << endl;
        cout << line << endl;
        cout << "X: " << x << endl;
        cout << "Y: " << y << endl;
        cout << "X + Y = ?" << endl;
        int sum = x + y;
        cin >> guess;
        if (guess == sum) {
            cout << line << endl;
            cout << "Correct! The answer was " << sum << "!" << endl;
            cout << line << endl;
        }
        else {
            cout << line << endl;
            cout << "That is not the correct answer." << "The correct answer was: " << sum << endl;
            cout << line << endl;
        }






    }
    else if (random == 3 && difficulty == 1) {
        int x = rand() % 10;
        int y = rand() % 10;
        int z = rand() % 10;
        cout << "Difficulty selected: " << difficulty << " - " << "Number generated for level: " << random << endl;
        cout << line << endl;
        cout << "X: " << x << endl;
        cout << "Y: " << y << endl;
        cout << "Z: " << z << endl;
        cout << "X + Y + Z = ?" << endl;
        int sum = x + y + z;
        cin >> guess;
        if (guess == sum) {
            cout << line << endl;
            cout << "Correct! The answer was " << sum << "!" << endl;
            cout << line << endl;
        }
        else {
            cout << line << endl;
            cout << "That is not the correct answer." << "The correct answer was: " << sum << endl;
            cout << line << endl;
        }
    }
    else if (random == 1 && difficulty == 2) {
        int x = rand() % 6;
        int y = rand() % 6;
        cout << "Difficulty selected: " << difficulty << " - " << "Number generated for level: " << random << endl;
        cout << line << endl;
        cout << "X: " << x << endl;
        cout << "Y: " << y << endl;
        cout << "X * Y = ?" << endl;
        int sum = x * y;
        cin >> guess;
        if (guess == sum) {
            cout << line << endl;
            cout << "Correct! The answer was " << sum << "!" << endl;
            cout << line << endl;
        }
        else {
            cout << line << endl;
            cout << "That is not the correct answer." << "The correct answer was: " << sum << endl;
            cout << line << endl;
        }
    }
    else if (random == 2 && difficulty == 2) {
        int x = rand() % 40;
        int y = rand() % 40;
        cout << "Difficulty selected: " << difficulty << " - " << "Number generated for level: " << random << endl;
        cout << line << endl;
        cout << "X: " << x << endl;
        cout << "Y: " << y << endl;
        cout << "X + Y = ?" << endl;
        int sum = x + y;
        cin >> guess;
        if (guess == sum) {
            cout << line << endl;
            cout << "Correct! The answer was " << sum << "!" << endl;
            cout << line << endl;
        }
        else {
            cout << line << endl;
            cout << "That is not the correct answer." << "The correct answer was: " << sum << endl;
            cout << line << endl;
        }
    }
    else if (random == 3 && difficulty == 2) {
        int y = rand() % 40;
        int x = rand() % 40;
        cout << "Difficulty selected: " << difficulty << " - " << "Number generated for level: " << random << endl;
        cout << line << endl;
        cout << "X: " << x << endl;
        cout << "Y: " << y << endl;
        cout << "X - Y = ?" << endl;
        int sum = x - y;
        cin >> guess;
        if (guess == sum) {
            cout << line << endl;
            cout << "Correct! The answer was " << sum << "!" << endl;
            cout << line << endl;
        }
        else {
            cout << line << endl;
            cout << "That is not the correct answer." << "The correct answer was: " << sum << endl;
            cout << line << endl;
        }





    }
    else if (random == 1 && difficulty == 3) {
        int x = rand() % 30;
        int y = rand() % 40;
        cout << "Difficulty selected: " << difficulty << " - " << "Number generated for level: " << random << endl;        cout << line << endl;
        cout << "X: " << x << endl;
        cout << "Y: " << y << endl;
        cout << "X * Y = ?" << endl;
        int sum = x * y;
        cin >> guess;
        if (guess == sum) {
            cout << line << endl;
            cout << "Correct! The answer was " << sum << "!" << endl;
            cout << line << endl;
        }
        else {
            cout << line << endl;
            cout << "That is not the correct answer." << "The correct answer was: " << sum << endl;
            cout << line << endl;
        }
    }
    else if (random == 2 && difficulty == 3) {
        int x = rand() % 300;
        int y = rand() % 1000;
        int z = rand() % 100;
        cout << "Difficulty selected: " << difficulty << " - " << "Number generated for level: " << random << endl;
        cout << line << endl;
        cout << "X: " << x << endl;
        cout << "Y: " << y << endl;
        cout << "Z: " << z << endl;
        cout << "X + Y + Z = ?" << endl;
        int sum = x + y + z;
        cin >> guess;
        if (guess == sum) {
            cout << line << endl;
            cout << "Correct! The answer was " << sum << "!" << endl;
            cout << line << endl;
        }
        else {
            cout << line << endl;
            cout << "That is not the correct answer." << "The correct answer was: " << sum << endl;
            cout << line << endl;
        }
    }
    else if (random == 3 && difficulty == 3) {
        int x = rand() % 30;
        int y = rand() % 30;
        cout << "Difficulty selected: " << difficulty << " - " << "Number generated for level: " << random << endl;
        cout << line << endl;
        cout << "X: " << x << endl;
        cout << "Y: " << y << endl;
        cout << "X * Y = ?" << endl;
        int sum = x * y;
        cin >> guess;
        if (guess == sum) {
            cout << line << endl;
            cout << "Correct! The answer was " << sum << "!" << endl;
            cout << line << endl;
        }
        else {
            cout << line << endl;
            cout << "That is not the correct answer." << "The correct answer was: " << sum << endl;
            cout << line << endl;
        }
    }
    else {
        cout << line << endl;
        cout << "Invalid number chosen. Either an accident, or you just can't read." << endl;
        cout << "Since it's probably the second one, here is your question: " << endl;
        cout << line << endl;
        int x = rand() % 500000;
        int y = rand() % 500000;
        int z = rand() % 500000;
        cout << "Difficulty selected: " << "Higher than what you are supposed to choose" << endl;
        cout << line << endl;
        cout << "X: " << x << endl;
        cout << "Y: " << y << endl;
        cout << "Z: " << z << endl;
        cout << "X * Y + Z = ?" << endl;
        int sum = x * y + z;
        cin >> guess;
        if (guess == sum) {
            cout << line << endl;
            cout << "Correct! The answer was " << sum << "!" << endl;
            cout << line << endl;
        }
        else {
            cout << line << endl;
            cout << "That is not the correct answer." << "The correct answer was: " << sum << endl;
            cout << line << endl;
        }
    }
    }
}
