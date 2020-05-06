#include <iostream>

using namespace std;

class Person{
public:
    introduce()
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

void WhoisThis(Person *p)
{
    p->introduce();
}

int main()
{
    Student ObjStudent;
    ObjStudent.introduce();
    WhoisThis(&ObjStudent);
    return 0;
}
