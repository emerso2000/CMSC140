/*
 * Class: CMSC140 CRN: 22888
 * Instructor: Farnaz Eivazi
 * Classwork/Homework/<2>
 * Description: 
 * Due Date: 9/12/2022
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Ethan Shay
*/
#include <iostream>
using namespace std;

const double SALES_TAX = 0.04;
const double COUNTRY_SALES_TAX = 0.02;

int main() {
    //Part 1
    cout << "Ethan Shay" << "\n" << "10249 Nolan Dr MD, 20850" << "\n" << 3015325821 << "\n" << "Computer Science";

    //Part 2
    string movieName = "Interstellar";
    double ticketPrice = 9.99;

    bool isPG13 = true;

    cout << "\nMy favorite movie is " << movieName << ", " << "it costs " << ticketPrice << ".\n";
    cout << "This movie is PG-13";

    //Part 3
    int purchase = 95;
    double totalTax;
    double totalSaleAmount;

    totalTax = SALES_TAX + COUNTRY_SALES_TAX;

    totalSaleAmount = purchase * totalTax;

    double totalAmount = totalSaleAmount + purchase;

    cout << "\nTotal amount of tax " << totalAmount;

    return 0;
}
