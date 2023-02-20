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
long long countFairPairs(vector<int> &nums, int lower, int upper)
{
    long long count = 0;
    unordered_map<int, int> m;
    int n = nums.size();
    fo(0, n)
    {
        m[nums[i]]++;
    }
    fo(0, n)
    {
        int l = lower - nums[i];
        int u = upper - nums[i];
        for (int j = l; j <= u; j++)
        {
            if (j == 0)
            {
                count++;
            }
            else if (j > 0 && m.count(j))
            {
                count = count + m[j];
            }
        }
    }
    return count/2;
}
int main()
{
    int n;
    int l, u, b;
    cin >> l;
    cin >> u;

    cin >> n;
    vi a;
    while (n)
    {
        cin >> b;
        // cout<<b;
        a.pb(b);
        n--;
    }
    cout<<countFairPairs(a , l , u);

    return 0;
}