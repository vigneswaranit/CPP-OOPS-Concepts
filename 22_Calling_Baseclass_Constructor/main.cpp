#include <iostream>

using namespace std;

class Father{
protected:
    int height;

public:
    Father(int h)
    {
        height = h;
        cout<<"Father class constructor is called"<<endl;

    }
};


class Mother
{
public:
    string skincolor;
    Mother(string color)
    {
        skincolor = color;
        cout<<"Mother class constructor is called"<<endl;
    }
};

class Child : public Father, public Mother
{
public:
    Child(int h, string color):Father(h),Mother(color){
    cout<<"Child class constructor is called"<<endl;
    }

    void display()
    {
        cout<<"Height is " << height << " and Color is "<<skincolor<<endl;
    }
};




int main()
{
    Child ObjChild(170,"black");
    ObjChild.display();
    return 0;
}
