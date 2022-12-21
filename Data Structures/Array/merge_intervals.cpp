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
// vector<vector<int>> merge(vector<vector<int>>& intervals)
// {

// }
bool yrb(const vi a, const vi b)
{
    return a[0] < b[0];
}
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> a;
    for (int i = 0; i < n; i++)
    {
        vi b;
        int t;
        for (int j = 0; j < 2; j++)
        {
            cin >> t;
            b.pb(t);
        }
        a.pb(b);
    }
    sort(a.begin(), a.end(), yrb);
    int k =0;
    vector<vector<int>> ans;
    ans.pb(a[0]);
    for(int i =1;i<n;i++)
    {
        if(ans.back()[1] > a[i][0])
        {
            int t = max(a[k][1] , a[i][1]);
            ans.pop_back();
            ans.pb({ans.back()[0] , t});
            // cout<<k;
            
        }
        else
        {
            ans.pb(a[i]);
        }
       

    }
    fo(0 , ans.size())
    {
        for(int j =0;j<2;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    // cout << a[0][0] << " " << a[0][1];

    return 0;
}