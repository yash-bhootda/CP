void dfs(unordered_map<int , list<int>> &adj , int node , unordered_map<int , bool> &visit , vector<int> &temp)
{
    temp.push_back(node);
    visit[node]=true;
    for(int j : adj[node])
    {
        if(!visit[j])
        {
            dfs(adj , j , visit , temp);
        }
    }
}
vector<vector<int>> depthFirstSearch(int v, int e, vector<vector<int>> &edges)
{
    // Write your code here
    unordered_map<int , list<int>> adj;
    unordered_map<int , bool> visit;
    for(int i = 0; i<edges.size();i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<vector<int>> ans;

    for(int i = 0 ;i<v;i++)
    {
        vector<int> temp;
        if(!visit[i])
        {
            dfs(adj , i , visit , temp);
            ans.push_back(temp);
        }
    }
    return ans;
}