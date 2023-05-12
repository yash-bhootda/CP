
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
    for (int i = 0; i < n; i++)
    {
        int x = nums[i];
        l = i + 1;
        int h = nums.size() - 1;
        int tgt = -x;
        vector<int> a;
        while (h > l)
        {
            if (nums[h] + nums[l] + x == 0)
            {
                cout << nums[h] << " " << nums[l] << " " << x << endl;
                a.push_back(x);
                a.push_back(nums[h]);
                a.push_back(nums[l]);
                break;
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
        s.insert(a);
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

