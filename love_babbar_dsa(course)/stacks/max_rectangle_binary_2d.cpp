#include<bits/stdc++.h>
using namespace std;


// minor mistake somewhere not accepted on gfg yet

vector<int> nsl(vector<int> v)
    {
        stack<pair<int,int>>st;
        vector<int>left;
        int n = v.size();
        for(int i=0; i < n; i++){
            if(st.size() == 0){
                left.push_back(0);
            }
            else if(st.size()>0 && st.top().first< v[i]){
                left.push_back( st.top().second );
            }
            else if( st.size() > 0  && st.top().first >= v[i] )
            {
                while(st.size() > 0  && st.top().first >= v[i]){
                    st.pop();
                }
                if( st.size() == 0 ){
                    left.push_back(0);
                }
                else{
                    left.push_back( st.top().second );
                }
                
            }
            st.push({v[i] , i});
        }
        return left;
        
        // while( !st.empty() )
        // {
        //     st.pop();
        // }
    }
    
    // while( !st.empty() ){
    //     st.pop();
    
    
    
    vector<int> nsr(vector<int> v )
    {
        stack<pair<int,int>>st;
        vector<int>right;
        int n = v.size();
        for(int i=n-1; i>=0; i++)
        {
            if(st.size() == 0){
                right.push_back(n);
            }
            else if(st.size()>0 && st.top().first < v[i]){
                right.push_back( st.top().second );
            }
            else if( st.size() > 0  && st.top().first >= v[i] )
            {
                while(st.size() > 0  && st.top().first >= v[i]){
                    st.pop();
                }
                if( st.size() == 0 ){
                    right.push_back(n);
                }
                else{
                    right.push_back( st.top().second );
                }
                
            }
            st.push({v[i],i});
        }
        reverse( right.begin(),right.end() );
        return right;
    }
    
    int MAH(vector<int>v)
    {
       int n = v.size(); 
       vector<int> right = nsr(v);
       vector<int> left = nsl(v);
       
       int maxi = INT_MIN;
       
        for(int i=0; i<n; i++)
        {
            right[i] = right[i] - left[i] - 1; //storing width in  right array only
            right[i] = right[i]*v[i];
            if(maxi < right[i]){
                maxi = right[i];
            }
            return maxi;
        }
    } 
    
    // finding width
    
    
    
    int maxArea(int M[MAX][MAX], int n, int m) 
    {
        // Your code here
        vector<int>v;
        // putting the first row and first coloum as it is in vector below
        
        for(int j=0; j<m; j++){
            v.push_back(M[0][j]);
            }
            int mx = max(mx ,MAH(v));
        
        
        for(int i=1; i<n; i++){
            // we are updating for loop at every iteration of for loop by adding the previous 1D array to it
            for(int j=0; j<m; j++)
            {
                if(M[i][j] == 0){
                    v[j] = 0;
                }
                else {
                    v[j] = v[j] + M[i][j];
                }
                
                
            }
            int mx = max( mx ,MAH(v) );
        }
        return mx;
        
        
    }