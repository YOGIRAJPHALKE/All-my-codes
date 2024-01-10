
#include <iostream>
using namespace std;

class Demo
{
    int i;

public:
    int j;

private:
    int k;

protected:
    int a;

public:
    Demo()
    {
        i = 10;
        j = 20;
        k = 30;
        a = 40;
    }
    void Display()
    {
       cout<<"Value of i:"<<i<<"\n";    //A 
        cout<<"Value of i:"<<j<<"\n";   //A
        cout<<"Value of i:"<<k<<"\n";    //A
        cout<<"Value of i:"<<a<<"\n";    //A
    }
};

int main()
{
Demo obj;

       // cout<<"Value of i:"<<obj.i<<"\n";     //NA  
        cout<<"Value of i:"<<obj.j<<"\n";     //A
        //cout<<"Value of i:"<obj.<k<<"\n";     //NA
        //cout<<"Value of i:"<<obj.a<<"\n";     //NA 

        obj.Display();

    return 0;
}

//g++ 15_access_specifir.cpp -o myexe