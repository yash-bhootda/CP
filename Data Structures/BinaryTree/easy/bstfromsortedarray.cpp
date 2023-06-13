/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* solve(vector<int> nums , int l , int h)
    {
        if(l>h)
        {
            return NULL;
        }
        int mid=(l+h)/2;
        cout<<mid<<endl;
        TreeNode* curr = new TreeNode(nums[mid]);
        curr->left=solve(nums , l , mid-1);
        curr->right=solve(nums , mid+1 , h);
        return curr;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
       return solve(nums , 0 , nums.size()-1);
    }
};