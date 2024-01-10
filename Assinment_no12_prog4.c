#include <stdio.h>

int MultDigit(int iNo)
{
    int iDigit = 0;
    int iAns = 1;
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if (iDigit != 0)
        {
            iAns = iAns * iDigit;
        }
    }
    return iAns;
}

int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = MultDigit(iValue);
    printf("%d\n", iRet);
    return 0;
}

// gcc Assinment_no12_prog4.c -o myexe