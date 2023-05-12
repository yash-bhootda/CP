
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void threeSum(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int l = 0;
    int r = nums.size() - 1;
    int n = nums.size() - 1;
    vector<vector<int>> ans;
    set < vector<int> s;
    for (int i = 0; i < nums.size()-2; i++)
    {
        int x = nums[i];
        l = i + 1;
        int h = nums.size() - 1;
        if (i > 0 || nums[i] != nums[i - 1])
        {
            while (h > l)
            {
                if (nums[h] + nums[l] + x == 0)
                {
                    cout << nums[h] << " " << nums[l] << " " << x << endl;
                    s.insert({x, nums[l], nums[h]});
                    while (h > l)
                    {
                        if (nums[l] == nums[l + 1])
                        {
                            l++;
                        }
                    }
                    while (h > l)
                    {
                        if (nums[h] == nums[h - 1])
                        {
                            h--;
                        }
                    }
                    l++;
                    h--;
                }
                else if (nums[h] + nums[l] + x > 0)
                {
                    h--;
                }
                else
                {
                    l++;
                }
            }
        }
    }
    for (auto i : s)
    {
        ans.push_back(v);
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
