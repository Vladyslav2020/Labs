#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    double sum = 0, sum0 = 0, eps;
    double x1, x2;
    cout << "Enter number precision: ";
    cin >> eps;
    x1 = 1;
    x2 = -2;
    sum = x1;

    int i = 1;
    while (abs(x2 - x1) >= eps)
    {
        i++;
        x1 = x2;
        x2 = x1 * (-2) / i;
        sum += x1;
    }
    sum += x2;

    cout << "sum = " << fixed << setprecision(10) << sum << endl;
    return 0;
}
