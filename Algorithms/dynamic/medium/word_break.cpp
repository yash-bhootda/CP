class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<bool> dp(s.size()+1 , false);
        dp[0]=true;

        unordered_map<string , int> mp;
        for(auto i : wordDict)
        {
            mp[i]++;
        }   
        for(int i =1;i<=s.size();i++)
        {
            for(int j =0;j<i;j++)
            {
                if(dp[j])
                {
                    string temp = s.substr( j , i-j);
                    if(mp.find(temp)!=mp.end())
                    {
                        dp[i]=true;
                        break;
                    }
                }
            }
        }
        return dp[s.size()];
    }
};