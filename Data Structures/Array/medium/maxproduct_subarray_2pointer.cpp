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

// solves 186 out of 188 testcases

int maxProduct(vector<int> &nums)
{
    int l =1;
    int r=1;
    int ans;
    int n = nums.size();
    for(int i =0;i<nums.size();i++)
    {
        if(l==0)
        {
            l=1;
        }
        if(r==0)
        {
            r=1;
        }
        l=l*nums[i];
        cout<<l<<endl;
        r=r*nums[n-i-1];
        ans=max(ans , max(l,r));

    }
    return ans;
}

int main()
{
    vector<int> arr;
    int n;
    cin >> n;
    while (n > 0)
    {
        int t;
        cin >> t;
        arr.pb(t);
        n--;
    }
    int k = maxProduct(arr);
    cout << k;
    return 0;
}