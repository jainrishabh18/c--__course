#include<bits/stdc++.h>
using namespace std;


vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        stack<long long> s;
        vector<long long> v;
        
        // traversed from end of array because we have take that follow LIFO
        for(int i = n-1; i>=0; i--)
        {
            if( s.size()==0 ){
                v.push_back(-1);
                // s.push(arr[i]);
            }
            else if( s.size() >0 && s.top() > arr[i] ){
                v.push_back(s.top());
            }
            else if(s.size()>0 && s.top()<= arr[i]){
                while(s.size()>0 && s.top() <= arr[i]){
                    s.pop();
                }
                if(s.size() == 0){
                    v.push_back(-1);
                    // s.push(arr[i]);
                }
                else{
                    v.push_back(s.top());
                    // s.push(arr[i]);
                }
            }
            s.push(arr[i]);
        }
        reverse(v.begin(),v.end());
        return v;
    }