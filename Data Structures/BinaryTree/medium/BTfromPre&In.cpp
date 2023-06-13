class Solution {
public:
    
    TreeNode* solve(vector<int>& pre , unordered_map<int,int>& mp , int &index , int start , int end)
    {
        if(index >= pre.size() || start>end)
        {
            return NULL;
        }
        int element = pre[index++];

        int pos = mp[element];

        TreeNode* root = new TreeNode(element);

        root->left = solve( pre , mp , index , start , pos-1);
        root->right = solve( pre , mp , index , pos+1 , end);

        return root;
    }
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        int index=0;

        unordered_map<int,int>mp;
        
        for(int i=0;i<in.size();i++) mp[in[i]]=i;
        
        TreeNode* ans = solve(pre , mp , index , 0 , pre.size()-1);
        return ans;
    }
};