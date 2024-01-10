#include <iostream>
using namespace std;

class Demo
{
public:
    int i;
    int j;

    Demo(int a = 10, int b = 30)
    {
        i = a;
        j = b;
    };

    void display()
    {
        cout << "Value of i " << i << "\n";
        cout << "Value of j " << j << "\n";
    }
};
int main()
{
    Demo obj;
    obj.display();

    Demo obj1(12);
    obj1.display();

    Demo obj2(51, 101);
    obj2.display();

    return 0;
}