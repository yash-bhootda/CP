class Solution {
public:
    vector<vector<int>> ans;
    void solve(int index , int target , vector<int> &temp , vector<int> &arr)
    {
        if(index==arr.size())
        {   
            if(target==0)
            {
                ans.push_back(temp);
            }
            return;
        }

        if(arr[index]<=target)
        {
            temp.push_back(arr[index]);
            solve(index , target-arr[index] , temp , arr);
            temp.pop_back();
        }
        solve(index+1 , target , temp , arr);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        sort(candidates.begin() , candidates.end());
        solve(0,target , temp, candidates);
        return ans;
    }
};