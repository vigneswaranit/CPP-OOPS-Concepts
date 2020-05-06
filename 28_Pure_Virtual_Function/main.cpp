#include <iostream>

using namespace std;

class Person{
public:
    virtual void introduce() = 0;
};

void Person::introduce()
{
    cout<<"I am Person !"<<endl;
}

class Student: public Person
{
public:
    void introduce()
    {
    Person::introduce();
    cout<<"I am Student and I am Awesome !"<<endl;
    }
};

class GStudent: public Student
{
public:
    void introduce()
    {
    cout<<"I am Graduated Student !"<<endl;
    }
};

class Engineer: public GStudent
{
public:
    void introduce()
    {
    cout<<"I am Engineer !"<<endl;
    }
};

void WhoisThis(Person *p)
{
    p->introduce();
}

int main()
{
    //Person ObjPerson;
    Student ObjStudent;
    GStudent  ObjGStudent;
    Engineer ObjEngineer;
    //ObjStudent.introduce();
    //WhoisThis(&ObjPerson);
    WhoisThis(&ObjStudent);
    WhoisThis(&ObjGStudent);
    WhoisThis(&ObjEngineer);
    return 0;
}
