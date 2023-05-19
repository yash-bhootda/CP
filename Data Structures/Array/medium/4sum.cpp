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
void fourSum(vector<int> &nums, int target)
{
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    set<vector<int>> s;
    for (int i = 0; i < nums.size(); i++)
    {
        int l1 = i;
        int l2 = l1 + 1;
        int h1 = nums.size() - 1;
        int h2 = h1 - 1;
        while (l2 < h2)
        {
            int sum1 = nums[l1] + nums[l2];
            int sum2 = nums[h2] + nums[h1];
            int a = abs(sum1 + target);
            if (sum1 + sum2 == target)
            {
                s.insert({nums[l1], nums[l2], nums[h2], nums[h1]});
                cout << nums[l1] << " " << nums[l2] << " " << nums[h2] << " " << nums[h1] << endl;
                l2++;
                h2--;
            }
            else if (a < nums[h2])
            {
                h2--;
                h1--;
            }
            else if (a >= nums[h2])
            {
                h1--;
            }
            else
            {
                l2++;
            }
        }
    }
    for (auto i : s)
    {
        ans.push_back(i);
    }
}
int main()
{
    int n, t;
    cin >> n;
    vector<int> a;
    while (n)
    {
        cin >> t;
        a.push_back(t);
        n--;
    }
    int tgt;
    cin >> tgt;
    fourSum(a, tgt);
}

vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    int n = nums.size();
    for (int i = 0; i < n - 3; i++)
    {
        if (i == 0 || nums[i] != nums[i + 1])
        {
            for (int j = i + 1; j < n - 2; j++)
            {
                if (j == i + 1 || nums[j] != nums[j + 1])
                {
                    int left = j + 1;
                    int right = n - 1;
                    long long sum = nums[i] + nums[j] + nums[left] + nums[right];
                    while (left < right)
                    {
                        if (sum == target)
                        {
                            ans.push_back({nums[l1], nums[l2], nums[h2], nums[h1]});
                            while (left < right && nums[left] == nums[left + 1])
                            {
                                left++;
                            }
                            while (left < right && nums[right] == nums[right - 1])
                            {
                                right--;
                            }
                        }
                        else if (sum > target)
                        {
                            target--;
                        }
                        else
                        {
                            left++;
                        }
                    }
                }
            }
        }
    }
}