#include<iostream>
using namespace std;

void selectionSort(int a[], int n)
{
    /*for(int i = 0; i <= n-2; i++)
    {
        int smallest = INT_MAX; //a[i+1];
        for(int j = i+1; j <= n-1; j++)
        {
            if(a[j] < smallest)
            {
                smallest = a[j];
            }
        if(a[i] > smallest)
        {
            swap(a[i],smallest);
        }
        }
    }*/

    for(int i = 0; i <= n-2; i++)
    {
        int smallest = i;//Storing the index of the smallest value
        for(int j = i+1; j <= n-1; j++)
        {
            if(a[j] < a[smallest])
            {
                smallest = j;
            }
        }
        swap(a[i], a[smallest]);
    }

}

int main()
{
    int n;//Size of the array
    cout<<"Enter the Array size: ";
    cin>>n;
    cout<<endl;

    int a[n];
    cout<<"Enter elements "<<endl;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }


    selectionSort(a, n);

    ///Printing values
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
}
