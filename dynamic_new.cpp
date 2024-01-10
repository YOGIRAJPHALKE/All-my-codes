#include<stdlib.h>
#include<iostream>
using namespace std;
int main()
{

    int Arr[5];
    int *ptr1=(int *) malloc(5*sizeof(int));

    int *ptr2 = new int[5];

    free(ptr1);

    delete []ptr2;

    return 0;
}