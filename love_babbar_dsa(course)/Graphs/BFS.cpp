#include<bits/stdc++.h>
using namespace std;

vector<int> bfsOfGraph(int V, vector<int> adj[])
{
    vector<int> bfs;
    vector<int> vis(V+1,0);
//  v is vertex here (nodes)
    for(int i = 1; i <= V; i++)
    {
        // to know how many components of graph are there check how many times the  next if has run

        // basically when queue will get empty the above for loop will run and the below if will run only for  not visited array  so we
        // will get to know the no of components.
        if(!vis[i])
        {
            // pushing first node value into queue
            queue<int> q;
            q.push(i);
            // vis is a 1D array where we are marking the i'th value we have traversed as 1 from 0
            vis[i] = 1;
            // loop will run till queue is not empty
            while(!q.empty())
            {
                // now removing the first node from array printing it and pushing its adjacent node into queue
                int node = q.front();
                q.pop();
                bfs.push_back(node);
                // pushing adjacent node in array
                for(auto it : adj[node])
                {
                    if(!vis[it])
                    {
                        q.push(it);
                        vis[it] = 1;
                    }
                }
            }
        }
        
        
    }
    return bfs;


}



