#include<bits/stdc++.h>
using namespace std;

/*
code flow --> find nearest smallest right and nearest smallest left and using vector and stack<pair<int,int>> store its indexes 
        --> now reduce right index from left index and do -1 also to get the width of histogram   width = nsr array index - nsl array index - 1
        --> find area of histogram using area[i]= width[i]*arr[i] to get area for every array value
        --> but instead of making extra storage for width and area we have modified right array and stored and returned max histogram from it only

    in short --> nsr -> right 
            --> nsl -> left
            --> width -> right - left -1
            --> area --> width[i]* arr[i]
            --> max of area
*/

    //Function to find largest rectangular area possible in a given histogram.
    
    vector <long long> nsl(long long arr[], int n)
        {
            stack<pair<long long,long long>>st;
            vector<long long> left;
           // Your code here
           for(long long i=0; i<n; i++){
               
               if(st.size()==0){
                   left.push_back(-1);
                   
               }
               else if(st.size()>0 && st.top().first < arr[i]){
                   left.push_back(st.top().second);
               }
               else if(st.size()>0 && st.top().first >= arr[i]){
                   while(st.size()>0 && st.top().first >= arr[i]){
                       st.pop();
                   }
                   if(st.size()==0){
                       left.push_back(-1);
                   }
                   else{
                       left.push_back(st.top().second);
                   }
               }
               st.push( {arr[i], i} );
           }
           return left;
        }
        
        vector <long long> nsr(long long arr[], int n)
        {
            stack<pair<long long,long long>>st;
            vector<long long> right;
           // Your code here
           for(long long i=n-1; i>=0; i--)
           {
               
               if(st.size()==0){
                   right.push_back(n);
                   
               }
               else if(st.size()>0 && st.top().first < arr[i]){
                   right.push_back(st.top().second);
               }
               
               else if(st.size()>0 && st.top().first >= arr[i]){
                   
                   while(st.size()>0 && st.top().first >= arr[i])
                   {
                       st.pop();
                   }
                   if(st.size()==0){
                       right.push_back(n);
                   }
                   else{
                       right.push_back(st.top().second);
                   }
               }
               st.push( {arr[i], i} );
               
           }
           reverse(right.begin(),right.end());
           return right;
        
        }
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        vector<long long> left = nsl(arr,n);
        vector<long long> right = nsr(arr,n);
        // long long width[n];
        // long long area[n];
        
        // so the code was not running as it was excedding memory for test case 37 whos input was very large
        //  jaise he apan ne width and area array ko comment karke right vector ko pehla 
        // se he bana tha use update karke value store kari toh all test case passed
        long long i;
        long long maxi=INT_MIN;
        
        //obtaining area by calculating width
       
       // dont use extra vectors to calculate width, memory overflows
        for(i=0; i<n; i++)
        {
            
            right[i] = right[i] - left[i] -1;
            right[i] = right[i]*arr[i];
            if(right[i]>maxi){
                maxi = right[i];
            }
            // maxi = max(maxi,area[i]);
            
         }
         return maxi;
    }