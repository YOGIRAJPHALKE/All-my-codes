#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, a = 1;

    for (i = 1; i <= iRow; i++)
    {
        if (i % 2 != 0)
        {
            a = 2;
        }
        for (j = 1; j <= iCol; j++, a++, a++)
        {
            printf("%d\t", a);
        }
        a = 1;
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of Rows And Colomns : ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}

// gcc Assinment_no20_prog2.c -o myexe
