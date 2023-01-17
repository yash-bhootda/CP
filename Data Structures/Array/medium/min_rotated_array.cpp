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
int findMinSearch(vector<int>&nums , int l , int h , int &minn)
{
    while(h>l)
    {
        int mid = (l+h)/2;
        
        if(nums[mid]<nums[h])
        {
            h=mid;
        }
        else
        {
            l=mid;
        }
        
    }
    return minn;
    
}
int findMin(vector<int> &nums)
{
    int minn = INT_MAX;
    return findMinSearch(nums , 0 , nums.size()-1 , minn);
}
int main()
{
    int n;
    cin >> n;
    vi arr;
    while (n > 0)
    {
        int t;
        cin >> t;
        arr.pb(t);
        n--;
    }
    int k = findMin(arr);
    cout<<k;
    return 0;
}