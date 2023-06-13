class Solution{
  public:
    //Function to return the maximum sum of non-adjacent nodes.
    pair<int, int> solve (Node* root)
    {
        if(root==NULL)
        {
            return {0,0};
        }
        pair<int,int> l = solve(root->left);
        pair<int,int> r = solve(root->right);
        pair<int , int> ans;
        ans.first = root->data + l.second + r.second;
        ans.second = max(l.first , l.second) + max(r.first , r.second);
        return ans;
    }
    int getMaxSum(Node *root) 
    {
        // Add your code here
        pair<int , int> ans= solve(root);
        return max(ans.first , ans.second);
    }
};