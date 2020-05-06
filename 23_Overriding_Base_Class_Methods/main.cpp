#include <iostream>

using namespace std;

class Person{
public:
    intrduce()
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


int main()
{
    Student ObjStudent;
    ObjStudent.introduce();

    return 0;
}
