#include <iostream>
#include <string>
using namespace std;

int main() 
{   double num1;
    double num2;
    double num3;

    cout<<"Please enter a real number"<< endl;
    cin >> num1;

    cout<<"Please enter another real number"<< endl;
    cin >> num2;

    cout<<"Please enter the final real number"<< endl;
    cin >> num3;

    double sum = (num1 + num2 + num3);

    cout<<"Average is: " << sum/3 << endl;


    return 0;
}