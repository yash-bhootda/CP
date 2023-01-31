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

int countSubstrings(string s)
{
    int n = s.size();
    int count = 0;
    {
        fo(0, n - 1)
        {
            int l = i;
            int r = i + 1;
            while (l >= 0 && r < s.length() && s[l] == s[r])
            {
                count++;
                l--;
                r++;
            }
        }
        
        fo(0, n-1)
        {
            int l = i;
            int r = i;
            while (l >= 0 && r < s.length() && s[l] == s[r])
            {
                l--;
                count++;
                r++;
            }
        }
        return count;
    }
}
int main()
{
    string s;
    cin >> s;

    cout << countSubstrings(s);

    return 0;
}