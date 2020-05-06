#include <iostream>
#include <string.h>
using namespace std;

class HumanBeing
{
public:
    string strName;
    void display()
    {
        cout << "Hello I am" <<strName << "!"<<endl;
    }
};


int main()
{
    HumanBeing ObjVignes;
    ObjVignes.strName = "Vigneswaran";
    ObjVignes.display();

    HumanBeing ObjSwarna;
    ObjSwarna.strName = "Swarnalakshmi";
    ObjSwarna.display();

    return 0;
}
