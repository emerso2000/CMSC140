#include <iostream>
using namespace std;

const int TICKET_PRICE = 109;

int main() {
    int numTicket;

    cout << "How many tickets were sold? ";
    cin >> numTicket;

    double totalPrice = TICKET_PRICE * numTicket;

    if (numTicket <= 0) {
        cout << "Ticket sold must be greater than 0";
    }
    if (numTicket >= 0) {
        if (numTicket >= 1 && numTicket <= 2) {
            cout << "The total cost of the puchase is: " << (totalPrice);
        }
        else if (numTicket >= 3 && numTicket <= 4) {
            cout << "The total cost of the puchase is: " << (totalPrice - (totalPrice * .10));
        }
        else if (numTicket >= 5 && numTicket <= 6) {
            cout << "The total cost of the puchase is: " << (totalPrice - (totalPrice * .25));
        }
        else if (numTicket >= 7 && numTicket <= 9) {
            cout << "The total cost of the puchase is: " << (totalPrice - (totalPrice * .25));
        }
        else if (numTicket >= 10) {
            cout << "The total cost of the puchase is: " << (totalPrice - (totalPrice * .42));
        }
    }
}