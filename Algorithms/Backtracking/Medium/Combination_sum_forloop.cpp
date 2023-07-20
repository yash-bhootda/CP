class Solution
{
public:
    vector<vector<int>> ans;
    void solve(int index, int target, vector<int> &temp, vector<int> &arr)
    {

        cout << target << endl;
        if (target == 0)
        {
            ans.push_back(temp);
            return;
        }
        for (int i = index; i < arr.size(); i++)
        {
            if (arr[i] > target)
                break;

            temp.push_back(arr[i]);
            solve(i, target - arr[i], temp, arr);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<int> temp;
        sort(candidates.begin(), candidates.end());
        solve(0, target, temp, candidates);
        return ans;
    }
};