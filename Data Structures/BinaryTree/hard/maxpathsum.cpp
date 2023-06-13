class Solution {
public:
    int cal(TreeNode* root , int &max1)
    {
        if(root==NULL)
        {
            return 0;
        }

        int left = max( 0 , cal(root->left , max1));
        int right = max( 0 , cal(root->right , max1));

        max1 = max(max1 , root->val + left + right);

        return root->val + max(left , right);
    }

    int maxPathSum(TreeNode* root) {
        int max1=INT_MIN;
        cal(root , max1);
        return max1;
    }
};