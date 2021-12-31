/**
        STATIC
 Static properties are accessed using class
 Objects of class only copy none static properties
 To access static property we have to use "scope resolution operator" - (Name of Class::Static Property)
 Static properties are initialize outside class
**/
class Student
{
    private:
        static int totalStudents;

    public:
        int rollNumber;
        int age;

    //Constructor
     Student(int r, int age): rollNumber(r), age(age)
     {
         //...Increase total student by 1 in every object
         totalStudents++;
     }

     //Getters
     int getRollNumber()
     {
         return rollNumber;
     }

     int getAge()
     {
         return age;
     }


    /* STATIC FUNCTION
            Can only access static data members(properties)
            They don't have (this) keyword since they belong to class
             and not objects.
    */

    static int getTotalStudent()
    {
        return totalStudents;
    }

};

//Initializing static data member
    int Student::totalStudents = 0;
