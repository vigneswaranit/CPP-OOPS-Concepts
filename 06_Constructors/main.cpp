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

    Human()
    {
        strName = "noname";
        Age = 0;
        cout<<"Constructor is called" << endl;
    }

    void display()
    {
        cout <<"My name is "<<getName() <<" and Age is " << getAge() <<endl;
    }
};


int main()
{
    /*1 - > Normal Way */
    Human ObjVignes;
    /*2 - > Using Pointers */
    Human *PtrObjSwarna = new Human();

    ObjVignes.display();
    PtrObjSwarna->display();

    return 0;
}
