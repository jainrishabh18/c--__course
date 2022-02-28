#include <iostream>
using namespace std;

int main()
{
    int arr[5][4];
// taking input
    // for(int i=0; i<3; i++)
    // {
    //     for(int j=0; j<4; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }
        
// output row-wise
    // for(int i=0; i<3; i++)
    // {
    //     for(int j=0; j<4; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout<< endl;
    // }


// output colum-wise

//input--> 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 
//-->output
// 1 6 11 16 
// 2 7 12 17
// 3 8 13 18
// 4 9 14 19
// 5 10 15 20

// colum wise print karna hai toh row har iteration pe change honi chaiye that is second for loop row ka hona chaiye and 
// first vala col ka
        // for(int col=0; col<4; col++)
        // {
           
        //     for(int row=0; row<5; row++)
        //     {
        //         cin >> arr[row][col];
        //     }
        //     // cout<< endl;
        // }

        // for(int row=0; row<5; row++)
        // {
        //     for(int col=0; col<4; col++)
        //     {
        //         cout << arr[row][col]<< " ";
        //     }
        //     cout<< endl;
        // }

        // wave pattern input
        for(int col=0; col<4; col++)
        {
            if(col % 2 == 0)
            {
                for(int row=0; row<5; row++)
                {
                    cin >> arr[row][col];
                }
            }
            else
            {
                for(int row=5-1; row>=0; row--)
                {
                    cin >> arr[row][col];
                }
            }
            
            // cout<< endl;
        }
        

    // wave pattern print
        for(int row=0; row<5; row++)
        {
            for(int col=0; col<4; col++)
            {
                cout << arr[row][col]<< " ";
            }
            cout<< endl;
        }

// {
// rowwise input below code

        // for(int row=0; row<5; row++)
        // {
        //     for(int col=0; col<4; col++)
        //     {
        //         cin >> arr[row][col];
        //     }
        //     // cout<< endl;
        // }
// printing output it will have the same code every time  first for loop will be row and second column
//  just change the row and coulumn count acc to question demand
        // for(int row=0; row<5; row++)
        // {
        //     for(int col=0; col<4; col++)
        //     {
        //         cout << arr[row][col]<< " ";
        //     }
        //     cout<< endl;
        // }
// }
    return 0;

}