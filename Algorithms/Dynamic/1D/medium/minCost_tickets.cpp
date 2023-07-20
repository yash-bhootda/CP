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

class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n = days.size();
        int finalday=days[n-1];
        vector<int> dp(finalday+1 , -1);
        dp[0]=0;
        for(int i =1;i<=finalday;i++)
        {
            if(find(days.begin() , days.end() , i)== days.end())
            {
                dp[i]=dp[i-1];
                continue;
            }
            dp[i] =  min(dp[max(0,i-1)]+costs[0] , min(dp[max(0,i-7)] + costs[1], dp[max(0,i-30)] + costs[2] ));
        }

        return dp[finalday];
    }
};