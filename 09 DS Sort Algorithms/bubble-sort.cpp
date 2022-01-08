#include<iostream>
using namespace std;

void bubblesort(int a[],int n){

    int flag = -1;
    for(int count=1;count<=n-1;count++)
    {

        for(int j=0;j<=n-2;j++)
        {

            if(a[j] > a[j+1])
            {
                swap(a[j],a[j+1]);
            }

        }
    }
}

int main(){

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

   bubblesort(a,n);

   for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
   }


   return 0;
}
