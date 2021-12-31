#include<iostream>
#include<cstring>

using namespace std;

class Student
{
    private:
        int age;

    public:
        char *name;
        //Getters
        int getAge()
        {
            return this->age;
        }


        //Setters
        void setAge(int age)
        {
            this->age = age;
        }

        ///Copy constructor
        Student(Student const &s)
        {
            this->age = s.age;
            //this-> name = s.name  Shallow copy

            ///Deep copy
            this->name = new char[strlen(s.name) + 1];
            strcpy(this->name, s.name);
        }

        ///Constructor

        //Initialization list

        Student(int age, char *name)
        {
            this->age = age;
            //this->name = name;  Shallow copy

            ///Deep copy
            this->name = new char[strlen(name) + 1];
            strcpy(this->name, name);
        }

        //Printing values
        void display()
        {
            cout<<name<<" : "<<age<<endl;
        }
};

int main()
{
    char name[] = "Femar";
    Student s1(20,name);
    s1.display();

    Student s2(s1);

    s1.display();
    s2.display();

    return 0;
}

