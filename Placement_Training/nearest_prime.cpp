#define pb push_back
#define vi vector<int>
#define si stack<int>
#define vl vector<long long int>
#define pi pair<int, int>
#define pl pair<ll, ll>
#define ll long long int
#define fo(a, b) for (auto i = a; i < b; ++i)
#define nfo(a, b) for (auto i = a; i < b; i--)
#define jfo(a, b) for (auto j = a; i < b; j++)
#define njfo(a, b) for (auto j = a; j < b; j--)
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int prime(int n)
{
    for (int i = 2; i < sqrt(n); i++)
        if (n % i == 0)
            return 1;
    return 0;
}
int main()
{
    int t;
    cin >> t;
    // int flag = 1;
    // int flag1 = 1;
    
    while (t)
    {
        int n;
        int a, b;
        cin >> n;
        a = n;
        b = n;
        int flag = 1;
        int flag1 = 1;
        while (flag && flag1)
        {
            a = a - 1;
            // cout << a << endl;
            flag = prime(a);
            b = b + 1;
            // cout << b << endl;
            flag1 = prime(b);
        }
        if (flag)
        {
            cout << a;
        }
        else
        {
            cout << b;
        }
        t--;
    }
    // if (flag)
    // {
    //     cout << b;
    // }
    // else
    // {
    //     cout << a;
    // }
    return 0;
}