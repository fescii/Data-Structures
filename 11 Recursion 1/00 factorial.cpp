// https://ideone.com/SCiVpm

#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n < 0) return -1;

    /// Step 1: Base case
    if(n==0) return 1;

    /// Step 2: Assumption/Recursive case
     int smallAns = fact(n-1);

     ///Step 3: Calculation(Bigger Problem)
     return n*smallAns;
}

int main(){
     int n;
     cout<<"Enter the number: ";
     cin>>n;
     cout<<endl;

     int ans = fact(n);
     cout<<"Factorial of "<<n<<" is :" <<ans<<endl;
    return 0;
}

