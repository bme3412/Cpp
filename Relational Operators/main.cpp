# include <iostream>>
using namespace std;

/*
    > greater tahn
    >= greater than or equal to
    < less than
    <= less than or euqal to
    == equal to (equality)
    !+ not-equal-to (equality)

*/

int main()
{

    cout << boolalpha;

    int a = 15;
    int b = 20;
    bool areEqual = a ==b;

    int age = 33;

    cout << (a < b) << endl;

    cout << areEqual << endl;

    cout << "Age >= 21? " << (age >= 21) << endl;
    return 0;
}