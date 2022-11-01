/*
 * Class: CMSC140 CRN XXXX XXXX
 * Instructor: Dr. Eivazi
 * Project 3 
 * Description: write a program that calculates the occupancy rate
   and the total hotel income for one night and displays this 
   information as well as some other information described below. 
 * Due Date: 10/31/2022
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Full Name here: Ethan Shay
               */
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string hotelLocation;
    int numFloors;
    int numRooms;
    int singleRooms;
    int doubleRooms;
    int kingRooms;
    int suiteRooms;
    int hotelIncome;
    int i;
    int totalNumRooms = 0;
    int totalSingleRooms = 0;
    int totalDoubleRooms = 0;
    int totalKingRooms = 0;
    int totalSuiteRooms = 0;

    int totalNumUnoccupiedRooms;
    int totalNumOccupiedRooms;

    double occupancyRate;

    cout << "Enter the location of this hotel chain: ";
    cin >> hotelLocation;
    cout << "Enter the total number of floors of this hotel: ";
    cin >> numFloors;

    while (numFloors < 1 || numFloors > 5) {
        cout << "\nNumber of floors should be between 1 and 5!! Please try again";
        cout << "\nEnter the total number of floors of the hotel: ";
        cin >> numFloors;
    }

    for (i = 1; i <= numFloors; i++) {
        cout << "\nEnter total number of rooms in the " << i << "st Floor: ";
        cin >> numRooms;
        totalNumRooms += numRooms;

        while (numRooms < 1 || numRooms > 30) {
            cout << "\nNumber of rooms should be between 1 and 30!! Please try again.";
            cout << "\nEnter the total number of rooms in the " << i << "st Floor: ";
            cin >> numRooms;
        }

        cout << "How many SINGLE rooms are occupied in the " << i << "th floor: ";
        cin >> singleRooms;
        totalSingleRooms += singleRooms;

        while (singleRooms < 0 || singleRooms > numRooms) {
            cout << "Number of rooms should be greater than 0!! Please try again.";
            cout << "\nHow many SINGLE rooms are occupied in the " << i << "th floor: ";
            cin >> singleRooms;
        }

        cout << "How many DOUBLE rooms are occupied in the " << i << "th floor: ";
        cin >> doubleRooms;
        totalDoubleRooms += doubleRooms;

        while (doubleRooms < 0 || doubleRooms > numRooms) {
            cout << "Number of rooms should be greater than 0!! Please try again.";
            cout << "\nHow many DOUBLE rooms are occupied in the " << i << "th floor: ";
            cin >> doubleRooms;
        }

        cout << "How many KING rooms are occupied in the " << i << "th floor: ";
        cin >> kingRooms;
        totalKingRooms += kingRooms;

        while (kingRooms < 0 || kingRooms > numRooms) {
            cout << "Number of rooms should be greater than 0!! Please try again.";
            cout << "\nHow many KING rooms are occupied in the " << i << "th floor: ";
            cin >> kingRooms;
        }

        cout << "How many SUITE rooms are occupied in the " << i << "th floor: ";
        cin >> suiteRooms;
        totalSuiteRooms += suiteRooms;

        while (suiteRooms < 0 || suiteRooms > numRooms) {
            cout << "Number of rooms should be greater than 0!! Please try again.";
            cout << "\nHow many SUITE rooms are occupied in the " << i << "th floor: ";
            cin >> suiteRooms;
        }
    }

    hotelIncome = ((totalSingleRooms * 60) + (totalDoubleRooms * 75) + (totalKingRooms * 100) + (totalSuiteRooms * 150)) / 1.00;
    totalNumOccupiedRooms = (totalSingleRooms + totalDoubleRooms + totalKingRooms + totalSuiteRooms);
    totalNumUnoccupiedRooms = (totalNumRooms - totalNumOccupiedRooms);
    occupancyRate = (100 *(static_cast<double>(totalNumOccupiedRooms) / static_cast<double>(totalNumRooms)));
    cout << "\n========================================================================================================================";
    cout << "\n\t\t\tBlueMont Hotel located in " << hotelLocation;
    cout << "\n\t\t\t\tTODAY's ROOM RATES(US$/night)";
    cout << "\n\t\tSingle Room\t\tDouble Room\t\tKing Room\t\tSuite Room";
    cout << "\n\t\t\t 60\t\t\t 75\t\t100\t\t\t150";
    cout << "\n========================================================================================================================";
    cout << fixed << setprecision(2);
    cout << "\n\t\t\tHotel Income:\t\t$" << hotelIncome;
    cout << "\n\t\tTotal # of rooms: \t\t" << totalNumRooms;
    cout << "\n\t\tTotal # Occupied Rooms: \t" << totalNumOccupiedRooms;
    cout << "\n\t\tTotal # Unoccupied Rooms: \t" << totalNumUnoccupiedRooms;
    cout << "\n\t\tOccupancy rate: \t\t" << occupancyRate << "%";

    
    if (occupancyRate < 60) {
        cout << "Need to improve on occupancy rate!!";
    }
}
