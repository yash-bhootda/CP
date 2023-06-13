class Solution {
public:
    int totalsum=0;
    int sum=0;
    void net(TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        }
        sum=sum*10+root->val;
        //cout<<sum<<endl;
        if(root->left==NULL && root->right==NULL)
        {
            totalsum=totalsum+sum;
        }
        net(root->left);
        net(root->right);
        //totalsum=totalsum+sum;
        sum=sum/10;

    }
    int sumNumbers(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        net(root);
        return totalsum;


    }
};