#include <bits/stdc++.h>
#include "lib.h"

using namespace std;

int main()
{
    string str;
    cout << "Input string: ";
    getline(cin, str);
    int N1, N2;
    char* arr1 = get_max_cnt_char_substr(str, N1);
    cout << "Maximum frequency of occurrence of characters: " << endl;
    for (int i = 0; i < N1; i++)
        cout << arr1[i] << " ";
    cout << endl;
    char* arr2 = get_min_cnt_char_substr(str, N2);
    cout << "Minimum frequency of occurrence of characters: " << endl;
    for (int i = 0; i < N2; i++)
        cout << arr2[i] << " ";
    cout << endl;
    return 0;
}

