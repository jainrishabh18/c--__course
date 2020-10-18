#include <iostream>
using namespace std;
int glo=6;

void sum(){
    int a;
    cout<<glo;
}

int main(){
    // glo is a local variable hence gets the precidence. 
    //where as int glo is a global variable that comes after local variable
    //glo = 78;
    int glo = 69;
    int a=4 , b=6;
    float pi = 34;
    char c = 'u'; 
    //here true returns 0 and false return 1
     bool is_true = false; 
    sum();
    cout << glo << is_true;

    /*  cout<<"this is tutorial 4 ";
    cout<<" the value of a is "<<a<<".\nthe value of b is "<<b;
    cout<<" \nthe value of pi is "<<pi<< ".\nthe value of c is "<<c;
    */
    return 0;
}