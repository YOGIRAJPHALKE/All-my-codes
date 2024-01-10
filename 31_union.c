#include<stdio.h>

union Demo
{
    int i;
    char ch;
    float f;
    double d;
};

int main()
{
    union Demo obj;

    printf("size of : %d \n",sizeof(obj));

    obj.f=90.99;
    printf("%d",obj.f);

     obj.i=90;
    printf("%d",obj.i);
    return 0;
}