#include <stdio.h>

int main()
{
    int Standered = 0;
    printf("Primary Shcool Portal \n");

    printf("enter your Standered : \n");
    scanf("%d", &Standered);

    switch (Standered)
    {
    case 1:
        printf("your exam is at 1pm \n");
        break;
    case 2:
        printf("your exam is at 2pm \n");
        break;
    case 3:
        printf("your exam is at 3pm \n");
        break;
    case 4:
        printf("your exam is at 4pm \n");
        break;
    default:
        printf("Invalid Standered\n");
        break;
    }
    return 0;
}