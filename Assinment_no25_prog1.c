#include <stdio.h>

void DisplayASCII()
{
    int iCnt = 0;
    printf("_______________________________________________\n");
    printf("_________________ ASCII Table_____________________\n");
    printf("_______________________________________________\n");
    for (iCnt = 0; iCnt <= 127; iCnt++)
    {
        printf("%c\t%d\t%o\t%x\n", iCnt, iCnt, iCnt, iCnt);
    }
    printf("_______________________________________________\n");
}

int main()
{
    DisplayASCII();

    return 0;
}

// gcc Assinment_no25_prog1.c -o myexe