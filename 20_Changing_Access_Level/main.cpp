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
    Human :: strName;
    Human :: setName;
    Human :: setAge;
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


int main()
{
    Student ObjVignes;
    ObjVignes.setName("Vicky");
    ObjVignes.setAge(24);
    ObjVignes.introduce();

    return 0;
}
