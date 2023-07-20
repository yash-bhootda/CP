class Solution {
public:
    bool solve(int index , int tgt , vector<int>& nums , vector<vector<int>> &dp)
    {
        if(tgt==0) return true;

        if(index==0)
        {
            return tgt==nums[index];
        }

        if(dp[index][tgt]!=-1) return dp[index][tgt];

        bool notake = solve(index-1 , tgt , nums , dp);
        
        bool take = false;
        if(nums[index]<=tgt)
        {
            take = solve(index-1 , tgt-nums[index] , nums , dp);
        }

        dp[index][tgt]= take || notake;

        return dp[index][tgt];
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum=0;
        for(int i : nums) sum+=i;
        if(sum%2==0)
        {
            vector<vector<int>> dp(n , vector<int> ((sum/2)+1, -1));
            return solve(n-1 , sum / 2, nums, dp);
        }
        else
        {
            // vector<vector<int>> dp(n , vector<int> ((sum/2)+2, -1));
            // return solve(n-1, (sum/2)+1, nums, dp);
            return false;
        }
        
    }
};