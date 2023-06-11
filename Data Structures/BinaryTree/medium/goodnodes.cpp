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
    void solve(TreeNode* root , int &count , int currmin)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->val>=currmin)
        {
            currmin=root->val;
            count++;
        }
        solve(root->left , count , currmin);
        solve(root->right , count , currmin); 

    }
    int goodNodes(TreeNode* root) {
        int count =0 , currmin=INT_MIN;
        solve(root , count , currmin);
        return count;
        
    }
};