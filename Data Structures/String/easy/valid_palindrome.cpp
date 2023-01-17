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
bool isPalindrome(string s)
{
    string t;
    int n = s.length();

    for (int i = 0; i < n; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            s[i] = tolower(s[i]);
            t.pb(s[i]);
        }
    }
    cout << t;
    int k = t.length();
    if (k == 0)
    {
        return true;
    }
    if (k == 1)
    {
        return false;
    }
    for (int i = 0; i < k / 2; i++)
    {
        if (t[i] != t[k - i - 1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s;
    getline(cin, s);
    cout << isPalindrome(s);
    return 0;
}