//  Disjoin set are used for knowing whether two or more nodes belong to same component or not .



#include<bits/stdc++.h>
using namespace std;


int parent[100000];
int rank[100000];

int n;
void makeset()
{
    for(int i=1 ; i<=n; i++)
    {
        parent[i] = i;
        rank[i]=0;
    }
}


// every node's parent initally is the node itself say node 1's parent is 1
//  now say node 1 and 2 are there after there union 2th node  has parent 1
// we are finding parent of node 2 here(that is 1)
// now we will see how  recursion work here

int findparent(int node)
{
    if( node = parent[node] )   // 2 = parent[2] 
    {
        return node;            // in parent[2] = is 1 so base condition is false 
    }
    return parent[node]= findparent( parent[node] ); 
                                        // now we again run findpar(parent[2])  now parent[2] = 1 so findparent(1) will run 
                                        // so  parent of 1 is 1 hence ans is 1

}


void union(int n1,int n2)
{
    int node1 = findparent(n1);
    int node2 = findparent(n2);

    if( rank[node1] < rank[node2] )
    {
        parent[node1] = node2;
    }

    else if( rank[node2] < rank[node1] )
    {
        parent[node2] = node1;
    }

    else // rank[node1] = rank[node2];
    {
        parent[node1] = node2;   // node2  is the node jisme humne node  add kari hai  so node2 ki rank++ hogi
        rank[node2]++;
    }


}

int main()
{
    int m;
    while(m--)
    {
        int n , M;
    }
}