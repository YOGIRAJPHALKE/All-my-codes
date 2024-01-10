#include <stdio.h>

int main()
{
    int i = 10;
    int no = 0;

    no = i++;

    printf("%d", no);
    printf("%d", i);

    int a = 10;
    int no1 = 0;

    no1 = ++i;

    printf("%d", no1);
    printf("%d", a);
    return 0;
}
