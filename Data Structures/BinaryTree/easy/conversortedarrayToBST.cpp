class Solution {
public:
    TreeNode* solve(vector<int> nums , int l , int h)
    {
        if(l>h)
        {
            return NULL;
        }
        int mid=(l+h)/2;
        TreeNode* curr = new TreeNode(nums[mid]);
        curr->left=solve(nums , l , mid-1);
        curr->right=solve(nums , mid+1 , h);
        return curr;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
       return solve(nums , 0 , nums.size()-1);
    }
};