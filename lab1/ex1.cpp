#include <iostream>
using namespace std;
int main ()
{
    int number;
    int lastnumber;
    cout << "Enter numbers: ";
    cin >> number;
    lastnumber=number%10;
    cout << "Last number is: " << lastnumber << endl;
    return 0;
}

