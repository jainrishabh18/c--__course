#include<bits/stdc++.h>
using namespace std;

bool cycleCheckDFS(int node,int parentNode,vector<int>&vis,vector<int>adj[])
    {
        vis[node]=1;
        for(auto it: adj[node])
        {
            if(!vis[it])
            {
                if(cycleCheckDFS(it,node,vis,adj)) return true;
            }
            else if(it != parentNode)
            {
                return true;
            }
            
        }
    }
    



bool isCycle(int V, vector<int> adj[]) 
    {
        // Code here
        vector<int>vis(V+1,0);
        
        for(int i=0; i<V; i++)
        {
            if(!vis[i])
            {
                if(cycleCheckDFS(i,-1,vis,adj))
                {
                   return true; 
                }
                    
                    
            }
        }
        return false;
    }