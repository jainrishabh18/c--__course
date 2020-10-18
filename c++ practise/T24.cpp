/*
#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;//static func is set to 0 as default

public:
    void setData(void)
    {
        cout << "Enter the id";
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(void)
    {
        // cout<<id; // throws an error
        cout << "The value of count is " << count << endl;
    }
};

// Count is the static data member of class Employee
int Employee::count; // Default value is 0

int main()
{
    Employee harry, rohan, lovish;
    // harry.id = 1;
    // harry.count=1; // cannot do this as id and count are private

    harry.setData();
    harry.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lovish.setData();
    lovish.getData();
    Employee::getCount();

    return 0;
}
*/

#include <iostream>
using namespace std;

class Employee{
    int id;
    //static
    static int count;


public:
    
    void setdata(void)
    {
        cout<<"enter the id of of employee"<<endl;
        cin>>id;
        count++;
        //cout<<endl;
    }
    void getdata(void)
    {
        cout<<"the id of the employee is "<< id << " and the employee number is "<< count <<endl; 
    }
    //static
    // int getingcount()
    // {   
    //     cout<<endl;
    //     //cout<<"the value of count is " <<  count <<endl;

    //     //what we are doing in it so it is getting count??

    //     //so by commenting out  the above cout 
    //     //i came to know is that we just have to
    //     //create a void function get count irrespective of what we do out of it
    //     cout<<endl;
    //     // return 0;
    // }


};
int Employee::count=100;

int main(){

    Employee harry,rishabh,rohan;

    harry.setdata();
    harry.getdata();
    // Employee::getingcount();

    rishabh.setdata();
    rishabh.getdata();
    // Employee::getingcount();

    rohan.setdata();
    rohan.getdata();
    // Employee::getingcount();

    return 0;
}