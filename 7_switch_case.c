#include <stdio.h>

int main()
{
    int Standered = 0;
    printf("Primary Shcool Portal \n");

    printf("enter your Standered : \n");
    scanf("%d", &Standered);

    if (Standered == 1)
    {
        printf("your exam is at 1pm \n");
    }
    else if (Standered == 2)
    {
        printf("your exam is at 2pm \n");
    }
    else if (Standered == 3)
    {
        printf("your exam is at 3pm \n");
    }
    else if (Standered == 4)
    {
        printf("your exam is at 4pm \n");
    }
    else
    {
        printf("invalid choice");
    }
    return 0;
}