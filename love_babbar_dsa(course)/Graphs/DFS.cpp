#include<bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int>&vis, vector<int>adj[], vector<int>& storeDfs)
{
    storeDfs.push_back(node);
    vis[node]=1;
    for(auto it:adj[node])
    {
        if(!vis[it])
        {
            dfs(it,vis,adj,storeDfs);
        }
    }
}

// v is vertex
// dfs depth first search
vector<int>dfsOfGraph(int V,vector<int>adj[])
{
    vector<int> vis(V+1,0);
    vector<int> storeDfs;

    for(int i=1;i<=V;i++)
    {
        if(!vis[i])
        {
            dfs(i,vis,adj,storeDfs);
        }       
    }
return storeDfs;
    
    
}