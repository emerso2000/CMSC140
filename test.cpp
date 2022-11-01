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

const string CLASS = "CMSC140";
const string PROJECT_NUMBER;
const string PROGRAMMER_NAME = "Ethan Shay";
const int SPECIFIC_MIN_ROOM = 0;
const int MIN_FLOORS = 1;
const int MAX_FLOORS = 5;
const int MIN_ROOMS = 1;
const int MAX_ROOMS = 30;
const int SINGLE_ROOM_RATE = 60;
const int DOUBLE_ROOM_RATE = 75;
const int KING_ROOM_RATE = 100;
const int SUITE_ROOM_RATE = 150;

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
    int minFloor = 2147483647;
    int min;

    cout << "Enter the location of this hotel chain: ";
    cin >> hotelLocation;
    cout << "Enter the total number of floors of this hotel: ";
    cin >> numFloors;
    do {
        while (numFloors < MIN_FLOORS || numFloors > MAX_FLOORS) {
            cout << "\nNumber of floors should be between 1 and 5!! Please try again";
            cout << "\nEnter the total number of floors of the hotel: ";
            cin >> numFloors;
        }

        for (i = 1; i <= numFloors; i++) {
            cout << "\nEnter total number of rooms in the " << i << "st Floor: ";
            cin >> numRooms;
            totalNumRooms += numRooms;

            while (numRooms < MIN_ROOMS || numRooms > MAX_ROOMS) {
                cout << "\nNumber of rooms should be between 1 and 30!! Please try again.";
                cout << "\nEnter the total number of rooms in the " << i << "st Floor: ";
                cin >> numRooms;
            }

            if (minFloor > numRooms) {
                minFloor = numRooms;
                min = i;
            }

            cout << "How many SINGLE rooms are occupied in the " << i << "th floor: ";
            cin >> singleRooms;
            totalSingleRooms += singleRooms;

            while (singleRooms < SPECIFIC_MIN_ROOM || singleRooms > numRooms) {
                cout << "Number of rooms should be greater than 0!! Please try again.";
                cout << "\nHow many SINGLE rooms are occupied in the " << i << "th floor: ";
                cin >> singleRooms;
            }

            cout << "How many DOUBLE rooms are occupied in the " << i << "th floor: ";
            cin >> doubleRooms;
            totalDoubleRooms += doubleRooms;

            while (doubleRooms < SPECIFIC_MIN_ROOM || doubleRooms > numRooms) {
                cout << "Number of rooms should be greater than 0!! Please try again.";
                cout << "\nHow many DOUBLE rooms are occupied in the " << i << "th floor: ";
                cin >> doubleRooms;
            }

            cout << "How many KING rooms are occupied in the " << i << "th floor: ";
            cin >> kingRooms;
            totalKingRooms += kingRooms;

            while (kingRooms < SPECIFIC_MIN_ROOM || kingRooms > numRooms) {
                cout << "Number of rooms should be greater than 0!! Please try again.";
                cout << "\nHow many KING rooms are occupied in the " << i << "th floor: ";
                cin >> kingRooms;
            }

            cout << "How many SUITE rooms are occupied in the " << i << "th floor: ";
            cin >> suiteRooms;
            totalSuiteRooms += suiteRooms;

            while (suiteRooms < SPECIFIC_MIN_ROOM || suiteRooms > numRooms) {
                cout << "Number of rooms should be greater than 0!! Please try again.";
                cout << "\nHow many SUITE rooms are occupied in the " << i << "th floor: ";
                cin >> suiteRooms;
            }
        }
    }while((singleRooms + doubleRooms + kingRooms + suiteRooms) > numRooms);
    cout << "Total number of occupied rooms exceeds the total number of rooms on this floor. Please try again!!";
    
    hotelIncome = ((totalSingleRooms * SINGLE_ROOM_RATE) + (totalDoubleRooms * DOUBLE_ROOM_RATE) + (totalKingRooms * KING_ROOM_RATE) + (totalSuiteRooms * SUITE_ROOM_RATE)) / 1.00;
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
    cout << "\n\t\t\tHotel Income:\t\t$" << static_cast<double>(hotelIncome);
    cout << "\n\t\tTotal # of rooms: \t\t" << totalNumRooms;
    cout << "\n\t\tTotal # Occupied Rooms: \t" << totalNumOccupiedRooms;
    cout << "\n\t\tTotal # Unoccupied Rooms: \t" << totalNumUnoccupiedRooms;
    cout << "\n\t\tOccupancy rate: \t\t" << occupancyRate << "%";
    cout << "\n\t\t" << min << "st floor with " << minFloor << " rooms has the least amount of rooms.";
    if (occupancyRate < 70) {
        cout << "\nNeed to improve on occupancy rate!";
    }
    cout << "\nThank you for testing my program!!";
    cout << "\nPROGRAMMER: " << PROGRAMMER_NAME << endl;
    cout << CLASS << " Common Project " << PROJECT_NUMBER;

    return 0;
}
