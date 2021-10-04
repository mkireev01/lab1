#include <iostream>
using namespace std;
int main ()
{
    double sum;
    double procents;
    double months;
    double income;
    cout << "Enter sum: " << endl;
    cin >> sum;
    cout << "Enter procents: " << endl;
    cin >> procents;
    cout << "Enter months: " << endl;
    cin >> months;
    income = (sum*procents)/100/12*months;
    cout << "Income equal to: " << income << endl;
    system ("pause");
    return 0;
}
