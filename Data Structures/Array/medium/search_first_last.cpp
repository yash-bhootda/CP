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
int first(vector<int> nums, int l, int h, int target)
{
    if (h >= l)
    {
        int mid = (l + h) / 2;
        if ((mid == 0 || nums[mid - 1] < target) && nums[mid] == target)
        {
            return mid;
        }
        else if (target > nums[mid])
        {
            return first(nums, mid + 1, h, target);
        }
        else
        {
            return first(nums, l, mid - 1, target);
        }
    }
    return -1;
}
int last(vector<int> nums, int l, int h, int target)
{
    if (h >= l)
    {
        int mid = (l + h) / 2;

        if ((mid == nums.size() - 1 || nums[mid + 1] > target) && nums[mid] == target)
        {
            return mid;
        }
        else if (target > nums[mid])
        {
            return last(nums, mid + 1, h, target);
        }
        else
        {
            return last(nums, l, mid - 1, target);
        }
    }
    return -1;
}
vector<int> searchRange(vector<int> &nums, int target)
{
    vi a;
    a.pb(first(nums, 0, nums.size() - 1, target));
    a.pb(last(nums, 0, nums.size() - 1, target));
    return a;
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
    vi k;
    k = searchRange(arr, target);
    cout << k[0] << " ";
    cout << k[1] << endl;

    return 0;
}