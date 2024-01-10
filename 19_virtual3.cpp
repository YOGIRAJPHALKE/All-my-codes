

#include <iostream>
using namespace std;

class Base
{
public:
    int i, j, k;

    void Fun()    //DEFINATION
    {
        cout << "Inside Base fun \n";
    }
    void Gun()    //DEFINATION
    {
        cout << "Inside Base Gun \n";
    }
    void Sun()    //DEFINATION
    {
        cout << "Inside Base sun \n";
    }
    void Run()    //DEFINATION
    {
        cout << "Inside Base run \n";
    }
};
class Derived : public Base
{
public:
    int a, b;
    void Gun()    //REDEFINATION
    {
        cout << "Inside derived gun \n";
    }
     void Run()    //REDEFINATION
    {
        cout << "Inside derived Run \n";
    }
};

int main()
{

    Base *bp = new Derived;
bp->Fun();
bp->Gun();
bp->Sun();
bp->Run();

    return 0;
}

// g++ 18_virtual.cpp -o myexe

// 19_virtual3.cpp