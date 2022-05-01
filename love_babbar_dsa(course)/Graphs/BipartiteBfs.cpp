#include<bits/stdc++.h>
using namespace std;


bool bipartiteBFS(int src,int color[],vector<int>adj[])
{
    queue<int>q;
    q.push(src);
    color[src]=1;

    while(!q.empty())
    {
        int node = q.front();
        q.pop();

        for(auto it: adj[node])
        {
            //   fill oposite colour of what it is in previous node say for 1 next node wil 
            //  be filled with 0
            if(color[it]==-1)
            {
                color[it] = 1-color[node];
                q.push(it);

            }
            else if(color[it] == color[node])
            {
                return false;
            }
        }
    }
    return true;
    
}
// v is vertex/nodes
bool isBipartite(int V,vector<int>adj[])
{
    int color[V];
    memset(color,-1,sizeof(color));
    for(int i=0;i<V;i++)
    {
        if(color[i]==-1)
        {
            if(!bipartiteBFS(i,color,adj))
            {
                return false;
            }
        }
    }
    return true;    
}




int main()
{
    // n is nodes m is edges
    int n,m;
    cin >> n >> m;
    vector<int>adj[n];

    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);    
    }

    if(isBipartite(n,adj))
    {
        cout<< " yes bipartite";
    }
    else
    {
        cout<< "no not a bipartute";
    }


    return 0;

}