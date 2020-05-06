#include <iostream>
#include <string.h>

using namespace std;
class Human
{
protected:
    int Age;
    string strName;

public:
    int getAge(){return Age;}
    string getName(){return strName;}
    void setAge(int iAge) {Age = iAge;}
    void setName(string iname){strName = iname;}
};

class Student : private Human
{
public:
    int id;
    void setid(int iid){id = iid;}
    int getid(){return id;}
    void setstudentname(string iname)
    {
       setName(iname);
    }
    void setstudentage(int iage)
    {
        setAge(iage);
    }
    void introduce()
    {
        cout <<"My name is "<< strName <<" and Age is " << Age << " and id is " << id <<endl ;
    }
};

class Gstudent : public Student
{
    public:
    void setGstudentname(string iname)
    {
        setstudentname(iname);
    }
    void setGstudentage(int iage)
    {
        setstudentage(iage);
    }
};

int main()
{
    Gstudent ObjVignes;
    ObjVignes.setGstudentname("Vicky");
    ObjVignes.setGstudentage(24);
    ObjVignes.introduce();

    return 0;
}
