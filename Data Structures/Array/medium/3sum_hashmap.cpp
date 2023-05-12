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

// WILL GIVE TLE

void threeSum(vector<int> &nums)
{
    sort(nums.begin() , nums.end());
    int l =0;
    vector<vector<int>> ans;
    unordered_map <int , int> mp;
    for(int i =0;i<nums.size();i++)
    {
        mp[nums[i]]++;
    }
    for(int i =0;i<nums.size();i++)
    {
        mp[nums[i]]--;
        for(int j=i+1;j<nums.size();j++)
        {
            mp[nums[j]]--;
            int c = -(nums[i]+nums[j]);
            if(mp.find(c)!=mp.end() && mp[c]>0)
            {
                cout<<nums[i]<<" "<<nums[j]<<" "<<c<<endl;
            }
            mp[nums[j]]++;

        }
        mp[nums[i]]++;

    }
    
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
    threeSum(v);

    return 0;
}