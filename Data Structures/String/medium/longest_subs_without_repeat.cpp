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
    if (s.size() == 0)
    {
        return 0;
    }
    if (s.size() == 1)
    {
        return 1;
    }
    map<char, int> mp;
    int max1 = INT_MIN;
    int count = 0;
    int i = 0;
    while (i < s.size())
    {
        if (mp.find(s[i]) != mp.end())
        {

            i = mp[s[i]] + 1;
            max1 = max(max1, count);
            count = 0;
            mp.clear();
        }
        else
        {
            mp[s[i]] = i;
            count++;
            i++;
        }
    }

    int k = mp.size();
    max1 = max(max1, k);
    return max1;
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