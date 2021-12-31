#include<iostream>
using namespace std;

int main(){

   cout<<"Enter the number of elements "<<endl;
   int n;
   cin>>n;

   int a[n];
   /// input
   for(int i=0;i<n;i++){
    cin>>a[i];
   }

  /// printing
   for(int i = 0;i<n;i++){
    cout<<a[i]<<" ";
   }
   cout<<endl;

  int sum = 0;
  for(int i =0 ;i<n;i++){
    sum += a[i];
  }
  cout<<sum<<endl;



   return 0;
}

