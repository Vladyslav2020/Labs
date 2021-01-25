#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Input integer: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int k = 1;
        while ((i * i) % k < i)
            k *= 10;
        if ((i * i) % k == i)
            cout << i << " " << i * i << endl;
    }
    return 0;
}
