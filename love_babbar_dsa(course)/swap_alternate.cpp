#include<iostream>
using namespace std;

void swapAlternate(int arr[], int size)
{
    for(int i=0; i<size; i+=2)
    {
        // it handles the case that if i+1 is excedding the size of array...so it says size if less then only swap else dont.
        if( i+1 < size)
        {
            swap(arr[i], arr[i+1]);
        }
        
    }

}

void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout << arr[i] <<" ";
    }
    cout << endl;
}

int main()
{
    int arr[6]= {15,2,65,7,9,-45};
    int brr[3]= {14,52,64};
    cout<< "befor swaping"<<endl;
    printArray(arr,6);
    printArray(brr,3);

    swapAlternate(arr,6);
    swapAlternate(brr,3);
    cout<< "after swaping"<<endl;

    printArray(arr,6);
    printArray(brr,3);
    
}