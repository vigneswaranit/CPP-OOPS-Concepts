#include <iostream>
#include <string.h>

using namespace std;
class Human
{
    int *Age;
    string *strName;
    int getAge(){return *Age;}
    string getName(){return *strName;}

public:
    Human(string iname,int iAge)
    {
        Age = new int();
        strName = new string();

        *Age = iAge;
        *strName = iname;
    }

    ~Human()
    {
        delete Age;
        delete strName;
    }

    void display()
    {
        cout <<"My name is "<<getName() <<" and Age is " << getAge() <<endl;
    }
};


int main()
{
    Human ObjVignes("Vigneswaran",24);
    Human *PtrObjSwarna = new Human("Swarna",19);

    /*1 - > Normal Way */
    ObjVignes.display();

    /*2 - > Using Pointers */
    PtrObjSwarna->display();

    delete PtrObjSwarna;

    return 0;
}
