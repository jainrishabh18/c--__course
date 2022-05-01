#include<bits/stdc++.h>
using namespace std;

void findtopo(int node,vector<int> &adj[], vector<int>&vis, stack<int>&st)
	{
	    vis[node]=1;
	    for(auto it: adj[node])
	    {
	        if(!vis[it])
	        {
	            findtopo(it,adj,vis,st);
	        }        
	    }
	    st.push(node);
	    
	}

	//Function to return list containing vertices in Topological order. 
	
	
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int>vis(V,0);
	    stack<int>st;
	    
	    for(int i=0;i<V; i++)
	    {
	        if(!vis[i])
	        {
	            findtopo(i,adj,vis,st);
	        }
	    }
	    vector<int>topo;
	    while(!st.empty())
	    {
	        topo.push_back(st.top());
	        st.pop();
  
	    }
	    return topo;
	    
	}