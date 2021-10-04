#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    double number;
    double precision;
    cout << "Enter precision: ";
    cin >> precision;
    cout << "Enter number: ";
    cin >> number;
    int whole=(int)number;
    int fractional = (int)((number -floor(number))*pow(10,precision));
    cout << "Whole is: " << whole << endl;
    cout << "Fractional is: " << fractional << endl;
    return 0;
}
