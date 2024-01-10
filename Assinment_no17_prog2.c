#include <stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    for (iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t#\t", iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number of element : ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}

// gcc Assinment_no17_prog2.c -o myexe
