class Solution {
public:
    int dp_climb(int n , vector<int> & dp)
    {
        if(n<=3)
        {
            return n;
        }
        if(dp[n]!=-1)
        {
            return dp[n];
        }
        dp[n]=dp_climb(n-1,dp)+dp_climb(n-2,dp);
        return dp[n];
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return dp_climb(n,dp);
    }
};