#include <stdio.h>

int CountTwo(int iNo)
{
    int iDigit = 0;
    int iAns = 00;
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if (iDigit == 2)
        {
            iAns++;
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

    iRet = CountTwo(iValue);
    printf("%d\n", iRet);
    return 0;
}

// gcc Assinment_no11_prog3.c -o myexe