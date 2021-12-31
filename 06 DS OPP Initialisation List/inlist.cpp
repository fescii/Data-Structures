/** Initialization List

  They initialize constant and reference
  properties during the time of memory allocation

 **/

#include<iostream>
using namespace std;

class Student
{
    public:
        int age;
        const int rollNumber;
        int &x; /// Age reference variable

        ///Constructor with initialization Lists
        Student(int r, int age): rollNumber(r),age(age), x(this->age)
        {
            //For non const variables you can use this
        }
};

int main()
{
    Student s1(100,10); //Initializing our class
    s1.age = 12; //This value can be changed since its public and not constant.
}
