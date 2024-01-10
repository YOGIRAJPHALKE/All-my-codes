#include <iostream>
using namespace std;

class Demo
{
public:
    int x, y;

    Demo()
    {
        cout << "Inside Demo constructor \n";
        x = 10;
        y = 20;
    }

    ~Demo()
    {
        cout << "Inside Demo destructor \n";
    }

    void fun()
    {
        cout << "Inside fun of Deno \n";
    }
};

// class HEllo extends Demo  (java syntax)
class Hello
{
public:
    int a, b;
    Hello()
    {
        cout << "Inside Hello constructor \n";
        a = 30;
        b = 40;
    }

    ~Hello()
    {
        cout << "Inside Hello destructor \n";
    }

    void gun()
    {
        cout << "Inside gun of Hello \n";
    }
};

// class Marvellous : public Demo,public Hello
class Marvellous : public Hello, public Demo

{
public:
    int p;

    Marvellous()
    {
        cout << "Inside constructor of Marvellous \n";
    }
    ~Marvellous()
    {
        cout << "Inside distroctor of Marvellous \n";
    }

    void sun()
    {
        cout << "Inside gun of Marvellous \n";
    }
};
int main()
{

    Marvellous mobj;

    cout << sizeof(mobj) << " \nbytes\n";

    mobj.fun();
    mobj.gun();
    mobj.sun();

    return 0;
}