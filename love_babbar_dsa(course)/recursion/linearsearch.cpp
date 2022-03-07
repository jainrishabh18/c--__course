#include<iostream>
using namespace std;

void print(int *arr,int size)
{
    for(int i=0; i<size; i++)
    {
        cout<< arr[i]<<" ";
    }
    cout<< endl;
}
bool linearSearch(int *arr,int size, int key)
{
    
    print(arr ,size);
    // base case 
    if(size==0)
    {
        return false;
    }
    if(arr[0]==key)
    {
        return true;
    }
    // rp=remaing part rp is also the recursive relation
    bool rp = linearSearch(arr+1,size-1,key);
    return rp;
}
int main()
{
    int arr[6] = {1,13,45,46,49,99};
    int size = 6;
    int key = 1;

    int ans = linearSearch(arr,size,key);    

    if(ans)
    {
        cout << "Found " <<endl; 
    }
    else
    {
        cout << "Not Found"<<endl; 
    }
}