#include<bits/stdc++.h>
using namespace std;

// extended euclid is used to find the gcd along with its coefficient x & y
// ax + by = gcd(a,b)
// gcd(a,b) = gcd(b,a%b)
// ax + by = gcd(b , a%b)
// gcd(b , a%b) = bx1 + (a%b)y1
// a%b =  a- (a/b) * b

// ax + by = bx1 + (a%b)y1

// ax + by = bx1 + (a- (a/b) * b)y1

// ax + by = bx1 + (a- (a/b) * b)y1 solving this equation we get 
//  ax + by = ay1 + b(x1 - (a/b) * y1)

/* hence we get 
    x =y1
    y = x1 - (a/b) * y1
*/


/* so most imp part of extended euclid is these three things that are to be     rembered
 1--> ax + by = gcd(b , a%b)
 2 --> x = y1 
 3 --> y = x1 - (a/b)*y1
 */

struct triplet{
    int x,y,gcd;
};

triplet extendedEuclid(int a , int b)
{
    if(b==0)
    {
        // ax + 0*y = a as gcd(a,b) where b is 0 is a
        // x -> 1  y-> 0
        triplet ans;
        
        ans.gcd = a;
        ans.x = 1;
        ans.y = 0;
        return ans;
    }

    triplet smallAns = extendedEuclid(b ,a%b);
    triplet ans;
    ans.gcd = smallAns.gcd;
    ans.x = smallAns.y;
    ans.y = smallAns.x - (a/b)*smallAns.y;
    return ans;

}



int main()
{
    int a,b;
    cin >> a >> b;
    triplet ans = extendedEuclid(b ,a%b);
    cout << "x value : "<< ans.x<< " y value : "<<ans.y<< " gcd "<< ans.gcd  <<endl;
    return 0;


}