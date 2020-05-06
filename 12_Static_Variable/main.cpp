#include <iostream>

using namespace std;
class Person{
public:
    static int person_count;

    Person()
    {
        person_count++;
    }
    void PersonTotal()
    {
        cout <<"There are " <<person_count <<" Persons are in this program" <<endl;
    }
};

int Person::person_count = 0;
int main()
{
    cout <<  Person::person_count << endl;
    Person ObjVignes;
    Person ObjSwarna;
    Person ObjArun;
    Person ObjSaranya;

    ObjVignes.PersonTotal();
    cout <<  Person::person_count << endl;
    return 0;
}
