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
    int count =0;
    int ans=INT_MIN;
    //THIS ALSO WORKS
    /*
    void depth(TreeNode* root)
    {
        if(root==NULL)
        {
            ans=max(count , ans);
            return;
        }
        count++;
        depth(root->left);
        depth(root->right);
        count--;
    }
    int maxDepth(TreeNode* root) {
        depth(root);
        return ans;
        
    }*/

    //This goes on till the very end until , both left and right ==NULL then the value is max(0,0)+1 , 
    //so at the very last node the height become 1 and then fir udhar se it starts increasing.
    int maxDepth(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        int ans = max(left ,right)+1;
        return ans;
        
    }
};