/*
#include<iostream>
using namespace std;

class complex{
    int a;
    int b;

    public: 
        void setData(int v1, int v2){
            a = v1;
            b = v2;
        }

        void setDataBySum(complex o1, complex o2){
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }

        void printNumber(){
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

int main(){
    complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(3, 4);
    c2.printNumber();

    c3.setDataBySum(c1, c2);
    c3.printNumber();
    return 0;
}
*/
#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    void setdata(int v1,int v2)
    {
        a = v1;
        b = v2;
    }

    void setdatabysum(complex o1 , complex o2)
    {
        a=o1.a+o2.a;
        b=o1.b+o2.b;
    }
    void printvalue(void)
    {
        cout<<"your complex number is "<< a <<"+" << b<<"i"<<endl;
    }
    
};

int main(){
    complex c1,c2,c3;
    c1.setdata(1,5);
    c1.printvalue();


    c2.setdata(6,54);
    c2.printvalue();

    c3.setdatabysum(c1,c2);
    c3.printvalue();
    return 0;
}



