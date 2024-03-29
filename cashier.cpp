#include <iostream>
#include <iomanip>
#include "cashier.h"
using namespace std;

const double TAX = 0.06;
const int arraySize = 15;
extern string bookTitle[arraySize];
extern string ibsn[arraySize];
extern string author[arraySize];
extern string publisher[arraySize];
extern string dateAdded[arraySize];
extern int qtyOnHand[arraySize];
extern double wholesale[arraySize];
extern double retail[arraySize];

int cashier() {
    string date;
    int quantity = 0;
    double price;
    string bookIbsn;
    string bookTitle = "";
    double unitPrice = 0.0;
    double totalBeforeTax = 0.0;
    double tax = 0.0;
    double total = 0.0;
    char choice;
    
    do {
        cout << "\nSerendipity Book Sellers\n";
        cout <<"Cashier Module\n";

        cout << "\nDate:\n";
        cin >> date;

        cout << "Quantity:\n";
        cin >> quantity;

        cout << "Price: ";
        cin >> price;

        do {
            cout << "IBSN:\n";
            cin >> bookIbsn;
            int index = -1;
            for (int i = 0; i < arraySize; i++) {
                if (ibsn[i] == bookIbsn) {
                    index = i;
                    break;
                }
            }
            if (index == -1) {
                cout << "Book not found. Do you want to re-enter the ISBN? Enter y for yes and n for no: ";
                cin >> choice;
            } 
            else {
                bookTitle = bookTitle[index];
                unitPrice = retail[index];
                choice = 'n'; // exit loop
                if (qtyOnHand[index] < quantity) {
                    cout << "Not enough copies in stock. Returning to main menu.";
                    return 0;
                } 
                else {
                    qtyOnHand[index] -= quantity;
                }
            }
        } while (choice == 'y');

        totalBeforeTax = quantity * unitPrice;
        tax = totalBeforeTax * TAX;
        total = totalBeforeTax + tax;

        cout << "\nQty\tISBN\t\t\tTitle\t\t\t\t\tPrice\t\tTotal";
        cout << "\n---------------------------------------------------------------------------------------------\n";
        cout << quantity << setw(11);
        cout << bookIbsn << setw(28);
        cout << bookTitle << setw(35);
        cout << "$" << unitPrice << setw(10);
        cout << "$" << total;
        cout << "\n\n\nSubtotal: $" << fixed << setprecision(2) << totalBeforeTax;
        cout << "\nTax: $" << fixed << setprecision(2) << tax;
        cout << "\nTotal: $" << fixed << setprecision(2) << total;
        cout << "\n\n\nThank You for Shopping at Serendipity!";
        cout << "\nDo you want another transaction? Enter y for yes and n for no: ";
        cin >> choice;
    } while (choice != 'n');

    return 0;
}

