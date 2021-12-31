#include<iostream>
#include "static.cpp"
using namespace std;

int main()
{
    Student s1(100,17);
    Student s2(101,15);
    Student s3(103,12);
    Student s4(107,13);
    Student s5(109,12);


    //Accessing static data member
    cout<<Student::getTotalStudent()<<endl;
}

