#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    cout << "(i)\n";

    int x = 1;
    while (x < 10) {
        cout << "*";
        x += 1;
    }

    cout << "\n\n(ii)\n";

    int y = 1;
    do {
        y += 1;
        cout << "*";
    } while(y < 20);
    

    cout << "\n\n(iii)";

    for (int i = 1; i <= 10; i++) {
        cout << "\n";
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
    }

    cout << "\n\n(iv)";

    for (int i = 1; i <= 20; i++) {
        cout << "\n";
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
    }

    cout << "\n\n(v)";

    for (int i = 1; i <= 10; i++) {
        cout << "\n";
        for (int j = 10; j >=i; j--) {
            cout << "* ";
        }
    }

    cout << "\n\n(vi)";

    for (int i = 1; i <= 20; i++) {
        cout << "\n";
        for (int j = 20; j >=i; j--) {
            cout << "* ";
        }
    }

    //Part 2
    string name;
    string phoneNum;
    string streetAddress;
    string cityStateZipCode;
    string tempVal;

    ifstream infile;
    ofstream outfile;
    string filename;
    
    outfile.open("list.txt");

    if(outfile) {
        cout << "\nEnter a name: ";
        getline(cin, name);

        cout << "Enter a phone number: ";
        cin >> phoneNum;
        cin.ignore();

        cout << "Enter a street address: ";
        getline(cin, streetAddress);
        cout << "Enter a city, state, and zipcode: ";
        getline(cin, cityStateZipCode);
            
        outfile << "Name: " << name;
        outfile << "\nPhone Number: " << phoneNum;
        outfile << "\nAddress: " << streetAddress;
        outfile << "\n" << cityStateZipCode;
        outfile.close();

        infile.open("list.txt");

        while (getline(infile, tempVal)) {
            cout << tempVal << endl;
        }
    }
    else {
        cout << "Error opening file";
    }


    infile.close();
    return 0;
}