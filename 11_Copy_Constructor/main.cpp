#include <iostream>
#include <string>

using namespace std;
class Person
{
public:
    int Age;
    string *strName;

    Person(string iname,int iAge)
    {
        this->Age = iAge;
        this->strName = new string(iname);
    }
    Person(const Person &p)
    {
        cout << "Copy Constructor is called"<<endl;
        this->Age = p.Age;
        this->strName = new string(*p.strName);
    }

    ~Person()
    {
        delete this->strName;
    }
    void UpdateNameandAge(string iname,int iAge)
    {
        this->Age = iAge;
        *(this->strName) = iname;
    }

    void introduce()
    {
        cout <<"My name is "<<*strName<<" and Age is " << Age<<endl;
    }
};


int main()
{
    Person ObjVignes("Vigneswaran",24);
    ObjVignes.introduce();

    Person DuplicateObjVignes = ObjVignes;
    DuplicateObjVignes.introduce();

    ObjVignes.UpdateNameandAge("Vicky",19);
    ObjVignes.introduce();
    DuplicateObjVignes.introduce();

    return 0;
}
