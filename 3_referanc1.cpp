#include <iostream>
using namespace std;

int main()
{
    int no = 11;
    int &ref = no;

    int *p =&no;
    int *(&q)=p;

    cout<<no<<"\n";
    cout<<ref<<"\n";

    cout<<&no<<"\n";
    cout<<&ref<<"\n";

    cout<<*p<<"\n";
    cout<<*q<<"\n";


    return 0;
}


//c++ 3_referanc1.cpp -o myexe