class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        for(int i =0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                return true;
            }
        }
        return false;
    }
};