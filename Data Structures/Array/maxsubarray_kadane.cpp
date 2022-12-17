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

int maxSubArray(vector<int> &nums)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int sum , count =0;
    int n = nums.size();
    int max = INT_MIN;
    int max_here=0;
    int t = *min_element(nums.begin() , nums.end());
    int m = *max_element(nums.begin() , nums.end());
    int p = t+m/2;
    for (int i = 0; i < n; i++)
    {
        count++;
        max_here=max_here + nums[i];
        if(max_here>max)
        {
            max=max_here;
        }
        if(max_here<p)
        {
            max_here=0;
            
        }
        
    }
    if(count ==0)
    {
        return m ;
    }
    
    return max;
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
    int k = maxSubArray(arr);
    cout << k;
}