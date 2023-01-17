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
int trap1(vector<int> &a)
{
    int n = a.size();
    vi left;
    vi right;
    left.pb(a[0]);
    right.pb(a[0]);
    int max1 = -1;
    int max2 = -1;
    int p = 0;
    for (int i = 1; i < n; i++)
    {

        left.push_back(max(left[i - 1], a[i]));
        max2 = max(max2, a[n-i]);
        right.pb(max2);
    }
    for (int i = n - 1; i >= 0; i--)
    {

        max2 = max(max2, a[i]);
        right.pb(max2);
    }
    reverse(right.begin(), right.end());
    // fo(0,n)
    // {
    //     cout<<right[i];
    // }
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        
        sum = sum + (min(left[i], right[i]) - a[i]);
 
    }
    return sum;
}
int main()
{

    int n;
    cin >> n; // taking size of vector from user
    int a;
    vector<int> v;
    // we can also mention size here like
    // vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    // cout<<v[2];
    int k =trap1(v);

    return 0;
}