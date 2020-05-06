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

    Human(string name,int iAge=0)
    {
        strName = name;
        Age = iAge;
        cout<<"Constructor with Name and Age as a parameter" << endl;
    }

    friend void display(Human Man);
};

void display(Human Man)
    {
        cout<<"In Friend Function"<<endl;
        cout <<"My name is "<<Man.getName() <<" and Age is " << Man.getAge() <<endl;
    }

int main()
{
    Human ObjVignes("Vigneswaran",24);
    display(ObjVignes);


    return 0;
}
