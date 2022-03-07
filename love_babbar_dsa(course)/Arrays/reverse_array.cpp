#include<iostream>
using namespace std;

void reverse(int arr[], int n)
{
    int start=0;
    int end=n-1;
    
    while(start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
}

void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout <<arr[i]<<" ";
    }
    cout <<endl;
}

int main()
{
    int arr[6]= {15,2,65,9,9,65};
    // int brr[4]= {14,52,64,4};
    // cout << "befor reversing"<<endl;
    printArray(arr,6);
    // printArray(brr,4);

    // reverse(arr,6);
    // reverse(brr,4);
    // cout <<"after reversing"<<endl;

    printArray(arr,6);
    printArray(brr,4);
    



//   int size;
//   cin >>size>> endl;


}