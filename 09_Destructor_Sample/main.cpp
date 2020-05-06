#include <iostream>

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
        cout<<"Constructor Called" << endl;
    }

    ~Human()
    {
        cout<<"Destructor Called" << endl;
    }

    void display()
    {
        cout <<"My name is "<<getName() <<" and Age is " << getAge() <<endl;
    }
};

int main()
{
    Human ObjSample;

    //Human *PtrObjSAmple = new Human();

    //delete PtrObjSAmple;

    return 0;
}
