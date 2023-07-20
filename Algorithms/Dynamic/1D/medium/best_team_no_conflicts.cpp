class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        int n = scores.size();
        vector<int> dp(n+1 , -1);
        int ans = INT_MIN;
        vector<pair<int,int>> players;
        for(int i =0;i<n;i++)
        {
            players.push_back({ages[i] , scores[i]});
        }
        sort(players.begin() , players.end());
        dp[0]=players[0].second;
        if(n==1)
        {
            return dp[0];
        }
        for(int i =1;i<n;i++)
        {
            dp[i]=players[i].second;
            for(int j =0;j<i;j++)
            {
                if(players[i].second>=players[j].second)
                {
                    dp[i]=max(dp[i] , dp[j]+players[i].second);
                }
            }
            ans=max(ans , dp[i]);
        }
        return ans;
    }
};
