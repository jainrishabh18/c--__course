/*#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter the id of employee" << endl;
        cin >> id;
    }

    void getId(void)
    {
        cout << "The id of this employee is " << id << endl;
    }
};

int main()
{
    // Employee harry, rohan, lovish, shruti;
    // harry.setId();
    // harry.getId();
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}
*/


#include <iostream>
using namespace std;
class employee{
    int id;
    int salary;

public:
    void setid(void)
    {
        cout<<"enter the id"<<endl;
        cin>> id;
        cout<<"enter the salary"<<endl;
        cin>>salary;
    }
    void getid(void)
    {
        cout<<"the salary of employee number " << id << " is " << salary <<endl;

    }

};

int main(){
    employee fb[5];
    for (int i = 0; i < 5; i++)
    {
        fb[i].setid();
        fb[i].getid();
    }
    
    
    return 0;
}