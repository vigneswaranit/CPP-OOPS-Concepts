#include <iostream>

using namespace std;

class Person{
public:
    virtual void introduce()
    {
        cout<<"Hi I am a Person !"<<endl;
    }
};


class Student: public Person
{
public:
    void introduce()
    {
    cout<<"I am Student and I am Awesome !"<<endl;
    }
};

class Farmer: public Person
{
public:
    void introduce()
    {
    cout<<"I am Farmer !"<<endl;
    }
};

class Engineer: public Person
{
public:
};

void WhoisThis(Person *p)
{
    p->introduce();
}

int main()
{
    Student ObjStudent;
    Farmer  ObjFarmer;
    Engineer ObjEngineer;
    //ObjStudent.introduce();
    WhoisThis(&ObjStudent);
    WhoisThis(&ObjFarmer);
    WhoisThis(&ObjEngineer);
    return 0;
}
