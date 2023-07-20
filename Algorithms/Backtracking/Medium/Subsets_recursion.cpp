class Solution {
public:
    vector<vector<int>> ans;
    void solve(int i , vector<int> &temp , vector<int> &nums , int n)
    {
        if(i>=n)
        {
            ans.push_back(temp);
            return;
        }
        //take
        temp.push_back(nums[i]);
        solve(i+1,temp,nums,n);

        //not to take
        temp.pop_back();
        solve(i+1,temp,nums,n);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        int n =nums.size();
        solve(0,temp,nums,n);
        return ans;
    }
};