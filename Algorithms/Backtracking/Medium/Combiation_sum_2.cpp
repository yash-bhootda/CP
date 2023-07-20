class Solution {
public:
    vector<vector<int>> ans;
    void solve(int index , vector<int>& temp , vector<int> &arr , int t)
    {
        
        if(t==0)
        {
            ans.push_back(temp);
            return;
        }
        for(int i = index;i<arr.size();i++)
        {
            if(i>index && arr[i]==arr[i-1]) continue;

            if(arr[i]>t) break;

            temp.push_back(arr[i]);
            solve(i+1 , temp , arr , t-arr[i]);
            temp.pop_back();
        }

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> temp;
        sort(candidates.begin() , candidates.end());
        solve(0,temp,candidates , target);
        map<vector<int> , int> mp;
        vector<vector<int>> curr;
        for(auto i: ans)
        {
            mp[i]++;
        }
        for(auto i:mp)
        {
            curr.push_back(i.first);
        }
        return curr;
    }
};