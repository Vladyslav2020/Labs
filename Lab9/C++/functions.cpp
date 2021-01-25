#include <bits/stdc++.h>

using namespace std;

char* get_max_cnt_char_substr(string str, int& n)
{
    int N = 255;
    int chars[N] = {0};
    for (int i = 0; i < str.size(); i++)
        chars[int(str[i])]++;
    n = 0;
    int mx = 0;
    for (int i = 0; i < N; i++)
        mx = max(mx, chars[i]);
    if (mx == 0)
        mx = -1;
    for (int i = 0; i < N; i++)
        if (chars[i] == mx)
            n++;
    char* arr = new char[n];
    int index = 0;
    for (int i = 0; i < N; i++)
        if (chars[i] == mx)
            arr[index++] = char(i);
    return arr;
}

char* get_min_cnt_char_substr(string str, int& n)
{
    int N = 255;
    int chars[N] = {0};
    for (int i = 0; i < str.size(); i++)
        chars[int(str[i])]++;
    int mn = INT_MAX;
    for (int i = 0; i < N; i++)
        if (chars[i] > 0)
            mn = min(mn, chars[i]);
    if (mn == 0)
        mn = -1;
    n = 0;
    for (int i = 0; i < N; i++)
        if (chars[i] == mn)
            n++;
    char* arr = new char[n];
    int index = 0;
    for (int i = 0; i < N; i++)
        if (chars[i] == mn)
            arr[index++] = char(i);
    return arr;
}
