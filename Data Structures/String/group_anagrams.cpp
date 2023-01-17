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
void groupAnagrams(vector<string> &s)
{
    vector<pair<string, int>> m;
    for (int i = 0; i < s.size(); i++)
    {
        string t = s[i];
        // cout<<t<<endl;
        sort(t.begin(), t.end());
        m.pb({t, i});
    }
    sort(m.begin(), m.end());
    // map<string , int> :: iterator it=m.begin();
    vector<vector<string>> ans;
    vector<string> a;
    // fo(0, m.size())
    // {
    //     cout << m[i].first << " " << m[i].second << endl;
    // }
    fo(0, m.size())
    {
        // cout <<"this"<< m[i].first << endl;
        if (a.size() == 0)
        {
            a.pb(s[m[i].second]);
        }
        if (m[i].first == m[i + 1].first)
        {
            if (a.back() != (s[m[i + 1].second]))
            {
                a.pb(s[m[i + 1].second]);
            }
        }
        else
        {

            ans.pb(a);
            a.clear();
        }

        // it++;
    }
    // fo(0, ans.size())
    // {
    //     cout << "hell" << endl;
    //     for (int j = 0; j < ans[i].size(); j++)
    //     {
    //         cout << ans[i][j] << endl;
    //     }
    // }
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