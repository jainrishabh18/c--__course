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
int getSum(int *arr ,int size)
{
    // using print to see how recursive calls work
    print(arr ,size);
    if(size ==0)
    {
        return 0;
    }   
    if(size ==1)
    {
        return arr[0];
    }
    else
    {
        // int i=0;
        int remainingpart = arr[0] + getSum(arr+1,size-1);
        cout <<endl; 
        cout << " present sum -> " << remainingpart << endl;
        return remainingpart; 
    }
    

}

int main()
{
    int arr[6] = {1,13,45,46,44,99};
    int size = 6;

    int ans = getSum(arr ,size);

    cout << "sum of array is " << ans << endl;
}