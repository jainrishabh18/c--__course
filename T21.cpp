#include <iostream>
using namespace std;

class employee
{
    private:
        int  a , b , c;
    public:
        int d , e;

    void setdata(int a1 , int b1, int c1);
    void getdata(){
        cout<<"the value of a  is: "<< a <<endl;
        cout<<"the value of b  is: "<< b <<endl;
        cout<<"the value of c  is: "<< c <<endl;
        cout<<"the value of d  is: "<< d <<endl;
        cout<<"the value of e  is: "<< e <<endl;
    } 
};

void employee ::setdata(int a1, int b1, int c1)
{
    a=a1;
    b=b1;
    c=c1;
}

int main()
{
    employee rishabh;

    rishabh.setdata(1,25,36);
    rishabh.d=45; /*.a= 45;*/
                    //so the reason why rishabh.a will show error here is
                    // because  a,b,c are said to be private and so it cannot be randomly used
                    // whereas d,e can be called randomly as they are used as public so we can change it
                    // without much concern  . /*d*/=45;
    rishabh.e=99;
    rishabh.getdata();
    return 0;
}