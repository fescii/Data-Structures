#include <iostream>
using namespace std;
#include "Fraction.cpp"

int main() {
    //You can change the value arguments to see results
    Fraction f1(15,2);
    Fraction f2(15,2);
/*
    //USE Overloaded operator you can test (+,-,*,/)
    Fraction f4 = f1 + f2;
    f4.print();


    /// Testing the equal to operator
    if(f1==f2)
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }

    /// Testing the equal to operator
    if(f1!=f2)
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }


    // Pre increment test
    Fraction f9 = ++(++f1);
    f9.print();
    f1.print();

    // Post increment test
    Fraction f5 = f1++;
    f5.print();
    f1.print();
*/

    // += Operator
    f2.print();
    f1 -= f2;
    f1.print();
    f2.print();



	return 0;
}

