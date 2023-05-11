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

// int yrb(vector<int>&nums, int l, int h, int target)
// {
//     if (l > h)
//     {
//         return -1;
//     }
//     int mid = (l + h) / 2;
//     if (nums[mid] == target)
//     {
//         return mid;
//     }
//     if (nums[l] <= nums[mid])
//     {
//         if (target >= nums[l] && target <= nums[mid])
//         {
//             return yrb(nums, l, mid - 1, target);
//         }
//         else
//         {
//             return yrb(nums , mid+1 ,h , target );
//         }
//     }
//     else
//     {
//         if (target >= nums[mid+1] && target <= nums[h])
//         {
//             return yrb(nums, mid+1, h , target);
//         }
//         else
//         {
//             return yrb(nums, l, mid - 1, target);
//         }

//     }
// }
// int search(vector<int> &nums, int target)
// {
//     int t = yrb(nums, 0, nums.size()-1, target);
//     return t;
// }
int bsearch(vector<int> &nums, int l, int h, int target)
{
    if (l > h)
    {
        return -1;
    }
    int m = (l + h) / 2;
    if (target == nums[m])
    {
        return m;
    }
    if (target < nums[l] && nums[m] > nums[l])
    {
        return bsearch(nums, mid + 1, h, target);
    }
    else
    {
        return bsearch(nums, l, mid - 1, target);
    }
}
int search(vector<int> &nums, int target)
{
    return bsearch(nums, 0, nums.size() - 1, target);
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
    int target;
    cin >> target;
    int k = search(arr, target);
    cout << k;
    return 0;
}