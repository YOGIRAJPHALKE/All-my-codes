#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';

    for (i = 1; i <= iRow; i++)
    {
        ch = 'a';
        for (j = 1; j <= iCol; j++, ch++)
        {
            if (i % 2 != 0)
            {
                printf("%c\t", ch);
            }
            else
            {
                printf("%d\t", j);
            }
        }

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

// gcc Assinment_no20_prog3.c -o myexe
