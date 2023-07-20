class Solution {
public: 
    vector<vector<string>> ans;
    bool isPalindrome(string& s , int low , int high)
    {
        while(low<high)
        {
            if(s[low++]!=s[high--]) return false;
        }
        return true;
    }
    void solve(int start , vector<string>& temp , string& s)
    {
        if(start>=s.size())
        {
            ans.push_back(temp);
        }

        for(int end= start ; end<s.size();end++)
        {
            if(isPalindrome(s , start , end))
            {
                temp.push_back(s.substr(start , end-start+1));
                solve(end+1 , temp , s);
                temp.pop_back();

            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> temp;
        solve(0,temp,s);
        return ans;
    }
};