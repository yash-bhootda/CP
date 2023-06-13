class Solution {
public: 
    TreeNode* solve(unordered_map<int,int>& mp , vector<int>& post , int &index , int start , int end)
    {
        if(start>end || index<0)
        {
            return NULL;
        }
        int element = post[index--];

        int pos = mp[element];

        TreeNode* root = new TreeNode(element);

        
        root->right = solve(mp , post , index , pos+1 , end);
        root->left = solve(mp , post , index , start , pos-1);
        return root;


    }
    TreeNode* buildTree(vector<int>& in, vector<int>& post) {
        int index = post.size()-1;
        int n = post.size();
        unordered_map<int , int> mp;
        for(int i = 0 ; i< in.size() ; i++) mp[in[i]]=i;
        return solve(mp , post , index , 0 , n-1 );    
    }
};