#include <iostream>
using namespace std;

// as it is dynamic memory allocation i.e heap we have to clear the memory manually 
// also for 2d defined memory allocation from line 16 - 18 ;


// in static memory allocation(stack) memory is released automatically;
int main()
{
    cout<< "input rows and col"; 
    int row;
    cin>> row;

    int col;
    cin >> col;

    int** arr = new int*[row];

    for(int i=0; i<row; i++)
    {
        arr[i] = new int[col];
    }
// taking input
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>> arr[i][j];
        }
    }
// printing output
    cout<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<arr[i][j]<< " ";
        }
        cout<<endl;
    }

//  relesing memory

for(int i=0; i<row; i++)
{
    // releasing heap memory first
    delete [] arr[i];
}

delete []arr;


return 0;

}