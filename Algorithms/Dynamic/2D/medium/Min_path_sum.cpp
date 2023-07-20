class Solution {
public:
    int ans = INT_MAX;
    int solve(int i , int j , vector<vector<int>>& grid , vector<vector<int>>& dp)
    {
        if(i==0 && j==0)
        {
            return grid[i][j];
        }
        if(i<0 || j<0) return INT_MAX;

        if(dp[i][j]!=-1) return dp[i][j];
        int left = solve(i , j-1 , grid , dp);
        int up = solve(i-1 , j , grid , dp );

        dp[i][j]=min(left , up) + grid[i][j];


        return dp[i][j];
    }
    int minPathSum(vector<vector<int>>& grid) {

        int n = grid.size();
        int m = grid[0].size();
        if(n==1 && m==1)
        {
            return grid[0][0];
        }
        vector<vector<int>> dp( n , vector<int> (m , -1));
        int count=0;
        solve(n-1 , m-1 , grid , dp );
        return dp[n-1][m-1];        
    }
};