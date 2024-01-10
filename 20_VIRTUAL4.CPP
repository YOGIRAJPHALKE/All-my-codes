

#include <iostream>
using namespace std;

class Base
{
public:
    int i, j, k;

    virtual void Fun() // 1000
    {
        cout << "Inside Base fun \n";
    }
    virtual void Gun() // 2000
    {
        cout << "Inside Base Gun \n";
    }
    void Sun() // 3000
    {
        cout << "Inside Base sun \n";
    }
    void Run() // 4000
    {
        cout << "Inside Base run \n";
    }
};
class Derived : public Base
{
public:
    int a, b;
    virtual void Gun() // REDEFINATION
    {
        cout << "Inside derived gun \n";
    }
    void Run() // REDEFINATION
    {
        cout << "Inside derived Run \n";
    }
    virtual void Mun() // REDEFINATION
    {
        cout << "Inside derived Mun \n";
    }
};

int main()
{
    cout << sizeof(Base) << "\n";
    cout << sizeof(Derived) << "\n";
  
    Base *bp = new Derived;
    bp->Fun(); // Base Fun
    bp->Gun(); // Derived Gun
    bp->Sun(); // Base Sun
    bp->Run(); // Base Run
    // bp->Mun();   //error

    return 0;
}

// g++ 20_VIRTUAL4.CPP.cpp -0 myexe