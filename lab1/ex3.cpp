#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double edge;
    double volume;
    double square;
    double radius1;
    double radius2;
    double volumes1;
    double volumes2;
    cout << "Enter the edge of the cube: ";
    cin >> edge;
    volume = edge * edge * edge;
    cout << "Volume: " << volume << endl;
    square = 4*edge*edge;
    cout << "Square: " << square << endl;
    radius1 = edge/2;
    cout << "Radius of the inscribed sphere: " << radius1 << endl;
    radius2 = (edge*sqrt(3))/2;
    cout << "Radius of the circumscribed sphere: " << radius2 << endl;
    volumes1 = 4/3 * M_PI * (edge/2) * (edge/2) * (edge/2);
    cout << "Volume of the inscribed sphere: " << volumes1 << endl;
    volumes2 = 4/3 * M_PI * (edge*sqrt(3))/2*(edge*sqrt(3))/2*(edge*sqrt(3))/2;
    cout << "Volume of the circumscribed sphere: " << volumes2 << endl;
    return 0;
}