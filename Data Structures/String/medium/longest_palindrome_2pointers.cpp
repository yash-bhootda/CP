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
int checkpal(int l, int r, string s)
{
    while (l >= 0 && r < s.length() && s[l] == s[r])
    {
        l--;
        r++;
    }
    return r - l - 1;
}
string longestPalindrome(string s)
{
    int l, r;
    int ans = 0;
    int maxl = 0;
    int n = s.length();
    int start = 0;
    fo(0, n - 1)
    {
        int len1 = checkpal(i, i, s);
        int len2 = checkpal(i, i + 1, s);
        ans = max(len1, len2);
        if (ans > maxl)
        {
            maxl = ans;
            start = i - (maxl - 1) / 2;
        }
    }
    return s.substr(start, maxl);
}
int main()
{
    string s;
    cin >> s;

    cout << longestPalindrome(s);
    return 0;
}

int checkpal(int l, int r, string s)
{
    int count = 0;
    while (l >= 0 && r < s.size() && s[l] == s[r])
    {
        l--;
        r++;
        count++;
    }
    return count;
}
int countSubstrings(string s)
{

    int n = s.size(), count = 0;
    for (int i = 0; i < n; i++)
    {
        int n = checkpal(i, i, s);
        count = count + n;
    }
    for (int i = 0; i < n - 1; i++)
    {
        int m = checkpal(i, i + 1, s);
        count = count + m;
    }
    return count;
}