#include <iostream>
using namespace std;

void printRowSum(int arr[][3], int row, int col)
{
    cout << "print ROW SUM" << endl;
    for(int row=0; row<3; row++)
        {
            int sum=0;
            for(int col=0; col<3; col++)
            {
               sum += arr[row][col];
            }
            cout<< sum << endl;
        }
        cout<< endl;
}



void printColSum(int arr[][3], int row, int col)
{
    cout << "print COLUMN SUM" << endl;
    for(int col=0; col<3; col++)
        {
            int sum=0;
            for(int row=0; row<3; row++)
            {
               sum += arr[row][col];
            }
            cout<< sum << endl;
        }
        cout<< endl;
}

bool isPresent(int arr[][3], int row, int col , int target)
{
    for(int row=0; row<3; row++)
        {
            
            for(int col=0; col<3; col++)
            {
               if(arr[row][col] == target)
               {
                   return 1;
               }

            }      
        }
        return 0;
}


void printLargestRowSum(int arr[][3], int row, int col)
{
    cout << "Print  largest ROW SUM" << endl;
    int maxi = -1;
    int Maxi_Row_Index =  -1;

    for(int row=0; row<3; row++)
        {
            int sum=0;
            for(int col=0; col<3; col++)
            {
               sum += arr[row][col];
            }
            if(maxi < sum)
            {
                maxi=sum;
                Maxi_Row_Index = row;
            }

        }
        cout<< maxi << endl;
        cout << " largest row sum index is " << Maxi_Row_Index << endl;
        // cout<< Maxi_Row_Index << endl;
        cout<< endl;
}

void printLargestColSum(int arr[][3], int row, int col)
{
    cout << "Print  largest Col SUM" << endl;
    int maxi = -1;
    int Maxi_Col_Index =  -1;

    for(int col=0; col<3; col++)
        {
            int sum=0;
            for(int row=0; row<3; row++)
            {
               sum += arr[row][col];
            }
            if(maxi < sum)
            {
                maxi=sum;
                Maxi_Col_Index = col;
            }

        }
        cout<< maxi << endl;
        cout << " largest col sum index is " << Maxi_Col_Index << endl;
        // cout<< Maxi_Row_Index << endl;
        cout<< endl;
}

int main()
{
    int arr[3][3];

    cout << " Enter values "<< endl;
    for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cin >> arr[row][col];
            }
            // cout<< endl;
        }

    printRowSum(arr,3,3);
    printColSum(arr,3,3);

    if(isPresent(arr,3,3,11))
        cout<< "found" << endl;
    else
    {
        cout <<"Not Found"<< endl;
    }

    printLargestRowSum(arr,3,3);
    printLargestColSum(arr,3,3);


}