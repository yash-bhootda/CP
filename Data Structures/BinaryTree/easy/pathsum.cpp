class Solution {
public:
    bool pathsum(TreeNode* root , int t , int sum)
    {

        if(root==NULL)
        {
            return false;
        }
        
        sum=sum+root->val;
        //cout<<sum<<" "<<root->val<<endl;

        if(root->left==NULL && root->right==NULL)
        {
            if(sum==t)
            {
                return true;
            }
        }

        return pathsum(root->left , t , sum) || pathsum(root->right , t , sum);
    }
    bool hasPathSum(TreeNode* root, int t) {
        int sum =0;
        return pathsum(root , t , sum);

    }
};