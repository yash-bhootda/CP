class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode* , int> > q;
        q.push({root , 1});
        long long int ans = 1;
        while(!q.empty())
        {
            TreeNode* temp=q.front().first;
            long long int start = q.front().second;
            long long int end = q.back().second;
            long long int size= q.size();
            //q.pop();
            for(int i =0;i<size;i++)
            {
                TreeNode* curr = q.front().first;
                long long int currindex = q.front().second - start;
                q.pop();
                if(curr->left)
                {
                    q.push({curr->left , 2*currindex});
                }
                if(curr->right)
                {
                    q.push({curr->right , 2*currindex+1});
                }
            }
            ans=max(ans , end-start+1);
            
        }
        
        return ans;
    }
};