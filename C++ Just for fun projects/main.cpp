#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
std::string line = std::string(60, '-');

int main() {
    std::srand(std::time(nullptr));
    std::int random = (std::rand() % 3) + 1;
    char grade;
    int guess;
    int difficulty;

    // Ask the user to choose a difficulty level
    std::cout << "Choose difficulty (1-3): ";
    std::cin >> difficulty;

    if (random == 1 && difficulty == 1) {
    int x = std::rand() % 10;
    int y = std::rand() % 10;
    std::cout << "Difficulty selected: " << difficulty << " - " << "Number generated for level: " << random << std::endl;
    std::cout << line << std::endl;
    std::cout << "X: " << x << std::endl;
    std::cout << "Y: " << y << std::endl;
    std::cout << "X + Y = ?" << std::endl;
    int sum = x + y;
    std::cin >> guess;

    if (guess == sum) {
        std::cout << line << std::endl;
        std::cout << "Correct! The answer was " << sum << "!" << std::endl;
        std::cout << line << std::endl;
    } else if (guess > 20) {
        std::cout << line << std::endl;
        std::cout << "Not sure if you're just stupid or very stupid, the answer cannot go over 20, the correct answer was: " << sum << std::endl;
        std::cout << line << std::endl;
    } else {
        std::cout << line << std::endl;
        std::cout << "That is not the correct answer." << "The correct answer was: " << sum << std::endl;
        std::cout << line << std::endl;
    }
} else if (random == 2 && difficulty == 1) {
    int x = std::rand() % 30;
    int y = std::rand() % 30;
    std::cout << "Difficulty selected: " << difficulty << " - " << "Number generated for level: " << random << std::endl;
    std::cout << line << std::endl;
    std::cout << "X: " << x << std::endl;
    std::cout << "Y: " << y << std::endl;
    std::cout << "X + Y = ?" << std::endl;
    int sum = x + y;
    std::cin >> guess;
    if (guess == sum) {
        std::cout << line << std::endl;
        std::cout << "Correct! The answer was " << sum << "!" << std::endl;
        std::cout << line << std::endl;
    } else {
        std::cout << line << std::endl;
        std::cout << "That is not the correct answer." << "The correct answer was: " << sum << std::endl;
        std::cout << line << std::endl;
    }






    } else if (random == 3 && difficulty == 1) {
        int x = rand() % 10;
        int y = rand() % 10;
        int z = rand() % 10;
        std::cout << "Difficulty selected: " << difficulty << " - " << "Number generated for level: " << random << std::endl;
        std::cout << line << std::endl;
        std::cout << "X: " << x << std::endl;
        std::cout << "Y: " << y << std::endl;
        std::cout << "Z: " << z << std::endl;
        std::cout << "X + Y + Z = ?" << std::endl;
        int sum = x + y + z;
        std::cin >> guess;
        if (guess == sum) {
            std::cout << line << std::endl;
            std::cout << "Correct! The answer was " << sum << "!" << std::endl;
            std::cout << line << std::endl;
        } else {
            std::cout << line << std::endl;
            std::cout << "That is not the correct answer." << "The correct answer was: " << sum << std::endl;
            std::cout << line << std::endl;
        }
    } else if (random == 1 && difficulty == 2) {
        int x = std::rand() % 6;
        int y = std::rand() % 6;
        std::cout << "Difficulty selected: " << difficulty << " - " << "Number generated for level: " << random << std::endl;
        cout << line << std::endl;
        cout << "X: " << x << std::endl;
        cout << "Y: " << y << std::endl;
        cout << "X * Y = ?" << std::endl;
        int sum = x * y;
        cin >> guess;
        if (guess == sum) {
            cout << line << endl;
            cout << "Correct! The answer was " << sum << "!" << endl;
            cout << line << endl;
        } else {
            cout << line << endl;
            cout << "That is not the correct answer." << "The correct answer was: " << sum << endl;
            cout << line << endl;
        }
    } else if (random == 2 && difficulty == 2) {
        int x = rand() % 0;
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
        } else {
            cout << line << endl;
            cout << "That is not the correct answer." << "The correct answer was: " << sum << endl;
            cout << line << endl;
        }
    } else if (random == 3 && difficulty == 2) {
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
        } else {
            cout << line << endl;
            cout << "That is not the correct answer." << "The correct answer was: " << sum << endl;
            cout << line << endl;
        }





    } else if (random == 1 && difficulty == 3) {
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
        } else {
            cout << line << endl;
            cout << "That is not the correct answer." << "The correct answer was: " << sum << endl;
            cout << line << endl;
        }
    } else if (random == 2 && difficulty == 3) {
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
        } else {
            cout << line << endl;
            cout << "That is not the correct answer." << "The correct answer was: " << sum << endl;
            cout << line << endl;
        }
    } else if (random == 3 && difficulty == 3) {
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
        } else {
            cout << line << endl;
            cout << "That is not the correct answer." << "The correct answer was: " << sum << endl;
            cout << line << endl;
        }
    } else {
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
        int sum = x * y + z ;
        cin >> guess;
        if (guess == sum) {
            cout << line << endl;
            cout << "Correct! The answer was " << sum << "!" << endl;
            cout << line << endl;
        } else {
            cout << line << endl;
            cout << "That is not the correct answer." << "The correct answer was: " << sum << endl;
            cout << line << endl;
        }
    }
    return 0;
}
