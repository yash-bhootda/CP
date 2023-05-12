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

vector<int> topKFrequent(vector<int> &nums, int k)
{
    map<int, int> mp;
    priority_queue<pair<int, int>> pq;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }
    for (auto i : mp)
    {
        pq.push({i.second, i.first});
    }
    vector<int> ans;
    while (k-- && !pq.empty())
    {
        ans.push_back(pq.top().second);
        pq.pop();
    }
    return ans;
}

int main()
{
    int n, t;
    cin >> n;
    vector<int> a;
    while (n)
    {
        cin >> t;
        a.push_back(t);
        n--;
    }
    int k;
    cin >> k;
    vector<int> b;
    b = topKFrequent(a, k);
    int p = b.size();
    int i = 0;
    while (i <= p)
    {
        cout << b[i] << endl;
        i++;
    }

    return 0;
}