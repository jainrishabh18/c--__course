#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // sc (n+2e)
    //  e is edge  , n is node ,
    int n,m;
    cin >> n >> m;
    
    vector<int> adj[n+1];
// unidirectional adjacentlist
    for(int i=0; i<m;i++)
    {
        int u,v;
        cin>> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);       
    }
//  directional adjacent list
     for(int i=0; i<m;i++)
    {
        int u,v;
        cin>> u >> v;
        adj[u].push_back(v);
        // adj[v].push_back(u);       
    }



    return 0;

}