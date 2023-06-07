class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        vector<int> temp;
        queue<TreeNode*> q;
        if(root==NULL)
        {
            return ans;
        }
        q.push(root);
        q.push(NULL);
        while(!q.empty())
        {
            TreeNode* curr = q.front();
            q.pop();
            if(curr==NULL)
            {
                ans.push_back(temp);
                temp.clear();
                if(!q.empty())
                {
                    q.push(NULL);
                }
            }
            else
            {
                temp.push_back(curr->val);
                cout<<curr->val<<endl;
                if(curr->left)
                {
                    q.push(curr->left);
                }
                if(curr->right)
                {
                    q.push(curr->right);
                }
            }
        }
        return ans;
        
    }
};