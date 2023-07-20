class Solution {
public:
    int ans=INT_MAX;

    int solve(int i ,int j, vector<vector<int>>& triangle , vector<vector<int>> &dp , int n )
    {
        if(i==n)
        {
            return triangle[i][j];
        }
        if(i>n) return INT_MAX;
        if(j>=triangle[i].size()) return INT_MAX;

        if(dp[i][j]!=-1) return dp[i][j];
        int same = solve( i+1 , j , triangle , dp , n);
        int next  = solve( i+1 , j+1 , triangle , dp , n);

        dp[i][j]=min(same , next)+triangle[i][j];

        return dp[i][j];
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<vector<int>> dp( n , vector<int> (n,-1));
        return solve( 0 , 0 , triangle , dp , n-1);

        //return dp[0][0];
        
    }
};