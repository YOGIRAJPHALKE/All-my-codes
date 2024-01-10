#include <iostream>
using namespace std;

class Demo
{
public:
    int i;
    int j;
    static int k;

    Demo(int a = 10, int b = 30)
    {
        i = a;
        j = b;
    }

    void display()
    {
        cout << "Value of i " << i << "\n";
        cout << "Value of j " << j << "\n";
    }
};

int Demo::k = 111;
int main()
{

    cout << "value of k is : " << Demo::k << "\n";

    Demo obj(11, 21);
    Demo obj1(51, 101);
    Demo obj2(121, 151);

    cout << "size of object is : " << sizeof(obj) << "\n";

    obj.display();
    obj1.display();
    obj2.display();
    return 0;
}