#include <iostream>
using namespace std;

class Demo
{

public:
    int i, j;
    Demo(int a = 10, int b = 20)
    {
        i = a;
        j = b;
    }
};

Demo operator+(Demo op1, Demo op2)
{
    cout << "inside operator overloading \n";
    return Demo(op1.i + op2.i, op1.j + op2.j);
}
int main()
{
    Demo obj1(11, 21);
    Demo obj2(5, 6);
    Demo obj(0, 0);

    obj = obj1 + obj2;
    // obj = +(obj1 , obj2);
    cout << obj.i << "\n";
    cout << obj.j << "\n";

    return 0;
}

// g++ 48_operater_overlloading2.cpp -o myexe
