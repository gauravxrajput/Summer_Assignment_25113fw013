#include <iostream>
using namespace std;

int main() {
    int score = 0, answer;

    cout << "Welcome to the Quiz Application!" << endl;

    // Question 1
    cout << "\nQ1. What is the capital of India?" << endl;
    cout << "1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> answer;
    if (answer == 2) {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong! The correct answer is Delhi." << endl;
    }

    // Question 2
    cout << "\nQ2. Who is known as the Father of C++?" << endl;
    cout << "1. Dennis Ritchie\n2. Bjarne Stroustrup\n3. James Gosling\n4. Guido van Rossum" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> answer;
    if (answer == 2) {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong! The correct answer is Bjarne Stroustrup." << endl;
    }

    // Question 3
    cout << "\nQ3. Which planet is known as the Red Planet?" << endl;
    cout << "1. Earth\n2. Mars\n3. Jupiter\n4. Venus" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> answer;
    if (answer == 2) {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong! The correct answer is Mars." << endl;
    }

    cout << "\nYour final score is: " << score << "/3" << endl;

    return 0;
}
