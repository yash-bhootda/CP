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
int findp(vector<int>& nums , int target)
{
    int l =0;
    int r =0;
    int n =nums.size();
    vi c;
    for(int i =0;i<n-1;i++)
    {
        if(nums[i]>nums[i+1])
        {
            l=(i+1)%n;
            r=i;
            break;
        }
    }
    // cout<<l<<" "; 
    // cout<<r<<" "; 
    while(l!=r)
    {
        if(nums[l]+nums[r]==target)
        {
            cout<<nums[l]<<" "<<nums[r]<<endl;
            return 1;
        }
        if(nums[l+nums[r]>target])
        {
            r=(n+r-1)%n;
        }
        else
        {
            l=(l+1)%n;
        }
        
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    vi a;
    int t;
    fo(0,n)
    {
        cin>>t;
        a.pb(t);
    }
    // cout<<a[0];
    int target;
    cin>>target;
    // int k = findp(a , target);
    if(findp(a , target))
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
    return 0;
}