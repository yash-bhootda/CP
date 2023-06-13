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
    vector<TreeNode*> ans;
    string solve(TreeNode* root , unordered_map<string,int>& mp)
    {
        if(root==NULL)
        {
            return "null";
        }

        string s = to_string(root->val) + "," + solve(root->left , mp) + "," + solve(root->right , mp);

        mp[s]++;

        if(mp[s]==2)
        {
            ans.push_back(root);
        }
        return s;
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        unordered_map<string,int> mp;
        solve(root , mp);
        return ans;

    }
};