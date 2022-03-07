#include<iostream>
using namespace std;

void print(int *arr,int s,int e)
{
    for(int i=s; i<e; i++)
    {
        cout<< arr[i]<<" ";
    }
    cout<< endl;
}
int binarySearch(int *arr, int start, int end, int key)
{
    print(arr ,start,end);
    // base case 
    if(start>end)
    {
        return -1;
    }
    int mid = start + (end-start)/2;
    if(arr[mid]==key)
    {
        return mid;
    }
    if(arr[mid]<key)
    {
        return binarySearch(arr,mid+1,end,key);
    }
    else
    {
        return binarySearch(arr, start ,mid-1,key);
    }


}

int main()
{
    int arr[6] = {1,13,45,46,49,99};
    int size = 6;
    int key = 99;
    // int s,e;
    int ans = binarySearch(arr,0 ,5,key);
    cout <<"ans--> "<< ans << endl;
}