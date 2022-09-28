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
vector<bool> v;
vector<vector<int>> g;
void addedge(int a, int b)
{
    g[a].pb(b);
}
void bfs(int u)
{
    queue<int> q;
    q.push(u);
    v[u] = true;
    while (!q.empty())
    {
        int f = q.front();
        q.pop();
        cout << f << " ";
        for (auto i = g[f].begin(); i != g[f].end(); i++)
        {
            if (!v[*i])
            {
                q.push(*i);
                v[*i] = true;
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;

    v.assign(n, false);
    g.assign(n, vector<int>());

    int a, b;
    for (int i = 0; i < e; i++)
    {
        cin >> a >> b;
        addedge(a, b);
    }

    for (int i = 0; i < n; i++)
    {
        if (!v[i])
            bfs(i);
    }

    
    return 0;
}