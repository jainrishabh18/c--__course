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


bool isSorted(int *arr ,int size)
{
    print(arr,size);
    // base case 
    if(size==0 || size==1) 
        return true;
    
     if(arr[0]>arr[1])
     {
        return false;
     }
     else
     {
       bool remainingpart =isSorted(arr+1 ,size-1); 
       return remainingpart; 
     }
    // bool remainingpart =isSorted(arr+1 ,size-1);
    
}

int main()
{
    int arr[6] = {1,13,45,46,44,99};
    int size = 6;

    bool ans = isSorted(arr, size); 
    if(ans)
    {
        cout<<" array is sorted"<<endl;
    }
    else
        cout<<" array is not sorted"<<endl;
}