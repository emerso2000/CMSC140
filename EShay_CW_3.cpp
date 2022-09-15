#include <iostream>
using namespace std;

int main() {
    string name;
    int syllabusQuiz;
    int chapter1Quiz;
    int chapter2Quiz;
    int programmingClasswork1;
    int programmingClasswork2;
    int finalScore;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "\nEnter Syllabus Quiz Score ranging from 0 to 100: ";
    cin >> syllabusQuiz;

    cout << "\nEnter Chapter 1 Quiz Score ranging from 0 to 100: ";
    cin >> chapter1Quiz;

    cout << "\nEnter Chapter 2 Quiz Score ranging from 0 to 100: ";
    cin >> chapter2Quiz;

    cout << "\nEnter Programming Classwork 1 score ranging from 0 to 100: ";
    cin >> programmingClasswork1;

    cout << "\nEnter Programming Classwork 2 score ranging from 0 to 100: ";
    cin >> programmingClasswork2;

    finalScore = syllabusQuiz + chapter1Quiz + chapter2Quiz + programmingClasswork1 + programmingClasswork2;

    cout << name << ": " << "Final Score: " << finalScore << " Average Score: " << static_cast<double>(finalScore) / 5;

    return 0;
}