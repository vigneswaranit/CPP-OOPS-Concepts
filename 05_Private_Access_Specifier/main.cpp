#include <iostream>
#include <string.h>

using namespace std;
class Human
{
    int Age;
    string strName;
    int getAge(){return Age;}
    string getName(){return strName;}

public:
    void setAge(int iAge) {Age = iAge;}
    void setName(string iname){strName = iname;}
    void display()
    {
        cout <<"My name is "<<getName() <<" and Age is " << getAge() <<endl;
    }
};


int main()
{
    Human ObjVignes;
    Human *PtrObjSwarna = new Human();

    /*1 - > Normal Way */
    ObjVignes.setAge(24);
    ObjVignes.setName("Vigneswaran");
    ObjVignes.display();

    /*2 - > Using Pointers */
    PtrObjSwarna->setName("Swarnalakshmi");
    PtrObjSwarna->setAge(19);
    PtrObjSwarna->display();

    return 0;
}
