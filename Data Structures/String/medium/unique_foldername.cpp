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
vector<string> getFolderNames(vector<string> &names)
{
    unordered_map<string, int> m;
    vector<string> ans;
    for (int i = 0; i < names.size(); i++)
    {
        m[names[i]]++;
        if (m[names[i] == 1])
        {
            ans.pb(names[i]);
        }
        if (m[names[i]] > 1)
        {
            int k = m[names[i]];
            while (true)
            {
                string s = names[i];

                s = s + '(' + to_string(k - 1) + ')';
                if (m.find(s) != m.end())
                {
                    k++;
                }
                else
                {
                    break;
                }
            }
        }
        string s = names[i];

        s = s + '(' + to_string(k) + ')';
        ans.pb(s);
        m[s]++;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<string> names;
    vector<string> names1;
    fo(0, n)
    {
        string s;
        cin >> s;
        names.pb(s);
    }
    names1 = getFolderNames(names);

    return 0;
}