#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;


    int ans=0;
    int i=0 ;

    while(n!=0)
    {
        // bit checking for last value of n if it is 1 then return odd 1 ..if 0 then even o
        int bit = n&1 ;
        // save  the bit and use to reverse it below works as if n=123 so it will return 321
        ans=( bit * pow(10,i) ) + ans ;
        // right shift by 1 means after checking one bit checking for another bit by shifting by 1 value
        n = n >> 1;
        i++;
    }
    cout <<"answer"<< ans << endl;
}