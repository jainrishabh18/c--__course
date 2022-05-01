#include<bits/stdc++.h>
using namespace std;


bool checkCycle(int node, vector<int>&vis,vector<int>&visDfs,vector<int>adj[])
{
    vis[node]=1;
    visDfs[node]=1;

    for(auto it :adj[node])
    {
        if(!vis[it])
        {
            if(checkCycle(it,vis,visDfs,adj))
            {
                return true;
            }    
        }
        else if(visDfs[it])
        {
            return true;
        }

    }
    visDfs[node]=0;
    return false;
}

bool isCycleDirected(int N, vector<int>adj[])
{
    vector<int>vis(N,0);
    vector<int>visDfs(N,0);

    for(int i=0;i<N;i++)
    {
        if(!vis[i])
        {
            if(checkCycle(i,vis,visDfs,adj))
            {
                return true;
            }
        }
    }
    return false;
}

