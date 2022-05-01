#include<bits/stdc++.h>
using namespace std;


long long trappingWater(int arr[], int n)
    {
        // code here
        int max_L[n];
        int max_R[n];
        
        // maximum from left side of arr[i]
         max_L[0] = arr[0];
        for(int i=1; i<n; i++){
            max_L[i] = max(max_L[i-1],arr[i]);
        }
        // maximum from right side of arr[i]
         max_R[n-1] = arr[n-1];
        for(int i=n-2; i>=0; i--){
            max_R[i] = max(max_R[i+1],arr[i]);
        }
        
        int waterLevel[n];
        long long sum = 0;
        for(int i=0; i<n; i++){
            waterLevel[i] = min(max_L[i],max_R[i]) - arr[i];
            sum += waterLevel[i];
        }
        
        return sum;
        
    }