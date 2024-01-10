#include <stdio.h>

int main()
{
    int No = 0;
    int Ans = 0;
    printf("enter a number: \n");
    scanf("%d ", &No);
    Ans = No % 2;
    if (Ans == 0)
    {
        printf("even \n");
    }
    else
    {
        printf("odd\n");
    }

    return 0;
}