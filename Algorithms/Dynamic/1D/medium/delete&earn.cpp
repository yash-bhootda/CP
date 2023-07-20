class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        map<int,int> mp;
        int n = nums.size();
        if(n==1)
        {
            return nums[0];
        }
        for(int i =0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int maxVal=mp.rbegin()->first;
        vector<int> dp(maxVal+1,0);
        dp[1]=mp[1]*1;
        for(int i=2;i<=maxVal;i++)
        {   
            dp[i]=max(dp[i-1] , dp[i-2] + mp[i]*i);
        }
        return dp[maxVal];

    }
};