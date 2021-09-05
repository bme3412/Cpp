#include <iostream>
#include <string>
using namespace std;

int main() 
{
    
    string fullName;
    string Location;
    int initialScore;

    cout << "What is your full name? " << endl;
    getline(cin, fullName);   

    cout << "What is your city, state and country?" << endl;
    getline(cin, Location);     

    cout<<"Please enter you project score: "<< endl;
    cin >> initialScore;

    cout << "Hello, " << fullName << endl;
    cout << "We heard you were from " << Location << endl;
    cout << "Your initial score is " << initialScore << endl;
    cout << "If we add 5 to your initial score: " << (initialScore +5) << endl;

    return 0;
}