#include <iostream>
using namespace std;

class Demo
{
public:
    int i;
    int j;
    int k;

// Demo (Demo *this ,int a=10,int b=20,int c=30)
    Demo(int a = 10, int b = 20, int c = 30)
    {
        cout <<"value of this is: "<< this <<"\n";
        this->i = a;
        this->j = b;
        this->k = c;
    }

    //void Fun (Demo *this .int  No1,int No2)
    void Fun(int No1, int No2)
    {
        cout << "Inside Fun \n";
        cout << "value of i: " << this->i << "\n";
        cout << "value of j: " << this->j << "\n";
    }

    void Display()
    {
       // cout << "Inside Display \n";
        cout<<"Value od this pointer is : "<<this<<"\n";
    }
};

int main()
{
    Demo obj1;

    Demo obj2(11, 21, 51);

    obj1.Fun(5, 6);
    obj2.Fun(8, 9);

   cout<<"Addres of obj1 is "<<&obj1<<"\n";
    obj1.Display();

    cout<<"Addres of obj2 is "<<&obj2<<"\n";
    obj2.Display();

    
    return 0;
}