class Solution
{
public:
    vector<vector<int>> ans;
    void solve(int i, vector<int> &temp, vector<int> &nums, int n)
    {
        ans.push_back(temp);
        for (int j = i; j < n; j++)
        {
            temp.push_back(nums[j]);
            solve(j + 1, temp, nums, n);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<int> temp;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        solve(0, temp, nums, n);
        return ans;
    }
};