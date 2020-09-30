#include <iostream>

using namespace std;

int main()
{
    // cout<<"This is tutorial 9";
    int age;
    cout << "Tell me your age" << endl;
    cin >> age;

    // 1. Selection control structure: If else-if else ladder
    // if((age<18) && (age>0)){
    //     cout<<"You can not come to my party"<<endl;
    // }
    // else if(age==18){
    //     cout<<"You are a kid and you will get a kid pass to the party"<<endl;
    // }
    // else if(age<1){
    //     cout<<"You are not yet born"<<endl;
    // }
    // else{
    //     cout<<"You can come to the party"<<endl;
    // }

    // 2. Selection control structure: Switch Case statements
    switch (age)
    {
    case 22:
        cout<<"you are 22 in age"<<endl;
        /* code */
        break;

    case 18:
        cout<<" just 18"<<endl;
        break;
    
    default:
        cout<<"no such special case here sorry!"<<endl;
        break;
    }
    return 0;
}
