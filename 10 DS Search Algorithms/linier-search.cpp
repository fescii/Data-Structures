#include<bits/stdc++.h>
using namespace std;

int linearSearch(int a[],int n,int key){

   for(int i=0;i<n;i++){

    if(a[i] == key){
        return i;
    }
   }

   return -1;

}

int main(){

   cout<<"Enter the size of array: ";
   int n;
   cin>>n;
   cout<<endl;

   cout<<"Enter array elements: ";
   int a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
    cout<<endl;

   cout<<"Enter key to search: "<<endl;
   int key;
   cin>>key;

   int pos = linearSearch(a,n,key);
   if(pos == -1){
    cout<<"key not found"<<endl;
   }else{
       cout<<"key found at index "<<pos<<endl;
   }

   return 0;
}
