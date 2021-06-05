#include <iostream>
using namespace std;


int main()
{
    int t;
    cin>>t;
    //int num;
    while(t--)
    {
        int L;
        cin>>L;
        int R;
        cin>>R;
        int count=0;
        //int arr=[n];
        for(int i=L;i<=R;i++)
        {
            if (i % 10 == 2 || i % 10 == 3 || i % 10 == 9)
            {
                count++;
            }
            else if (i == 2 || i == 3|| i == 9)
            {
                count++;
            }
            else
            {
                continue;
            }
            
        }cout<<count<<endl;
    }

    return 0;
}