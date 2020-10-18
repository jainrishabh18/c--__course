/*
 ------------>>>> below are the functions used in vector (stl)
 
-->>> 1.-->:push_back()---------------->to add value at end
-->>> 2.---->insert()------------------> to add a value at any given position asked by user
-->>> 3.-->pop_back()-------------------->to remove last element from the vector
-->>> 4.-->>>erase()--------------------->removes the element pointed by the iterator itr_pos
-->>> 5.-->>>swap()----------------------->swap  values
,resize(),clear((),empty() and others
*/
#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> v{10,20,30,40,50};
    
    //v.push_back(1);
    //v.push_back(2);
    //v.push_back(3);
    
    /*
    
    for(vector<int>::iterator  i = v.begin(); i != v.end(); i++)
    {
        cout<< *i <<" ";
    }
    
    */
    
    /*
    vector<int>::iterator i=v.begin();

    v.insert(i+3,3,979);
    for (vector<int>::iterator i= v.begin(); i !=v.end(); i++)
    {
        cout << *i << " ";
    }

    */

    //v.pop_back();
    vector<int>::iterator i =v.begin();
    //v.erase(i);
    v.erase(v.begin(),v.end()-2);
    for ( i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
    
    return 0;
} //This is complete vector in stl