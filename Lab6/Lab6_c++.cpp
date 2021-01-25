#include <iostream>

using namespace std;

int sum_of_divisers(int);

int main()
{
    int n;
    cout << "Input integer n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int number = sum_of_divisers(i);
        if (number <= n && sum_of_divisers(number) == i)
            cout << number << " " << i << endl;
    }
    return 0;
}

int sum_of_divisers(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
        if (n % i == 0)
            sum += i;
    return sum;
}
