#include<iostream>
// #include<math.h>

using namespace std;

int main()
{
    int num;
    cin >>num;
    int hundred;
    int fifty,twenty,one;
    // cout<<"hello world";
    switch (num)
    {
    case 1: 
        hundred = num/100;
        cout<<"Number of 100 rs note is "<<hundred << endl;
        num=num %100;

    case 2: fifty = num/50;
        cout<<"Number of 50 rs note is "<< fifty << endl;
        num=num %50;
    case 3: twenty = num/20;
        cout<<"Number of 20 rs note is "<< twenty << endl;
        num=num %20;
    case 4: one = num/1;
        cout<<"Number of 1 rs note is "<< one << endl;
        num=num %1 ;
    }
}