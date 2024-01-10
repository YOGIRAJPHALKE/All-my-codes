#include <stdio.h>
#include <stdbool.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;
    BOOL bAns = FALSE;
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if (iDigit == 0)
        {
            bAns = TRUE;
        }
    }
    return bAns;
}

int main()
{

    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);

    if (bRet == TRUE)
    {
        printf("It contains Zero\n");
    }
    else
    {
        printf("Thre is no Zero\n");
    }
    return 0;
}

// gcc Assinment_no11_prog2.c -o myexe