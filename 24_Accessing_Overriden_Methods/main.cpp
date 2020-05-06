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
    Person::introduce();
    }
};


int main()
{
    Student ObjStudent;
    ObjStudent.introduce();
    ObjStudent.Person::introduce();

    return 0;
}
