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
int lengthOfLongestSubstring(string s)
{
    map<char, int> m;
    int curr_max = 0;
    int gmax = 0;
    int start = 0;
    fo(0, s.length())
    {
        if (m.find(s[i]) != m.end())
        {
            start = max(start, m[s[i]] + 1);
            // cout << start << endl;
        }
        m[s[i]] = i;
        gmax = max(i - start + 1, gmax);
    }
    return gmax;
}
int main()
{
    string s;
    // cout << "Enter the string" << endl;
    getline(cin, s);
    int x;
    x = lengthOfLongestSubstring(s);
    cout << x;
    return 0;
}