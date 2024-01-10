#include <iostream>
using namespace std;

class Demo
{
public:
    int Addition(int A, int B)
    {
        int Ans =0;
        Ans =A+B;
        return Ans;
    }
    int Addition (int A,int B ,int C)
    {
        int Ans=A+B+C;
        return Ans;
    }
    float Addition (float A,float B){
        int Ans=0;
        Ans=A+B;
        return Ans;
    }
};

int main()
{
Demo obj;

    int i=10,j=20,k=30;
    int Ret =0;
    float p=90.0,q=80.0,fRet=0.0;

    Ret =obj.Addition(i,j);
    cout <<"Additionn is : "<<Ret<<"\n";

    Ret =obj.Addition(i,j,k);
    cout <<"Additionn is : "<<Ret<<"\n";

    fRet =obj.Addition(p,q);
    cout <<"Additionn is : "<<fRet<<"\n";

    return 0;
}