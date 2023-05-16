class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char , int> mp;
        for(int i =0;i<s1.size();i++)
        {
            mp[s1[i]]++;
        }
        int start=0 , count =0;
        for(int end =0;end<s2.size();end++)
        {
            if(mp[s2[end]]>0)
            {
                count++;
            }
            mp[s2[end]]--;
            if(count==s1.size())
            {
                while(start<end && mp[s2[start]]<0)
                {
                    mp[s2[start]]++;
                    start++;
                }
                if(end-start+1==s1.size())
                {
                    return true;
                }
                mp[s2[start]]++;
                start++;
                count--;
            }
        }
        return false;
    }
};