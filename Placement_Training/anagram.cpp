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

bool isAnagram(string s, string t)
{
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if (s.length() != t.length())
    {
        return false;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != t[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string a , b;
    cin>>a;
    cin>>b;
    cout<<isAnagram(a,b);

    return 0;
}