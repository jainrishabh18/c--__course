#include<iostream>
using namespace std;

int binary_search(int arr[], int size, int key)
{
    int start = 0;
    int end = size -1;
    int mid = (start + end)/2;

    while(start<= end)
    {
        if(arr[mid] == key)
        {
            return mid;
        }

        if(key > arr[mid])
        {
            start = mid +1;
        }
//      (key < arr[mid])
        else
        {
            end = mid -1;
        }
        mid = (start + end)/2;

    }
    return -1;

}

int main()
{

    int even[6]= { 1,3,7,22,45,65 };
    int odd[5]= { 3,9,11,15,16 };

    int index1 = binary_search(even ,6 ,22);
    int index2 = binary_search(odd ,5 ,11);

    cout << "index off 22 -> " << index1 << endl;
    cout << "index off 11 -> " << index2 << endl;

    return 0;

}