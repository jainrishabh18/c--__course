#include<bits/stdc++.h>
using namespace std;


public:
    //Function to return max value that can be put in knapsack of capacity W.
    
    int  memo[1001][1001];
    Solution()
    {
        memset(memo, -1 , sizeof(memo));
    }
    
    
            
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       
    
        //   0-1 knapsack approach
        // base case 
        if( n==0 || W==0 ){
            return 0;
        }
        
        if(memo[n][W] != -1){
            return memo[n][W];
        }
        // below if and if else implement choice diagram 
        if( wt[n-1] <= W )
        {
            return memo[n][W] = max( val[n-1] + knapSack(W-wt[n-1], wt, val , n-1) ,
            knapSack(W,wt,val,n-1));
        }
        
        else if(wt[n-1]> W)
        {
            return memo[n][W] =knapSack(W,wt,val,n-1);
        }
        
    }