#include <stdio.h>

int Count(int iNo)
{
    int iDigit = 0;
    int iAns = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if (iDigit < 6)
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

    iRet = Count(iValue);
    printf("%d\n", iRet);
    return 0;
}

// gcc Assinment_no11_prog5.c -o myexe