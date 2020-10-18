/* self written code of pointers
#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int*b = &a;
    int**c = &b;

    cout<<"the value at address a is :"<<*b<<endl;
    cout << "the  address of  a is :" <<&a<<endl;
    cout << "the  address of  a is :" <<b<< endl;

    cout << "the  address of  b is :" << c << endl;
    cout << "the  value at address of  b is :" << *c << endl;
    cout << "the  address of  b is :" << &b << endl;
    cout << "the  value at address of address of b is:" << **c << endl;
    return 0;
} 
*/

#include <iostream>
using namespace std;

int main()
{
    // What is a pointer? ----> Data type which holds the address of other data types
    int a = 3;
    int *b;
    b = &a;

    // & ---> (Address of) Operator
    cout << "The address of a is " << &a << endl;
    cout << "The address of a is " << b << endl;

    // * ---> (value at) Dereference operator
    cout << "The value at address b is " << *b << endl;

    // Pointer to pointer
    int **c = &b;
    cout << "The address of b is " << &b << endl;
    cout << "The address of b is " << c << endl;
    cout << "The value at address c is " << *c << endl;
    cout << "The value at address value_at(value_at(c)) is " << **c << endl;

    return 0;
}
