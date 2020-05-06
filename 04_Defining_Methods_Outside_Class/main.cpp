#include <iostream>
#include <string.h>

using namespace std;
class Human
{
public:
    string strName;
    void introduce();
};

void Human :: introduce()
{
        cout << "Hello I am" <<Human::strName << "!"<<endl;
}

int main()
{
    Human ObjVignes;
    Human *PtrObjSwarna = new Human();

    /*1 - > Normal Way */
    ObjVignes.strName = "Vigneswaran";
    ObjVignes.introduce();

    /*2 - > Using Pointers */
    PtrObjSwarna->strName = "Swarnalakshmi";
    PtrObjSwarna->introduce();

    return 0;
}
