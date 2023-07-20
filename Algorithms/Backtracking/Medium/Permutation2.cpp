class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int>& temp , unordered_map<int,int> &mp , vector<int>& nums)
    {
        if(temp.size()==nums.size())
        {
            ans.push_back(temp);
            return;
        }

        for(int i=0;i<nums.size();i++)
        {
            if(i!=0 && nums[i]==nums[i-1]) continue;
            if(mp[nums[i]]>0)
            {
                temp.push_back(nums[i]);
                mp[nums[i]]--;
                solve(temp,mp,nums);
                mp[temp[temp.size()-1]]++;
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i : nums)
        {
            mp[i]++;
        }
        sort(nums.begin() , nums.end());
        vector<int> temp;
        solve(temp , mp , nums);
        return ans;
        
    }
};