
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        unordered_map<char , int> mp;
        for(int i =0;i<p.size();i++)
        {
            mp[p[i]]++;
        }
        int count=0 , start=0;
        for(int end =0;end<s.size();end++)
        {
            if(mp[s[end]]>0)
            {
                count++;
               
            }
            mp[s[end]]--;
            if(count==p.size()) 
            {
                while(start<end && mp[s[start]]<0)
                {
                    mp[s[start]]++;
                    start++;
                }
                if(end-start+1==p.size())
                {
                    ans.push_back(start);

                }
                mp[s[start]]++;
                start++;
                count--;
            }
            
        }
        return ans;
    }
};