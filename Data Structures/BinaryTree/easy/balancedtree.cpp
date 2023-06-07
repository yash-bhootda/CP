class Solution {
public:
    int height(TreeNode* root)
    {
        if(root==NULL) return 0;
        int l=height(root->left);
        int r=height(root->right);
        int ans = max(l , r) + 1;
        return ans;
    }
    pair<int , bool> fastb(TreeNode* root)
    {
        if(root==NULL)
        {
            return {0,true};
        }
        pair<int , bool> left = fastb(root->left);
        pair<int , bool> right = fastb(root->right);
        int h = max(left.first , right.first)+1;
        bool temp = abs(left.first - right.first)<=1;
        if(left.second && right.second && temp)
        {
            pair<int,bool> ans = { h , true};
            return ans;
        }
        else
        {
            pair<int,bool> ans = { h , false};
            return ans;
        }
    }
    bool isBalanced(TreeNode* root) {
        /*if(root==NULL)
        {
            return true;
        }
        bool l= isBalanced(root->left);
        bool r= isBalanced(root->right);
        bool mix = abs(height(root->left)-height(root->right))<=1;
        if(l && r && mix)
        {
            return true;
        }
        else
        {
            return false;
        }*/
        pair<int , bool> ans = fastb(root);
        return ans.second;

    }
};