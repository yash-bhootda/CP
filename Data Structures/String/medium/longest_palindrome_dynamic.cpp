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
string longestPalindrome(string s)
{
    int n = s.length();
    int maxl = 1;
    vector<vector<bool>> dp(n, vector<bool>(n, false))
    fo(0, n)
    {
        dp[i][i] = true;
    }
    fo(0, n - 1)
    {
        if (s[i] == s[i + 1])
        {
            dp[i][i + 1] = true;
            maxl = 2;
        }
    }
    fo(3, n)
    {
        jfo(0, n - i - 1)
        {
            int k = j + i - 1;
            if (dp[j + 1][k - 1] && s[j] == s[k])
            {
                dp[j][k] = true;
                if (i > maxl)
                {
                    maxl = i;
                }
            }
        }
    }
    return maxl;
}
int main()
{
    string s;
    cin >> s;

    longestPalindrome(s);
    return 0;
}