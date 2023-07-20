#include <bits/stdc++.h> 
void solve(unordered_map<int , list<int>> &adj , unordered_map<int , bool> &visit , vector<int> &ans , int node)
{
    queue<int> q;
    q.push(node);
    visit[node]=true;

    while(!q.empty())
    {
        int front = q.front();
        q.pop();
        ans.push_back(front);

        for(auto i : adj[front])
        {
            if(!visit[i])
            {
                q.push(i);
                visit[i]=true;
            }
        }
    }
}
vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    // Write your code here
    unordered_map<int , list<int>> adj;
    unordered_map<int , bool> visit;
    vector<int> ans;

    for(int i =0; i<edges.size();i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i =0;i<vertex;i++)
    {
        if(!visit[i])
        {
            solve(adj, visit, ans, i);
        }
    }
    return ans;

    //BFS Traversal
}