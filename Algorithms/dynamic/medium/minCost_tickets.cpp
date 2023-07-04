class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& c) {
        int n = days.size();
        int m= c.size();
        int final_day= days[n-1];
        vector<int> dp(final_day+1, 0);
        dp[0]=0;
        int j =0;
        for(int i =1;i<=final_day;i++)
        {
            if(i<days[j])
            {
                dp[i]=dp[i-1];
            }
            else
            {
                dp[i]=min(c[0]+dp[i-1] , min(c[1]+dp[max(0,i-7)] , c[2]+dp[max(0,i-30)]));
                j++;
            }
        }
        return dp[final_day];
    }
};