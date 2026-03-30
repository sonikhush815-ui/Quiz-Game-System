#include <iostream>
using namespace std;

int main() {
    int score = 0;
    int answer;

    cout << "===== QUIZ GAME =====" << endl;

    cout << "\n1. What is the capital of India?" << endl;
    cout << "1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai" << endl;
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 2) {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong!\n";
    }

    cout << "\n2. Which language is used for C++ programming?" << endl;
    cout << "1. English\n2. Hindi\n3. Programming Language\n4. Binary" << endl;
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 3) {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong!\n";
    }

    cout << "\n3. What is 5 + 3?" << endl;
    cout << "1. 6\n2. 8\n3. 10\n4. 7" << endl;
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 2) {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong!\n";
    }

    cout << "\n4. Which one is an input device?" << endl;
    cout << "1. Monitor\n2. Printer\n3. Keyboard\n4. Speaker" << endl;
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 3) {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong!\n";
    }

    cout << "\n5. What does CPU stand for?" << endl;
    cout << "1. Central Process Unit\n2. Central Processing Unit\n3. Computer Personal Unit\n4. Control Processing Unit" << endl;
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 2) {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong!\n";
    }

    cout << "\n===== RESULT =====" << endl;
    cout << "Your Score: " << score << "/5" << endl;

    if (score == 5) {
        cout << "Excellent!" << endl;
    } else if (score >= 3) {
        cout << "Good Job!" << endl;
    } else {
        cout << "Try Again!" << endl;
    }

    return 0;
}