class Solution {
public:
    //recursion + memoization approach
    int dp_min(vector<int>& c , vector<int> &dp , int n)
    {
        if(n==0)
        {
            return c[0];
        }
        if(n==1)
        {
            return c[1];
        }
        if(dp[n]!=-1)
        {
            return dp[n];
        }

        dp[n]=min(dp_min(c,dp,n-1) , dp_min(c,dp,n-2)) + c[n];
        return dp[n];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n =cost.size();
        vector<int> dp(n+1 , -1);
        //tabulation approach
        dp[0]=0;
        dp[1]=0;
        int sum=0;
        for(int i =2;i<=n;i++)
        {

            dp[i]=min(cost[i-1]+dp[i-1] , cost[i-2] + dp[i-2]);
        }

        //tabulation approach
        dp[0]=cost[0];
        dp[1]=cost[1];
        int sum=0;
        for(int i =2;i<n;i++)
        {

            dp[i]=cost[i]+min(dp[i-1] , dp[i-2]);
        }
        return min(dp[i-1] , dp[i-2]);

        //recursion + memoization approach
        //return min(dp_min(cost , dp , n-1) , dp_min(cost,dp,n-2));
        
    }
};