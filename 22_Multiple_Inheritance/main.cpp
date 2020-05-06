#include <iostream>

using namespace std;

class Father
{
public:
    int height;
    void askFather()
    {
        cout<<"I am your father ! Ask me what you want !"<<endl;
    }
};

class Mother
{
public:
    string skincolor;
    void askMother()
    {
        cout<<"I am your mother ! Ask me what you want !"<<endl;
    }
};

class Child :public Father, public Mother
{
public:
    void askParents()
    {
        cout<<"I am your Child! Asking Parents !!"<<endl;
    }
    void setheightandcolor(int iheight, string icolor)
    {
        height = iheight;
        skincolor = icolor;
    }
    void display()
    {
        cout<<"My Height is "<<height<< " and Skin Color is " <<skincolor<<endl;
    }
};



int main()
{
    Child ObjVignes;
    ObjVignes.setheightandcolor(170,"Black");
    ObjVignes.display();
    ObjVignes.askFather();
    ObjVignes.askMother();
    return 0;
}
