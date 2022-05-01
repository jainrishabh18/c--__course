#include<bits/stdc++.h>
using namespace std;

// used to find minimum spanning tree
// kruskal has better tc and sc then primes algo to find mst


// make node 
//  make edges(vector) in kruskal's instead of adj list using  wt ,u ,v (u and v are two nodes connected usig a edge)

// note -> mst cannot have a cycle as it is  minimun spanning tree that means if n nodes then n-1 edges will be there 


struct node
{
    int node1;
    int node2;
    int wt;
    
    node(int first, int second, int weight)
    {
        node1 = first;
        node2 = second;
        wt = weight;
    }
};

// how is it working 
bool comp( node a, node b)
{
    //  this meant to say always consider the smaller wt first
    return a.wt < b.wt;
}

int findparent (int node, vector<int>&parent)
{
    if(node == parent[node])
    {
        return node;
    }
    return  parent[node] = findparent( parent[node] , parent);
    // path compression technique parent[node] = findparent( parent[node] )
}

void unionn(int node1, int node2 ,vector<int>&parent , vector<int>&rank)
{
    int n1 = findparent( node1 , parent);
    int n2 = findparent( node2 , parent);

    if( rank[n1] < rank[n2] )
    {
        // attach node1 to node 2 as node2 rank is higherso attaching to node2

        // below line says now n2 is the parent of n1
        parent[n1] = n2;
    }

    else if( rank[n2] < rank[n1] )
    {
        // attach node1 to node 2 as node2 rank is higherso attaching to node2
        parent[n2] = n1;
    }
    else
    {
        parent[n1] = n2;
        rank[n1]++;
    }

}

int main()
{
    // m is edges
    int  N , m;
    cin >> N >> m;
    vector<node>edges;
    for(int i = 0; i < m; i++)
    {
        int node1, node2, wt;
        cin >> node1 >> node2 >> wt;
        edges.push_back( node(node1,node2,wt) );
    }
    // sort based on weight in ascending Order
    sort( edges.begin(), edges.end(), comp );


    // N is nodes
    vector<int> parent(N);
    //for loop  making every node its parent itself initailly
    for (int i = 0; i < N; i++)
    {
        parent[i] = i;
    }

    // initialized with 0
    vector<int> rank(N,0);
    
    vector<pair<int,int> > MST;
    int cost=0;
    for(auto it: edges)
    {
        if( findparent(it.node1, parent) != findparent(it.node2, parent) )
        // that means node 1 and 2 belong to different component hence we can add it MST
        {
            cost += it.wt;
            MST.push_back({it.node1 , it.node2});
            // union
            unionn(it.node1, it.node2, parent, rank);
        }

    }

    cout << cost << endl;

    for(auto it: MST)
    {
        cout<< it.first << "-" << it.second << endl;
    }
    return 0;

    
}














