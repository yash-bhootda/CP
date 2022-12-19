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
int maxProduct(vector<int> &nums)
{
    int result = nums[0];
    int maxh=nums[0];
    int minh=nums[0];
    for(int i =1;i<nums.size();i++)
    {
        int curr = nums[i];
        int temp;
        temp = max( curr , max(curr*minh , curr*maxh));
        minh = min ( curr , min(curr*minh , curr*maxh));
        max h = temp;
        result = max(temp , maxh);
        
    }
    return result;
    // int max1=nums[0];
    //      for(int i=0;i<nums.size();i++)
    //      {
    //         int prod=nums[i];
    //         for(int j = i+1;j<=nums.size()-1;j++)
    //         {
    //             max1=max(max1 , nums[j]);
    //             prod=prod*nums[j];
    //             max1=max(max1 , prod);
    //         }
            

    // }
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
    return 0;
}