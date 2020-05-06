#include <iostream>
#include <string.h>
using namespace std;

class Human
{
public:
    string strName;
    void introduce()
    {
        cout << "Hello I am" <<strName << "!"<<endl;
    }
};

int main()
{
    /*1 - > Normal Way */
    Human ObjVignes;
    ObjVignes.strName = "Vigneswaran";
    ObjVignes.introduce();

    /*2 - > Using Pointers */
    Human *PtrObjSwarna = new Human();
    PtrObjSwarna->strName = "Swarnalakshmi";
    PtrObjSwarna->introduce();

    return 0;
}
