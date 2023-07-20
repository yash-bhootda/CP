class Solution {
public:
    vector<vector<int>> ans;
    void solve(int index , vector<int> &temp , int n , int k)
    {
        if(temp.size()==k)
        {
            ans.push_back(temp);
            return;
        }
        for(int i = index;i<=n;i++)
        {
            temp.push_back(i);
            solve(i+1 , temp , n , k);
            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;
        solve(1 , temp , n , k);
        return ans;
        
    }
};