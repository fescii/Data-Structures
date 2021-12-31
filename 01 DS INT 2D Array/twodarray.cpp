#include<iostream>

using namespace std;

int main()
    {
        //Initialize 2 D array
        int b[100][100];
        //Set rows and columns
        int r,c;//r for rows and c for columns
        //Take user input
        cout<<"Enter number of rows: ";
        cin>>r;
        cout<<endl;

        cout<<"Enter number of columns: ";
        cin>>c;
        cout<<endl;


        //Taking Input Rowsise
        for(int i = 0; i<r; i++)
        {
            for(int j = 0; j<c; j++)
            {
                cin>>b[i][j];
            }
        }

        //Printing Values Row wise
        cout<<"Row wise Printing " <<endl;

        for(int i = 0; i < r; i++)//Iterate over rows
        {
            for(int j = 0; j < c; j++)//For each row Iterate over columns
            {
                cout<<b[i][j]<<" ";
            }
            cout<<endl;
        }


        //Printing values column wise
        cout<<"Column wise Printing " <<endl;

        for(int i = 0; i<c; i++)//Iterate over columns
        {
            for(int j = 0; j<r; j++)//For each column iterate over rows
            {
                cout<<b[j][i]<<" ";
            }
            cout<<endl;
        }



    }
