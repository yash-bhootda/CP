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
    void valid(TreeNode* root , vector<int> &ans)
    {
        if(root->left)
        {
            valid(root->left,ans );
        }
        ans.push_back(root->val);
        if(root->right)
        {
            valid(root->right ,ans);
        }
        
    }
    bool isValidBST(TreeNode* root) {
        if(root==NULL)
        {
            return true;
        }
        vector<int> ans;
        valid(root ,ans);
        cout<<ans.size();
        for(int i =0;i<ans.size()-1;i++)
        {
            if(ans[i]>=ans[i+1])
            {
                return false;
            }
        }
        return true;
        
        
    }
};