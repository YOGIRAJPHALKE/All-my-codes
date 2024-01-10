#include <stdio.h>

int main()
{
    int i = 10;
    signed int j = 20;
    signed int k = -10;
    unsigned int a = 40;
    int x=10;
    short y=10;
    long int z=4;

    printf("%d \n", i);
    printf("%d \n", j);
    printf("%d \n", k);
    printf("%d \n", a);

    printf("size of  is : %d \n",sizeof(x));
    printf("size of  is : %d \n",sizeof(y));
    printf("size of  is : %d \n",sizeof(z));

    return 0;
}