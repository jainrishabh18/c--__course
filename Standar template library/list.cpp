#include <iostream>
#include<list>
using namespace std;

int main()
{

    list<int> l={1,2,3,4,5};
    list<int>::iterator it=l.begin();
    l.insert(it,45);
    for(it=l.begin(); it !=l.end(); it++ )
    {
        cout<< *it <<endl;
    }
    return 0;
}