#include<stdio.h>
#pragma pack(1)
struct Demo
{
    int i;
    char ch;
    float f;
    double d;
};

int main()
{
    struct Demo obj;

    printf("size of : %d \n",sizeof(obj));
    return 0;
}