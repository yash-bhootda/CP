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
    void solve(TreeNode* root , int tgt , long long int sum , int&count )
    {
        if(root==NULL)
        {
            return;
        }
        sum=sum+root->val;
        //cout<<sum<<endl;
        if(sum==tgt)
        {
            count++;
        }
        solve(root->left , tgt , sum , count);
        solve(root->right , tgt , sum , count);
        
    }
    
    int pathSum(TreeNode* root, int targetSum) {
        int sum=0;
        if(root==NULL)
        {
            return 0;
        }
        solve(root , targetSum, sum , count);
        pathSum(root->left , targetSum);
        pathSum(root->right , targetSum);
        return count ;
        

        
    }
};