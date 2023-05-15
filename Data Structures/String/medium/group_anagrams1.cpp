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
vector<vector<string>> groupAnagrams(vector<string> &s)
{
    unordered_map<string, vector<string>> m;
    fo(0, s.size())
    {
        string t = s[i];
        sort(s[i].begin(), s[i].end());
        m[s[i]].pb(t);
    }
    unordered_map<string, vector<string>>::iterator it = m.begin();
    vector<vector<string>> ans;
    while (it != m.end())
    {
        ans.pb(it->second);
        it++;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<string> s;
    fo(0, n)
    {
        string t;
        cin >> t;
        s.pb(t);
    }
    // vector<vector<string>> a;
    groupAnagrams(s);

    return 0;
}

vector<string> removeAnagrams(vector<string> &w)
{
    unordered_map<string, int> mp;
    vector<string> ans;

    for (int i = 0; i < w.size(); i++)
    {
        string t = w[i];
        sort(w[i].begin(), w[i].end());
        if (mp.find(w[i]) == mp.end() || mp[w[i]] != i - 1)
        {
            ans.push_back(t);
        }
        mp[w[i]] = i;
    }
    return ans;
}