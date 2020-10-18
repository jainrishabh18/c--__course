
#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

// This will not swap a and b

//************************Reason***********************************
                                              

// the values of “a” and “b” are the same for both times they are printed.
// So the main point here is that when the call by value method is used it doesn’t change 
// the actual values because copies of actual values are sent to the function.and if copies is send to func how will
//actual value change so it is the reason values are not swaped in the first below case
void swap(int a, int b)
{                 //temp a b
    int temp = a; //4   4  5
    a = b;        //4   5  5
    b = temp;     //4   5  4
}

// Call by reference using pointers

//************************Reason***********************************

//A call by the pointer is a method in C++ to pass the values to the function arguments.
// In the case of call by pointer, the address of actual parameters is sent to the formal parameter,
// which means that if we change the values inside the function that will affect the actual values
// -----------------> * indicates the value at address of   a and b below.

void swapPointer(int *a, int *b)
{                  //temp a b
    int temp = *a; //4   4  5
    *a = *b;       //4   5  5
    *b = temp;     //4   5  4
}

// Call by reference using C++ reference Variables
// int &
void swapReferenceVar(int &a, int &b)
{                 //temp a b
    int temp = a; //4   4  5
    a = b;        //4   5  5
    b = temp;     //4   5  4
    // return a;
}

int main()
{
    int x = 4, y = 5;
    // cout<<"The sum of 4 and 5 is "<<sum(a, b);
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    // swap(x, y); // This will not swap a and b
    // swapPointer(&x, &y); //This will swap a and b using pointer reference
    swapReferenceVar(x, y); //This will swap a and b using reference variables
    // swapReferenceVar(x, y) = 766; //This will swap a and b using reference variables
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    return 0;
} 



/* ---------------------self writtencode**************************

#include <iostream>
using namespace std;


void swaprefencevar(int &a ,int &b)
{
    int temp =a;
    a = b;
    b=temp; 
}
int main(){
    int x =5, y=6;
    cout<< "The value of x is " << x << " and the value of y is " << y << endl;
    swaprefencevar(x , y);
    cout<< "The value of x is " << x << " and the value of y is " << y<< endl;

    return 0;
}
*/