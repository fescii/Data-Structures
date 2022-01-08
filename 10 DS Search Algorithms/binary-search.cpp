#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int a[],int n,int key){

         int s = 0, e = n-1;
         while(s<=e){
            int mid = s + (e-s)/2;

            if(a[mid] == key){
                return mid;
            }else if(a[mid] > key){
                e = mid-1;
            }else{
                s = mid + 1;
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

   sort(a,a+n);

   int pos = BinarySearch(a,n,key);
   if(pos == -1){
    cout<<"key not found"<<endl;
   }else{
       cout<<"key found at index "<<pos<<endl;
   }

   return 0;
}

