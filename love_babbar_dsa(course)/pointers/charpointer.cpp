#include <iostream>
using namespace std;


// void square(int *p){
//  int a = 10;
//  p = &a;
//  *p = (*p) * (*p);
// }

// void swap (char *x, char *y) 
// {
//   char *t = x;
//   x = y;
//   y = t;
// }

// void Q(int z)
// {
//   z += z;
//   cout<<z << " ";
// }

// void P(int *y) 
// {
//   int x = *y + 2;
//   Q(x);
//   *y = x - 1; 
//   cout<<x << " ";
// }

int f(int x, int *py, int **ppz) {
    int y, z;
    **ppz += 1;
    z = **ppz;
    *py += 2;
    y = *py;
    x += 3;
    return x + y + z;
}
int main()
{
    // char s[]= "hello";
    // char *p = s;
    // cout << s[0] << " and " << p[0] << endl;


    // int numbers[5];
    // int * p;
    // p = numbers; 
    // *p = 10;
    // p = &numbers[2]; 
    // *p = 20;
    // p--; 
    // *p = 30;
    // p = numbers + 3;
    // *p = 40;
    // p = numbers;
    // *(p+4) = 50;
    // for (int n=0; n<5; n++) {
    //      cout << numbers[n] << ",";
    // }
    // return 0;

 
//     char st[] = "ABCD";
//     for(int i = 0; st[i] != '\0'; i++) {
//         cout << *st << " - " << st <<" - "<< *(st) <<" - "<< *(st)+i << endl;
//         cout << st[i] << " - "<< *(st)+i <<" - "<< *(i+st) << " - " << i[st];
         
//     }

//   return 0;

// doubt in second cout
// float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
// float *ptr1 = &arr[0];
// float *ptr2 = ptr1 + 3;
// cout<<*ptr2<<" ";
// cout<< ptr2 - ptr1;
// return 0;


//  int a = 10;
//  square(&a);
//  cout << a << endl;


// char *x = "geeksquiz";
// char *y = "geeksforgeeks";
// char *t;

// cout<<"1st -> "<<x << " "<<y << endl;
// swap(x, y);
// cout<<"2nd-> "<<x << " "<<y << endl;
// t = x;
// x = y;
// y = t; 
// cout<<"3rd-> "<<" "<<x<< " "<<y;
// return 0;

// int x = 5;
// P(&x);
// cout<<x;
// return 0;

// int a = 10;
// int *p = &a;
// int **q = &p;
// int b = 20;
// *q = &b;
// (*p)++;
// cout << a << " " << b << endl;

int c, *b, **a;
c = 4;
b = &c;
a = &b;
cout << f(c, b, a);
return 0;

}