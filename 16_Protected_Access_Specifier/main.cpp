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

class Student : public Human
{
public:
    int id;
    void setid(int iid){id = iid;}
    int getid(){return id;}

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
    ObjVignes.setid(12345);
    ObjVignes.introduce();

    return 0;
}
