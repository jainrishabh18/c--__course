#include <bits/stdc++.h>
using namespace std;

// intutuion to solve is the foundation problem of stack is nearest greates element to left 
// here we have taken pair of stack and stored value as well as its index in stack 
// in vector instead of value of nearest greatest to left we have stored its index 
// and then to find consecutive smaller value towards its left we reduced NGL index - arr index


// my approach before coming to this ans was instead take a count vector and store count of no of values smaller to the one we are finding out

vector <int> calculateSpan(int price[], int n)
    {
        stack<pair<int,int>>st;
        vector<int> v;
       // Your code here
       for(int i=0; i<n; i++){
           
           if(st.size()==0){
               v.push_back(-1);
               
           }
           else if(st.size()>0 && st.top().first > price[i])
           {
               v.push_back( st.top().second );
           }
           
           else if(st.size()>0 && st.top().first <= price[i]){
               while(st.size()>0 && st.top().first <= price[i]){
                   st.pop();
               }
               if(st.size()==0){
                   v.push_back(-1);
               }
               else{
                   v.push_back(st.top().second);
               }
           }
           st.push( {price[i], i} );
           
       }
    //   we could have taken size of array to but we have to change the vector 
    // as we have to return it so used vector instead
       for(int i=0; i < v.size(); i++){
           v[i] = i - v[i];  // 1 1  1 2 4 6 
       }
       return v;
    }


// not working properly below code

// vector <int> calculateSpan(int price[], int n)
//     {
//        // Your code here
//        stack <int> st;
//        vector<int> v;
       
//        for(int i=0; i<n; i++){
//            int counter = 1;
//            if(!st.empty() && st.top()<= price[i])
//            {
//                while( !st.empty() && st.top()<= price[i] ){
//                counter++;
//                }
//                v.push_back(counter);
                
//            }
//            else if( st.empty())
//            {
//               v.push_back(counter); 
//            }
           
//         //    v.push_back(counter);
//            cout<< v[i] << " ";
//            st.push(price[i]);
//        }
//        return v;
//     }

// solution 2
vector <int> calculateSpan(int price[], int n)
    {
        stack<pair<int,int>> S;
        vector<int> ans;
        for(int i=0;i<n;i++)
        
        {
            int c=1;
            while(S.size()>0 && S.top().first<=price[i])
            {
                c+=S.top().second;
                S.pop();
                
            }
            ans.push_back(c);
            S.push({price[i],c});
        }
        return ans;
    }

int main()
{
    int price[7] = {100, 80, 60, 70, 60, 75, 85};
    calculateSpan(price ,7);
    return 0;
}