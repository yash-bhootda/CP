class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int>& temp , vector<int>& arr)
    {
        if(temp.size()==arr.size())
        {
            ans.push_back(temp);
            return;
        }

        for(int i : arr)
        {
            if(find(temp.begin() , temp.end() , i)==temp.end())
            {
                temp.push_back(i);
                solve(temp , arr);
                temp.pop_back();
            }
        }

    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp;
        solve(temp,nums);
        return ans;
    }
};