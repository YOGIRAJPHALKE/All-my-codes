
#include <iostream>
using namespace std;

class Base
{
public:
    int i, j, k;

    void fun() // Concrete method
    {
        cout << "BAse fun \n";
    }
    virtual void gun() // Concrete method
    {
        cout << "Base gun \n";
    }
    virtual int Addition(int no1, int no2) = 0; // abstarct method
};
class Derived : public Base
{
public:
    int a, b;
    void gun() // Concrete method
    {   cout << "derived gun \n"; }
    virtual void sun() // Concrete method
    {   cout << "Derived sun \n";}
    int Addition(int no1, int no2)
    { return no1 + no2;}
};
int main()
{
    //Base bobj;
    Base *bp = new Derived;

    bp->fun();
    bp->gun();
    int Ret = 0;
    Ret = bp->Addition(10, 11);
    cout << "addition is :" << Ret << "\n";

    return 0;
}

// 21_pure_virtual.cpp