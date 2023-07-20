class Solution {
public:
    int solve ( int index1 , int index2 , string &s1 , string &s2 , vector<vector<int>>& dp)
    {
        if(index1<0 || index2<0) return 0;

        if(dp[index1][index2]!=-1) return dp[index1][index2];
        if(s1[index1]==s2[index2])
        {
            dp[index1][index2]= 1+ solve(index1-1 , index2-1 , s1 , s2 , dp);
        }
        else
        {
            dp[index1][index2]= max(solve(index1-1 , index2 , s1 , s2 , dp)  , solve(index1 , index2-1 , s1 , s2 , dp));
        }

        return dp[index1][index2];

    }
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();

        // vector<vector<int>> dp(n , vector<int> (m , -1));
        // return solve(n-1 , m-1 , text1 , text2 , dp);

        //TABULATION
        vector<vector<int>> dp(n+1 , vector<int> (m+1 , -1));
        for(int i =0;i<=n;i++) dp[i][0]=0;
        for(int i =0;i<=m;i++) dp[0][i]=0;

        for(int i=1;i<=n;i++)
        {
            for(int j =1;j<=m;j++)
            {
                if(text1[i-1]==text2[j-1]) dp[i][j]=1+dp[i-1][j-1];

                else dp[i][j]=max(dp[i-1][j] , dp[i][j-1]);
            }
        }
        return dp[n][m];
        
    }
};