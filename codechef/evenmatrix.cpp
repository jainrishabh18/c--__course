#include <iostream>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin>>n;
        int number=1;
        for(int i=1; i<=n;i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(n<=(n*n))
                {
                    cout << number << " ";
                    number++;                    
                }
                
            }
            cout<<endl;
        }
    }

    return 0;
}