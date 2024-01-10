#include <stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    char ch = 'A';
    for (iCnt = 1; iCnt <= iNo; iCnt++, ch++)
    {
        printf("%c\t", ch);
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

// gcc Assinment_no17_prog1.c -o myexe
