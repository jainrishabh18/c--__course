#include<bits/stdc++.h>
using namespace std;

bool checkCycle(int sNode ,vector<int>&vis,vector<int>adj[])
{
    // for understanding how it is detecting cycle in graph refer to copy

    //  the main  concept here is we are taking--> node and  "par" as(parent node) so moving ahead we are
    //  marking every node we have visited and if comes a time that we have alreaddy marked that node and it is als not a "par" node then graph is cyclic (par 
    // is basically storing  the prev node or the parent node of the adj node 


    queue<pair<int,int>>q;
    vis[sNode]=1;
    q.push({sNode,-1});
    while(!q.empty())
    {
        int node = q.front().first;
        int par = q.front().second;
        q.pop();
        // q.push({node,par});
        // vis[i]=1;
        for(auto it: adj[node])
        {    
            if(!vis[it])
            {
                q.push({node,it});
                vis[it]=true;    
            }
            else if(it != par)
            {
                return true;
            }
        }
    }
}

bool isCycle(int V,vector<int>adj[])
{
    vector<int>vis(V+1,0);
    for(int i=1;i<=V;i++)
    {
        if(!vis[i])
        {
            if(checkCycle(i,vis,adj))
                return true;
        }
    }
    return false;
}