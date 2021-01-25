#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <iomanip>

# define M_PI  3.14159265358979323846

using namespace std;

// checking a string for a number
bool is_number(string str)
{
    bool flag = false;
    int start = 0;
    if (str[0] == '-')
        start++;
    for (int i = start; i < str.size(); i++)
    {
        if (str[i] == '.' && !flag)
            flag = true;
        else
        if (str[i] == '.')
            return false;
        else
        if ((int)str[i] - (int) '0' < 0 || (int) str[i] - (int) '0' > 9)
            return false;
    }
    return true;
}

int main()
{
    // convert a given angle from a degree to a radian
    cout << "Enter the angle value in degrees: ";
    string str;
    cin >> str;
    if (!is_number(str))
    {
        cout << "Incorrect data" << endl;
        return 0;
    }
    double deg, // angle in degrees
            rad; // angle in radians
    deg = atoi(str.c_str());
    rad = deg * M_PI / 180;
    cout << fixed << setprecision(4) <<  "The value of this angle in radians is: " << rad << endl;
    return 0;
}
