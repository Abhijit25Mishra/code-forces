#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int a[100007], d, c = 1;
        for (int i = 0; i < n; i++)
        {
            a[i] = s[i] - '0';
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[0] != 9)
            {
                a[i] = 9 - a[i];
            }
            else
            {
                d = 10 + c - a[i];
                c = d / 10;
                a[i] = d % 10;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i];
        }
        cout << endl;
    }
}
