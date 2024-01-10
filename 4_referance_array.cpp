#include <iostream>
using namespace std;

int main()
{
int Arr[4]={10,20,30,40};
int(&Brr)[4]=Arr;

cout<<Arr[3]<<"\n";
    cout<<Brr[3]<<"\n";

    return 0;
}
