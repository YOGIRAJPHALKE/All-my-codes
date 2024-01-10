#include <iostream>
using namespace std;

class Demo
{
public:
    int i;
    int j;

    Demo()
    {
        cout << "inside default constructor\n";
        i = 0;
        j = 0;

        cout<<i<<"   "<<j<<"\n";
    }

    Demo(int A, int B)
    {
        cout << "Inside parametrised constructor \n";
        i = A;
        j = B;

        cout<<i<<"   "<<j<<"\n";
    }

    Demo(Demo &ref)
    {
        cout << "Inside Copy constructor \n";
        i = ref.i;
        j = ref.j;

        cout<<i<<"   "<<j<<"\n";
    }
    ~Demo()
    {
        cout<<"inside Destructor \n";
    }
};
int main()
{
    Demo obj1;
    Demo obj2(11,21);
    Demo obj3(obj2);
    return 0;
}