#include<bits/stdc++.h>
using namespace std;

// used to find minimum spanning tree
// also to find that nodes belong to same or different component



int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        int keys[V];
        int parent[V];
        bool mstSET[V];
        int ans=0;
        for(int i=0; i<V; i++)
        {
            keys[i]=INT_MAX , mstSET[i]=false , parent[i] = -1;
        }
        keys[0]=0;
        parent[0]=-1;
        
        priority_queue< pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>> >pq;
        
        
        // pq(weight , node)
        pq.push({0,0});
        
        while(! pq.empty())
        {
            
            int pqNode = pq.top().second;
            pq.pop();  
            //  ans += pq.top().first;
            
            mstSET[pqNode] = true;
            
            for(auto it :adj [ pqNode ] )
            {
                int adjNode = it[0];
                int weight = it[1];
                
                if(mstSET[adjNode]==false && weight <keys [ adjNode ] )
                {
                    parent[adjNode] = pqNode;
                    pq.push( { keys[adjNode] , adjNode });
                    keys[adjNode] = weight;
                    // ans += weight; 
                }
                
            }
            
                
        }
        for (int i=0; i<V; i++)
        {
            ans += keys[i];
        }
        
        return ans;
        
    }