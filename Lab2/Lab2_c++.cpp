#include <iostream>

using namespace std;

int main()
{
//    Given real numbers x, y.
//    Determine whether the point with coordinates (x, y)
//    belongs to the shaded part of the plane
    double x, y; // coordinate of point
    cout << "Enter first coordinate of point: ";
    cin >> x;
    cout << "Enter second coordinate of point: ";
    cin >> y;
    if (abs(x) >= y * y && abs(y) >= x * x)
        cout << "Belongs" << endl;
    else
        cout << "Does not belong" << endl;
    return 0;
}
