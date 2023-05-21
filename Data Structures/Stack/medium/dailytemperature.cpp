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
vector<int> dailyTemperatures(vector<int> &a)
{
    si st;
    vi b;
    int n = a.size();
    fo(0, n)
    {
        while (!st.empty() && a[i] > a[st.top()])
        {
            b[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty())
    {
        b[st.top()] = 0;
        st.pop();
    }
    return b;
}

int main()
{
    int n;
    cin >> n;
    vi a;
    fo(0, n)
    {
        int x;
        cin >> x;
        a.pb(x);
    }
    vi b;
    b = dailyTemperatures(a);
    fo(0, n)
    {
        cout << b[i];
    }
    return 0;
}
