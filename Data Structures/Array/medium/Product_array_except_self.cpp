#define pb push_back
#define vi vector<int>
#define si stack<int>
#define vl vector<long long int>
#define pi pair<int, int>
#define pl pair<ll,ll>
#define ll long long int
#define fo(a,b) for(auto i=a;i<b;++i)
#define nfo(a,b) for(auto i=a;i<b;i--)
#define jfo(a,b) for(auto j=a;i<b;j++)
#define njfo(a,b) for(auto j=a;j<b;j--)
#include<iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums)
{
    vi l;
    vi r;
    int left=1;
    int right=1;
    int n = nums.size();
    for(int i =0;i<n;i++)
    {
        left=left*nums[i];
        l.pb(left);
        right=right*nums[n-i-1];
        r.pb(right);
    }
    reverse(r.begin() , r.end());
    vi b;
    b.pb(r[1]);
    fo(1,nums.size()-1)
    {
        b.pb(l[i-1]*r[i+1]);
    }
    b.pb(l[n-2]);
    fo(0,n)
    {
        cout<<b[i]<<endl;
    }
    return b;
}
int main()
{
    int n ;
    cin>>n;
    int t;
    vi b;
    fo(0,n)
    {
        cin>>t;
        b.pb(t);
    }
    vi a;
    a=productExceptSelf(b);
    return 0;
}