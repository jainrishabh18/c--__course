#include<bits/stdc++.h>
// #define INF INT_MAX
using namespace std;


// this algo is used to find shortest distance from src to any node in a undirected graph using weights
//  djisktra's algo
// we solved this ques using priority queue as pq takes out min value first from pq

int main()
{
    int n , m , src;
    cin >> n >> m ;

    vector<pair<int,int>> adj[n+1];

    // adjancecy list with weights
    for(int i=0; i<m ;i++)
    {
        int u , v ,wt;
        cin >> u >> v >> wt;
        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt});
    }

    cin>>src;
    // min heap priority queue     // inside pq (distance , node)
    priority_queue< pair<int,int> , vector<pair<int,int>> , greater<pair<int,int> > > pq;

// distance array intitalized wit   h infinity
    vector<int> distTo(n+1, INT_MAX);

    distTo[src] = 0;
    pq.push({0,src});

    while( !pq.empty() )
    {
        // pq.first is distance 2nd is node
        // adjlist.first is node 2nd is dist
        int pqDist = pq.top().first ;
        int node = pq.top().second ;

        vector<pair<int,int>> :: iterator it;
        for( auto  it: adj[node])
        {
            int adjNode = it.first;
            int adjDist = it.second;

            if( pqDist + adjDist < distTo[adjNode] )
            {
                distTo[adjNode] = pqDist + adjDist;
                // pq(distance , node)
                pq.push( {distTo[adjNode] , adjNode} );
            }
        }
    }

}




//  gfg code here

vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        priority_queue< pair<int,int> , vector<pair<int,int>> , greater<pair<int,int> > > pq;

        // distance array intitalized with infinity
        vector<int> distTo(V+1, INT_MAX);
    
        distTo[S] = 0;
        pq.push({0,S});
    
        while( !pq.empty() )
        {
            // pq.first is distance 2nd is node
            // adjlist.first is node 2nd is dist
            int pqDist = pq.top().first ;
            int node = pq.top().second ;
            pq.pop();
    
            vector<pair<int,int>> :: iterator it;
            for( auto  it: adj[node])
            {
                int adjNode = it[0];
                int adjDist = it[1];
    
                if( pqDist + adjDist < distTo[adjNode] )
                {
                    distTo[adjNode] = pqDist + adjDist;
                    // pq(distance , node)
                    pq.push( {distTo[adjNode] , adjNode} );
                }
            }
        }
        return distTo;
    }