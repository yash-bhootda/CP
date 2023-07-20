class Solution {
public:
    int solve(int i , int j , vector<vector<int>>& dp , vector<vector<int>> & obs)
    {
        if(i==0 && j==0) return 1;
        if(i<0 || j<0)
        {
            return 0;
        }
        
        if(obs[i][j]==1) return 0;
        
        if(dp[i][j]!=-1) return dp[i][j];
        int l = solve(i-1 , j , dp , obs);
        int up = solve(i , j-1 , dp , obs);

        dp[i][j]=l+up;
        return dp[i][j];

    }
    int uniquePathsWithObstacles(vector<vector<int>>& obs) {
        
        //RECURSION + MEMOISATION

        // int n = obs.size();
        // int m = obs[0].size();
        // if(obs[0][0]==1) return 0;
        // if(n==1 && m==1)
        // {
        //     if(obs[0][0]==0) return 1;
        // }
        // vector<vector<int>> dp( n , vector<int> (m , -1));
        // solve(n-1 , m-1 , dp , obs );
        // if(dp[n-1][m-1]==-1 ) 
        // {
        //     return 0;
        // }
        // return dp[n-1][m-1];
        
        int n = obs.size();
        int m = obs[0].size();
        if(n==1 && m==1)
        {
            if(obs[0][0]==0) return 1;
            else return 0;
        }
        vector<vector<int>> dp( n , vector<int> (m , 1));
        for(int i =0 ; i<n;i++)
        {
            for(int j =0;j<m;j++)
            {   
                int up=0 , left=0;

                if(obs[i][j]==1) 
                {
                    dp[i][j]=0;
                    continue;
                }


                if(i==0 && j==0){
                    dp[i][j] = 1;
                }
                else
                {
                    if(i>0) up = dp[i-1][j];
                    if(j>0) left = dp[i][j-1];

                    dp[i][j]= up+left;
                }
                

            }
        }
        return dp[n-1][m-1];
    }
};