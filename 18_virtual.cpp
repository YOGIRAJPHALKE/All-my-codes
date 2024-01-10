
#include <iostream>
using namespace std;

class Base
{
public:
    int i, j, k;

    void Fun()
    {
        cout << "Inside derived gun \n";
    }
};
class Derived : public Base
{
public:
    int a, b;
    void Gun()
    {
        cout << "Inside derived gun \n";
    }
};

int main()
{
    Base bobj;
    Derived dobj;

    cout << Sizeof(bobj) << "\n";
    cout << Sizeof(dobj) << "\n";

    bobj.Fun();

    dobj.Fun();
    dobj.Gun();
    return 0;
}

// g++ 16_access_specifir_with_inheritance.cpp -o myexe