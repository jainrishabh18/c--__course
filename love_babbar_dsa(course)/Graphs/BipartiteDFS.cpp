#include <bits/stdc++.h>
using namespace std;


bool bipartiteDFS(int node,vector<int>adj[],int color[])
    {
        if(color[node]==-1)
        {
            color[node]=1;
        }
        
        for(auto it: adj[node])
        {
            if(color[it]==-1)
            {
             //   fill oposite colour of what it is in previous node say for 1 next node wil 
             //  be filled with 0
                color[it]=1-color[node];
                if(!bipartiteDFS(it,adj,color))
                    return false;
                
            }
            else if(color[it] == color[node])
            {
                return false;
            }
            
        }
           
        
        return true;
    }

	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    int color[V];
	    memset(color,-1 ,sizeof(color));
	    for(int i=0; i<V; i++)
	    {
	        if(color[i] == -1)
	        {
	            if(!bipartiteDFS(i,adj,color))
	            {
	                return false;
	            }
	        }
	        
	    }
	    return true;
	}