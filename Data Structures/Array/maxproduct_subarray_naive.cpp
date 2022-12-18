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
    int max1 = nums[0];
    for (int i = 0; i < nums.size(); i++)
    {
        int prod = nums[i];
        for (int j = i + 1; j <= nums.size() - 1; j++)
        {
            max1 = max(max1, nums[j]);
            prod = prod * nums[j];
            max1 = max(max1, prod);
        }
    }
    return max1;
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