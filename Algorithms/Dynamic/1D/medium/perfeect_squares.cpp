class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n+1 , INT_MAX);
        vector<int> temp;
        for(int j =1;j<=sqrt(n);j++)
        {
            temp.push_back(j*j);
        }
        dp[0]=0;
        
        // for(int i =1;i<=n;i++)
        // {
        //     for(int j =0;j<temp.size();j++)
        //     {
        //         if(i-temp[j]>=0 && dp[i-temp[j]]!=INT_MAX)
        //         {
        //             dp[i]=min(dp[i] , dp[i-temp[j]]+1);
        //         }
        //     }
        // }

        for(int i =1;i<=n;i++)
        {
            for(int j =1;j*j<=i;j++)
            {
                int temp = j*j;
                {
                    dp[i]=min(dp[i] , dp[i-temp]+1);
                }
            }
        }
        return dp[n];
    }
};