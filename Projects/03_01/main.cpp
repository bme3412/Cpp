#include <iostream>

using namespace std;

int main() {
    char whichPackage;
    int howManyJams = 0;
    int monthlyFee = 0;
    int jamsIncluded = 0;
    int jamPrice = 0;
    int totalCost;

    cout << "What package did you choose - A, B, or C?" << endl;
    cin >> whichPackage;
    cout << "How many jams, jellies or preserves did your buy this month?" << endl;
    cin >> howManyJams;

    // hTe default values for the monthly pacjkage
    if (whichPackage == 'A' || whichPackage == 'a') {
        monthlyFee = 8;
        jamsIncluded = 2;
        jamPrice = 5;
    }
    else if (whichPackage == 'B' || whichPackage == 'b') {
        monthlyFee = 12;
        jamsIncluded = 4;
        jamPrice = 4;
    } else if (whichPackage == 'C' || whichPackage == 'c') {
        monthlyFee = 15;
        jamsIncluded = 6;
        jamPrice = 6;
    }
    else {
        cout << "You selected a non-existant pacakge" << endl;
    }

    // Calculate the total cosst
    if (howManyJams <= jamsIncluded) {
        // Just charge the monthly fee
        totalCost = monthlyFee;
    }
    else {
        totalCost = monthlyFee + (howManyJams - jamsIncluded);
    }

    cout<<"You owe $" << totalCost;


    return 0;

}