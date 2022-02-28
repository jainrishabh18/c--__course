#include <iostream>
using namespace std;


int *fun()
{
    int x = 10;
    return &x;
}
int main()
{
    // int a = 10;
    // int *p = &a;
    // int **q = &p;


    // cout << "showing address of a  --> " << p << endl;
    // cout << " *q is showing address of a  --> " << *q << endl;
    // cout << "showing value at a using *p--> " << *p << endl;
    // cout << "address of p pointer--> " << q << endl;
    // cout << "also shows address of p pointer-->" << &p << endl;
    
    // cout << "q is address of p pointer  *q is adress at p pointer and **q is value at address of a --> " << **q<< endl;
    // cout << "what is at p" << p << endl;


    int *p = fun();

    cout << "not valid-->" <<*p<< endl;

}