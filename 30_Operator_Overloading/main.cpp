#include <iostream>

using namespace std;

class Marks{

    int intmark;
    int extmark;
public:
    Marks()
    {
        intmark = 0;
        extmark = 0;
    }
    Marks(int im, int em)
    {
        intmark = im;
        extmark = em;
    }
    void display()
    {
        cout<<intmark << endl << extmark <<endl;
    }
    Marks operator+(Marks m)
    {
        Marks temp;
        temp.intmark  = intmark + m.intmark;
        temp.extmark  = extmark + m.extmark;
        return temp;
    }
};

int main()
{
    Marks m1(50,60), m2(30,40);
    Marks tot = m1 + m2;
    tot.display();
    return 0;
}
