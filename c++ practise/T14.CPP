//#include <iostream>
//using namespace std;
//
//typedef struct employee 
//{
//    /* data */
//    int eID;
//    char favchar;
//    float salary; 
//}ep;




//int main(){
   // ep rishabh;
   // struct employee suresh;
   // rishabh.eID = 1;
   // rishabh.favchar = 'c';
   // rishabh.salary = 10000000000;
   // cout<<"the eid for rishabh id is"<<rishabh.eID<<endl;
   // cout << "the valuefor rishabh id is" << rishabh.favchar<< endl;
   // cout << "the valuefor rishabh id is" << rishabh.salary << endl;
    //return 0;
//}

#include <iostream>
    using namespace std;

    typedef struct employee
    {
        /* data */
        int eId;      //4
        char favChar; //1
        float salary; //4
    } ep;

    union money {
        //union is used to overight our 
        //data or we can say it overight space .
        //like memory consumption ko kum kardetaha easy language ma samjaoo to?
        /* data */
        int rice;     //4
        char car;     //1
        float pounds; //4
    };

    int main()
    {
        enum Meal //enum here is alocating a num to particular data type 
                //for ex here breakfast is given 0,lunch 2,and dinner 3
        {
            breakfast,
            lunch,
            dinner
        };
        Meal m1 = lunch;
        cout << (m1 == 2);
        // cout<<breakfast;
        // cout<<lunch;
        // cout<<dinner;
        // union money m1;
        // m1.rice = 34;
        // m1.car = 'c';
        // cout<<m1.car;

        // ep harry;
        // struct employee shubham;
        // struct employee rohanDas;
        // harry.eId = 1;
        // harry.favChar = 'c';
        // harry.salary = 120000000;
        // cout<<"The value is "<<harry.eId<<endl;
        // cout<<"The value is "<<harry.favChar<<endl;
        // cout<<"The value is "<<harry.salary<<endl;
        return 0;
    }
