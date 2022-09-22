/*
 * Class: CMSC140 CRN 22888
 * Instructor: Dr. Eivazi
 * Project<1>
 * Description: This project calculates the amount of days, months, seconds, and minutes. It also converts human years 
 * to dog and goldfish years.
 * Due Date: 9/25/2022
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Ethan Shay
*/
#include <iostream>
#include <iomanip>
using namespace std;
//Above are the preprocessor directives

//Below are the constant variables
const string MY_NAME = "Ethan Shay";
const string ROBOT_NAME = "Cortana";
const int ASSIGNMENT_NUMBER = 1;
const string DUE_DATE = "9/25/2022";
const int YEARS = 1;
const int MONTHS = 12;
const int DAYS = 360;
const int HOURS = 8640;
const long MINUTES = 518400;
const long SECONDS = 31104000;
const int DOG_YEARS = 7;
const int GOLDFISH_YEARS = 5;

//This is the main loop
int main() {
    //Here are my declared variables.
    string name;
    int num;
    int wholeNum;
    int wholeNum2;

    //This is where I print the introductory sentence.
    cout << "**************** Robot Prototype Scripting ********************\n";
    cout << "Hello, welcome to Montgomery College! My name is " << ROBOT_NAME << ". May I have your name? \n";
    getline(cin, name);
    cout << "Nice to have you with us today, " << name << "!";
    cout << "\nLet me impress you with a small game\n";
    cout << "Give me the name of an important person or pet to you";
    cout << "\nPlease give me only a number: \n";
    cin >> num;

    cout << "\nYou have entered: " << num << "." << endl;
    cout << " If this is for a person, the age can be expressed as: \n";
    cout << " " << num * YEARS << " years" << endl;
    cout << " or " << (num * MONTHS) << " months\n";
    cout << " or about " << (num * DAYS) << " days\n";
    cout << " or about " << (num * HOURS) << " hours\n";
    cout << " or about " << (num * MINUTES) << " minutes\n";
    cout << " or about " << (num * SECONDS) << " seconds.\n";
    cout << " If this is for a dog, it is about " << (num * DOG_YEARS) << " years old in human age\n";
    cout << " If this is for a goldfish, it is about " << (num * GOLDFISH_YEARS) << " years old in human age\n";

    cout << "\nLets play another game, " << name << ". Give me a whole number.\n";
    cin >> wholeNum;

    cout << "Very well. Give me another whole number.\n";
    cin >> wholeNum2;

    //This line allows for a decimal place on non decimal numbers.
    cout << fixed << setprecision(1);

    cout << "Using the operator '+' in C++, the result of " << wholeNum << " + " << wholeNum2 << " is " << (wholeNum + wholeNum2) << endl;
    cout << "Using the operator '/' in C++, the result of " << wholeNum << " / " << wholeNum2 << " is " << (wholeNum / wholeNum2) << endl;
    cout << "however, the result of " << (double)wholeNum << " / " << (double)wholeNum2 << " is about " << (static_cast<double>(wholeNum) / wholeNum2) << endl;

    cout << "\nThank you for testing my program!!\n";
    cout << "PROGRAMMER: " << MY_NAME << endl;
    cout << "CMSC140 Common Project " << ASSIGNMENT_NUMBER << endl;
    cout << "Due Date: " << DUE_DATE;

    return 0;
}
