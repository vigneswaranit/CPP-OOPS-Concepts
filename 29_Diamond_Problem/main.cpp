#include <iostream>

using namespace std;

class Animal{
public:
    int Age;
    Animal()
    {
        cout<<"Animal Constructor is called !"<<endl;
    }
    void Walk()
    {
        cout<<"Animal Walks !"<<endl;
    }
};

class Lion : virtual public Animal{
public:
Lion()
{
    cout<<"Constructor of Lion is called "<<endl;
}
};

class Tiger : virtual public Animal{
public:
Tiger()
{
    cout<<"Constructor of Tiger is called "<<endl;
}
};

class Liger : public Lion, public Tiger{
public:
Liger()
{
    cout<<"Constructor of Liger is called "<<endl;
}
};

int main()
{
    Liger ObjLiger;
    ObjLiger.Walk();
    return 0;
}
