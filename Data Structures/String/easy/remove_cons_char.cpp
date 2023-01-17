class Solution{
    public:
    string removeConsecutiveCharacter(string s)
    {
        long long int n = s.length();
        string t;
        long long int i =0;
        while(i<n)
        {
            if(s[i+1]!=s[i])
            {
                t.push_back(s[i]);
            }
            
            i++;
            
        }
        
        return t;
    }
};