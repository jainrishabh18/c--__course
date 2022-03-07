#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    // sc (n+2e+2e) better then adj matrix
    //  e is edge  , n is node , m 
    int n,m;
    cin >> n >> m;
    
    vector<pair<int,int>> adj[n+1];


// if weights also given then we have to take  pair (node , weight corrosponding to that node )

    for(int i=0; i<m;i++)
    {
        int u,v,wt;
        cin>> u >> v >> wt;
        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt});       
    }

    return 0;

}