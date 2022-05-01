#include<bits/stdc++.h>
using namespace std;
 
void Series(int n)
{
    int arr[n];
    int ans=0;
    for(int i = 1; i <= n; i++)
    {
        ans += i ;
        cout<<  ans << " ";
        // return

    }
};

int main()
{
    cout << "enter input value " ;
    int n;
    cin >> n;
    cout<< "print series :" << endl;
    Series(n);

    // Series(n);    
}