class Solution {
public:
    int ans=0;
    int solve(int index , int amount , vector<int>& c , vector<vector<int>> &dp)
    {
        if(index==0)
        {
            if(amount%c[0]==0) return 1;
            else return 0;
        }

        if(dp[index][amount]!=-1) return dp[index][amount];
        int notake = solve(index-1 , amount , c , dp);
        int take =0;
        if(c[index]<=amount)
        {
            take=solve(index , amount-c[index] , c , dp);
        }

        dp[index][amount]=take+notake;
        return dp[index][amount];
    }
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>> dp( n , vector<int> (amount+1 , -1));

        return solve(n-1 , amount , coins , dp);
    }
};