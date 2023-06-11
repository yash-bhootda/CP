void solve(Node* root , int k , int node , vector<int> v , int &n)
{
    if(root==NULL)
    {
        return;
    }
    v.push_back(root->data);
    
    if(root->data == node)
    {
        int t = v.size();
        if(t<=k)
        {
            n=-1;
            return;
        }
        n = v[t-k-1];
        return;
    }
    solve(root->left , k , node , v , n);
    solve(root->right , k , node , v , n);
    
    v.pop_back();
    
}
bool cal(Node* root , int &k , int node , int &n)
{
    if(root==NULL)
    {
        return false;
    }
    if(root->data == node)
    {
        return true;
    }
    bool p = cal(root->left , k , node , n);
    bool q = cal(root->right , k , node , n);
    if(p||q)
    {
        k--;
        if(k<=0)
        {
            k=INT_MAX;
            n=root->data;
        }
        //return true;
    }
}
int kthAncestor(Node *root, int k, int node)
{
    int n =-1;
    vector<int> v;
    cal(root , k , node , n);
    //cout<<k<<endl;
    return n;
}