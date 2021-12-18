#include<iostream>

using namespace std;

//Function to Print 2 D array
void printArray(int a[][5], int r, int c)
    {
        //Printing Values Row wise
        cout<<"Row wise Printing " <<endl;

        for(int i = 0; i < r; i++)//Iterate over rows
        {
            for(int j = 0; j < c; j++)//For each row Iterate over columns
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }

int main()
    {
        //Initialize Array
        int b[][5] = { {1,2,3,4,5},
                        {8,8,4,7,9},
                        {7,8,3,4,4},
                        {4,2,3,1,8}
                     };
    printArray(b,4,5);

    return 0;
    }
