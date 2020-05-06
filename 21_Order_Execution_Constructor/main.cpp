#include <iostream>
#include <string.h>

using namespace std;
class Human
{
public:
    Human()
    {
        cout<<"Human class Constructor called"<<endl;
    }
    ~Human()
    {
        cout<<"Human class Destructor called"<<endl;
    }
};

class Student : public Human
{
public:
    Student()
    {
        cout<<"Student class Constructor called"<<endl;
    }
    ~Student()
    {
        cout<<"Student class Destructor called"<<endl;
    }
};

class Gstudent : public Student
{
    public:
    Gstudent()
    {
        cout<<"GStudent class Constructor called"<<endl;
    }

    ~Gstudent()
    {
        cout<<"GStudent class Destructor called"<<endl;
    }
};

int main()
{
    Gstudent ObjVignes;

    return 0;
}
