#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    double x, elem0, s;
    int n;
    cout << "Input float number x: ";
    cin >> x;
    cout << "Input integer number n: ";
    cin >> n;

    elem0 = x;
    s = 0;
    for (int i = 1; i <= n; i++)
    {
        s += elem0;
        elem0 *= x  * i / (-i - 1);
    }
    cout << "sum = " << fixed << setprecision(4) << s << endl;
    return 0;
}
