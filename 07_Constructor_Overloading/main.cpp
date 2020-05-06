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
        strName = "Noname";
        Age = 0;
        cout<<"Default Constructor without parameter" << endl;
    }

    Human(string name)
    {
        strName = name;
        Age = 0;
        cout<<"Constructor with Name as a parameter" << endl;
    }

    Human(int iAge)
    {
        strName = "Noname";
        Age = iAge;
        cout<<"Constructor with Age as a parameter" << endl;
    }

    Human(string name,int iAge)
    {
        strName = name;
        Age = iAge;
        cout<<"Constructor with Name and Age as a parameter" << endl;
    }

    void display()
    {
        cout <<"My name is "<<getName() <<" and Age is " << getAge() <<endl;
    }
};


int main()
{
    Human ObjVignes;
    ObjVignes.display();

    Human ObjSwarna("Swarnalakshmi");
    ObjSwarna.display();

    Human ObjAnkit(24);
    ObjAnkit.display();

    Human ObjSenthil("Senthil",48);
    ObjSenthil.display();

    return 0;
}
