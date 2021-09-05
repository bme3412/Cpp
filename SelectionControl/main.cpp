#include <iostream>
using namespace std;

int main() {

    int age;

    cout<<"Welcome to the Pub and Grille!" << endl;
    cout << "Please enter your age" << endl;
    cin >> age;

    if (age >= 21) {
        cout << "Here, have a beer" << endl;
    }
    else if (age >= 16) {
        cout << "Here have a coke" << endl;
        cout << "And, at least you can drive, MF" << endl;
    }
    
    else {
        cout << "Here have a coke" << endl;
        
    }
    cout << "Thanks for coming my dood" << endl;
    return 0;
}