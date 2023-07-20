class Solution {
public:
    int solve(int i , int j , vector<vector<int>> &dp)
    {
        if(i==0 && j==0) return 1;
        if(i<0 || j<0) return 0;

        if(dp[i][j]!=-1) return dp[i][j];
        int l = solve(i-1 , j , dp);
        int up = solve(i , j-1 , dp);
        dp[i][j]=l+up;
        return l+up;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>( n , 1));
        //return solve(n-1, m-1 , dp);
        if(m<2 || n<2)
        {
            return 1;
        }

        dp[0][0]=1;
        dp[0][1]=1;
        dp[1][0]=1;
        
        for(int i =1;i<m ;i++)
        {
            for(int j = 1;j<n;j++)
            {
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
        return dp[m-1][n-1];
    }
};