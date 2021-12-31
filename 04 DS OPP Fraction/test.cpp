///Testing Fraction class

#include<iostream>
#include "Fraction.cpp"
using namespace std;

int main()
{
    Fraction f1(4,3);
    Fraction f2(1,3);

    f1.sub(f2);

    f1.print();
    f2.print();

    cout<<"Mixed"<<endl;
    f1.mixed();
    f2.mixed();

    cout<<3-5;

    return 0;
}
