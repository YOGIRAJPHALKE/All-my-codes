#include <stdio.h>

int main()
{
    char ch = 'a';
    int i = 10;
    float f = 12.52f;
    double d = 52.5464;

    printf("size of chaar is : %d bytes \n", sizeof(ch));
    printf("size of integer is : %d bytes \n", sizeof(i));
    printf("size of float is : %d bytes \n", sizeof(f));
    printf("size of double is : %d bytes \n", sizeof(d));

     printf("base addres of chaar is : %u bytes \n", &ch);
    printf("base addres of integer is : %u bytes \n",&i);
    printf("base addres of float is : %u bytes \n",&f);
    printf( "base addres of double is : %u bytes \n",&d);

    return 0;
}